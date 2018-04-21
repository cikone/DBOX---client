#include "sensor_suprema.h"

SensorSuprema::SensorSuprema(GuiHandler &guiH) :
    guiH_(guiH)
{
    this->scanner = NULL;
    this->imageBuffer = NULL;
    this->init = false;

    this->nWidth = -1;
    this->nHeight = -1;
    this->nQuality = -1;
}

int SensorSuprema::scannerInit(int mode){


    UFS_STATUS ufs_stat;
    ufs_stat = UFS_Init(); // initializes a new scanner session

    qDebug() << "Scanner is successfully initialized.";

    int nScannerNumber=0; // number of available scanners

    ufs_stat = UFS_GetScannerNumber(&nScannerNumber); // checks the number of scanners
    if(ufs_stat != UFS_OK){
        return ufs_stat;
    }
    else{
        qDebug() << "Number of scanners available: " << nScannerNumber;
        ufs_stat = UFS_GetScannerHandle(nScannerNumber-1, &this->scanner); // gets the scanner object for communicating with the scanner
        if(ufs_stat != UFS_OK){
            return -1;
        }
        else{
            qDebug() << "Scanner handle obtained successfully.";

            int nValue;
            if (mode == 1) nValue = 5000;
            else if (mode == 2) nValue = 0;
            ufs_stat = UFS_SetParameter(this->scanner, UFS_PARAM_TIMEOUT, &nValue); // Set timeout for capturing images to 5 seconds
            if(ufs_stat != UFS_OK){
                return ufs_stat;
            }
            else{
                qDebug() << "Capture timeout set to 5 seconds";

                nValue = 1024;
                ufs_stat = UFS_SetParameter(this->scanner, UFS_PARAM_TEMPLATE_SIZE, &nValue); // Set template size to 1024 bytes
                if(ufs_stat != UFS_OK){
                    return ufs_stat;
                }
                else{
                    qDebug() << "Template size set to 1024 bytes";

                    nValue = 0;
                    ufs_stat = UFS_SetParameter(this->scanner, UFS_PARAM_DETECT_CORE, &nValue); // Set not to detect core when extracting template
                    if(ufs_stat != UFS_OK){
                        return ufs_stat;
                    }
                    else{
                        qDebug() << "Scanner is ready to use";
                        return UFS_OK;
                    }
                }
            }
        }
    }
}

void SensorSuprema::stopCapturing()
{
    UFS_AbortCapturing(this->scanner);
}

int UFS_CALLBACK CaptureProc(HUFScanner hScanner, int bFingerOn, unsigned char* pImage, int nWidth, int nHeight, int nResolution, void* pParam)
{
    if (bFingerOn) {
        GuiHandler *guiH = (GuiHandler*)pParam;

        QImage qImg = QImage((uchar*)pImage, nWidth, nHeight, QImage::Format_Grayscale8);
        guiH->changeImage("livePreview", qImg);

        int nFPQuality;
        UFS_GetFPQuality(hScanner, pImage, nWidth, nHeight, &nFPQuality);
        guiH->setProgressBarValue("captureQuality", nFPQuality);
    }
    else {
        GuiHandler *guiH = (GuiHandler*)pParam;

        guiH->clearImageView("livePreview");
        guiH->setProgressBarValue("captureQuality", 0);
    }

    return 1;
}

int SensorSuprema::scannerCapture(BYTE** imageBuffer, int mode, int& nWidth, int& nHeight, int& nQuality)
{
    UFS_STATUS ufs_stat;
    ufs_stat = UFS_ClearCaptureImageBuffer(this->scanner); // Clear capture buffer
    if(ufs_stat != UFS_OK){
        return ufs_stat;
    }
    else{
        //qDebug() << "Image buffer is cleared.";
        //qDebug() << "Put your finger on the scanner surface [5 sec timeout]";

        if (mode == 1) ufs_stat = UFS_CaptureSingleImage(this->scanner); // Captures single image
        else if (mode == 2) {
            ufs_stat = UFS_StartCapturing(this->scanner, CaptureProc, ((void*)&guiH_));
        }


        if(ufs_stat != UFS_OK){
            return ufs_stat;
        }
        else{
            //qDebug() << "Fingerprint image captured.";

            int nResolution=0;
            ufs_stat = UFS_GetCaptureImageBufferInfo(this->scanner, &nWidth, &nHeight, &nResolution); // gets the image info
            if(ufs_stat != UFS_OK){
                return ufs_stat;
            }
            else{
                //qDebug() << "Image info: " << nWidth << " x " <<nHeight << " @ " << nResolution;

                if(*imageBuffer != NULL){
                    free(*imageBuffer);
                    *imageBuffer=NULL;
                }
                *imageBuffer = (BYTE*)malloc(nWidth * nHeight * sizeof(BYTE));
                ufs_stat = UFS_GetCaptureImageBuffer(this->scanner, *imageBuffer);
                if(ufs_stat != UFS_OK){
                    return ufs_stat;
                }
                else{
                    //qDebug() << "Image buffer obtained.";
                    ufs_stat = UFS_GetFPQuality(this->scanner, *imageBuffer, nWidth, nHeight, &nQuality);
                    if(ufs_stat != UFS_OK){
                        return ufs_stat;
                    }
                    else{
                        qDebug() << "Fingerprint quality estimated [" << nQuality << " of 100 ]";
                        return UFS_OK;
                    }

                }

            }

        }
    }
}

int SensorSuprema::captureImage(QImage &qImg, int mode)
{
    UFS_STATUS s;
    if((s = scannerInit(mode)) == UFS_OK || this->init == true) {
        this->init = true;
        UFS_STATUS s;

        if((s = scannerCapture(&(this->imageBuffer), mode, nWidth, nHeight, nQuality)) == UFS_OK){
            if (mode == 1) qImg = QImage((uchar*)imageBuffer, nWidth, nHeight, QImage::Format_Grayscale8);

            return 1;
        }
        else {
            /*char error[1024]; // error description string
            UFS_GetErrorString(s,error);
            qDebug() << "An error occured during image capturing: " << error;*/

            return -2; //Error during capturing
        }
    }
    else {
        /*char error[1024]; // error description string
        UFS_GetErrorString(s,error);
        qDebug() << "An error occured during scanner initializing: " << error;*/

        return -1; //The scanner is not available
    }
}

int SensorSuprema::getNQuality() const
{
    return nQuality;
}

void SensorSuprema::setNQuality(int value)
{
    nQuality = value;
}

int SensorSuprema::getNHeight() const
{
    return nHeight;
}

void SensorSuprema::setNHeight(int value)
{
    nHeight = value;
}

int SensorSuprema::getNWidth() const
{
    return nWidth;
}

void SensorSuprema::setNWidth(int value)
{
    nWidth = value;
}
