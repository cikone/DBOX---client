#ifndef MINUTIAE_MARKER_H
#define MINUTIAE_MARKER_H

#include <QObject>

// OpenCV
#include "opencv2/opencv.hpp"

#include "gui_handler.h"
#include "../D-Box_Server/response_expert.h"
#include "../D-Box_Server/request.h"
#include "helper.h"

class MinutiaeMarker
{
public:
    MinutiaeMarker();
    void countMinutiae(ResponseExpert resExp, int &cnEnding_, int &cnBifurcation_, int &nnEnding_, int &nnBifurcation_, int &nnFalseMinutiae_);
    cv::Mat getImgMarked(GuiHandler &guiH_, Request req, ResponseExpert resExp);
};

#endif // MINUTIAE_MARKER_H
