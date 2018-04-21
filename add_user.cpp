#include "add_user.h"

AddUser::AddUser()
{
    this->selectedFinger = 0;
    this->actualStep = 0;
    this->isCapturing = false;
    this->fingerNames.push_back("left pinky finger");
    this->fingerNames.push_back("left ring finger");
    this->fingerNames.push_back("left middle finger");
    this->fingerNames.push_back("left index finger");
    this->fingerNames.push_back("left thumb");
    this->fingerNames.push_back("right thumb");
    this->fingerNames.push_back("right index finger");
    this->fingerNames.push_back("right middle finger");
    this->fingerNames.push_back("right ring finger");
    this->fingerNames.push_back("right pinky finger");
}

void AddUser::setToDefault(GuiHandler &guiH_)
{
    this->capturedFingers.clear();
    this->fingersData.clear();
    for (int i = 0; i < 10; i++) {
        changeButtonColor(guiH_);
    }
    changeImage(guiH_, 1);
}

void AddUser::removeFingerprint(GuiHandler &guiH_, int fingerNum)
{
    int i = 0;
    if (!this->fingersData.empty()){
        for (std::tuple<int, cv::Mat, int, int>  finger : this->fingersData) {
            if (std::get<0>(finger) == fingerNum) {
                this->fingersData.removeAt(i);
                i--;
            }
            i++;
        }
    }
    i = 0;
    if (!this->capturedFingers.empty()){
        for (int  finger : this->capturedFingers) {
            if (finger == fingerNum) {
                this->capturedFingers.removeAt(i);
                i--;
            }
            i++;
        }
    }

    this->actualStep = 0;
    setStepCheckboxes(guiH_);

    if (this->fingersData.empty()) {
        guiH_.changeButtonState("saveUser", false);
        guiH_.changeButtonState("clear", false);
    }
}

void AddUser::changeImage(GuiHandler &guiH_, int fingerNum)
{
    QImage fingerHelpImg = QImage("./core/config/images/finger" + QString::number(fingerNum) + ".png");
    guiH_.changeImage("finger", fingerHelpImg);
    guiH_.setLabelText("addUserInstructions", "Please place your " + this->fingerNames.at(this->selectedFinger - 1) + " on the fingerprint scanner", "black");
    setStepCheckboxes(guiH_);
    if (this->actualStep < 5 && this->isCapturing) {
        guiH_.changeButtonState("capture", true);
    }
    if (this->actualStep == 0) guiH_.changeButtonState("clear", false);
    else guiH_.changeButtonState("clear", true);
}

void AddUser::setStepCheckboxes(GuiHandler &guiH_)
{
    getActualStep();

    for (int i = 0; i < STEP_NUM; i++) {
        if (this->actualStep > i) guiH_.setRadioValue("step" + QString::number(i+1), true);
        else guiH_.setRadioValue("step" + QString::number(i+1), false);
    }
}

void AddUser::changeButtonColor(GuiHandler &guiH_)
{
    bool done[10] = {false, false, false, false, false, false, false, false, false, false};
    for (int i = 1; i < 11; i++) {
        if (!done[i-1]) {
            if (i == this->selectedFinger) {
                guiH_.changeButtonColor("finger" + QString::number(i), "#e4eff9", "#0b7bd4");
                done[i-1] = true;
            }
            else {
                for (int finger : this->capturedFingers) {
                    guiH_.changeButtonColor("finger" + QString::number(finger), "#5ada71", "#06b025");
                    done[finger-1] = true;
                }
                for (std::tuple<int, cv::Mat, int, int> finger : fingersData) {
                    if (std::get<0>(finger) == i && !done[std::get<0>(finger)-1]) {
                        guiH_.changeButtonColor("finger" + QString::number(std::get<0>(finger)), "#ffe385", "#ffcd24");
                        done[std::get<0>(finger)-1] = true;
                    }
                }
            }
        }
        if (!done[i-1]) guiH_.changeButtonColor("finger" + QString::number(i), "#e1e1e1", "#adadad");
    }
}

void AddUser::getActualStep()
{
    this->actualStep = 0;
    if(!this->fingersData.empty()){
        for (std::tuple<int, cv::Mat, int, int> finger : fingersData) {
            if (std::get<0>(finger) == this->selectedFinger)
                if (this->actualStep < std::get<2>(finger)) this->actualStep = std::get<2>(finger);
        }
    }
}

int AddUser::captureFingerprint(GuiHandler &guiH_)
{
    if (this->fpQuality != 0) {
        getActualStep();
        this->fingersData.push_back({this->selectedFinger, h.QImage2Mat(this->qImgFp, CV_8UC1), this->actualStep + 1, this->fpQuality});
        this->actualStep++;
        setStepCheckboxes(guiH_);
        if (this->actualStep == 5) {
            this->capturedFingers.push_back(this->selectedFinger);
            guiH_.changeButtonState("capture", false);
        }

        guiH_.changeButtonState("saveUser", true);
        guiH_.changeButtonState("clear", true);
        changeButtonColor(guiH_);

        return 1;
    }
    else return 0;
}

int AddUser::getSelectedFinger() const
{
    return selectedFinger;
}

void AddUser::setSelectedFinger(int value)
{
    selectedFinger = value;
}

QImage AddUser::getQImgFp() const
{
    return qImgFp;
}

void AddUser::setQImgFp(const QImage &value)
{
    qImgFp = value;
}

QVector<std::tuple<int, cv::Mat, int, int> > AddUser::getFingersData() const
{
    return fingersData;
}

int AddUser::getFpQuality() const
{
    return fpQuality;
}

void AddUser::setFpQuality(int value)
{
    fpQuality = value;
}

bool AddUser::getIsCapturing() const
{
    return isCapturing;
}

void AddUser::setIsCapturing(bool value)
{
    isCapturing = value;
}
