#include "minutiae_marker.h"

MinutiaeMarker::MinutiaeMarker()
{

}

void MinutiaeMarker::countMinutiae(ResponseExpert resExp, int &cnEnding_, int &cnBifurcation_, int &nnEnding_, int &nnBifurcation_, int &nnFalseMinutiae_)
{
    if(!resExp.getMinutiaeData().empty()){
        QVector<std::tuple<int, int, int, int, int>> minutiaeData = resExp.getMinutiaeData();;
        for (std::tuple<int, int, int, int, int> minutiae : minutiaeData) {
            if (std::get<2>(minutiae) == 1) {
                cnEnding_++;
            }
            else if (std::get<2>(minutiae) == 2) {
                cnBifurcation_++;
            }
            else if (std::get<2>(minutiae) == 3) {
                nnEnding_++;
            }
            else if (std::get<2>(minutiae) == 4) {
                nnBifurcation_++;
            }
            else if (std::get<2>(minutiae) == 5) {
                nnFalseMinutiae_++;
            }
        }
    }
}

cv::Mat MinutiaeMarker::getImgMarked(GuiHandler &guiH_, Request req, ResponseExpert resExp)
{
    cv::Mat imgMarked;
    cv::cvtColor(req.getImg(), imgMarked, cv::COLOR_GRAY2RGB);

    if(!resExp.getMinutiaeData().empty()){
        QVector<std::tuple<int, int, int, int, int>> minutiaeData = resExp.getMinutiaeData();;
        for (std::tuple<int, int, int, int, int> minutiae : minutiaeData) {
            if (std::get<2>(minutiae) == 1 && guiH_.getRadioValue("cnEnding")) {
                cv::rectangle(imgMarked, cv::Rect(std::get<0>(minutiae) - 6, std::get<1>(minutiae) - 6, 13, 13), cv::Scalar(0, 0, 255), 1, 1, 0);
            }
            else if (std::get<2>(minutiae) == 2 && guiH_.getRadioValue("cnBifurcation")) {
                cv::rectangle(imgMarked, cv::Rect(std::get<0>(minutiae) - 6, std::get<1>(minutiae) - 6, 13, 13), cv::Scalar(0, 255, 0), 1, 1, 0);
            }
            else if (std::get<2>(minutiae) == 3 && guiH_.getRadioValue("nnEnding")) {
                if (guiH_.getRadioValue("probability")) {
                    if (guiH_.getFieldValue("probability") > std::get<3>(minutiae)) {
                        cv::circle(imgMarked, cv::Point(std::get<0>(minutiae), std::get<1>(minutiae)), 7, cv::Scalar(255, 255, 0), 1, 20);
                    }
                }
                cv::circle(imgMarked, cv::Point(std::get<0>(minutiae), std::get<1>(minutiae)), 6, cv::Scalar(0, 0, 255), 1, 20);
            }
            else if (std::get<2>(minutiae) == 4 && guiH_.getRadioValue("nnBifurcation")) {
                if (guiH_.getRadioValue("probability")) {
                    if (guiH_.getFieldValue("probability") > std::get<3>(minutiae)) {
                        cv::circle(imgMarked, cv::Point(std::get<0>(minutiae), std::get<1>(minutiae)), 7, cv::Scalar(255, 255, 0), 1, 20);
                    }
                }
                cv::circle(imgMarked, cv::Point(std::get<0>(minutiae), std::get<1>(minutiae)), 6, cv::Scalar(0, 255, 0), 1, 20);
            }
            else if (std::get<2>(minutiae) == 5 && guiH_.getRadioValue("nnFalseMinutiae")) {
                if (guiH_.getRadioValue("probability")) {
                    if (guiH_.getFieldValue("probability") > std::get<3>(minutiae)) {
                        cv::circle(imgMarked, cv::Point(std::get<0>(minutiae), std::get<1>(minutiae)), 7, cv::Scalar(255, 255, 0), 1, 20);
                    }
                }
                cv::circle(imgMarked, cv::Point(std::get<0>(minutiae), std::get<1>(minutiae)), 6, cv::Scalar(255, 0, 0), 1, 20);
            }
        }
    }

    return imgMarked;
}
