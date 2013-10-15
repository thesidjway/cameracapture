#include "cv.h"
#include "highgui.h"

using namespace cv;

int main(int, char**)
{

CvCapture *capture = cvCaptureFromCAM(CV_CAP_ANY);
IplImage *frame = cvQueryFrame(capture);
cvSaveImage("output.png", frame);
return 0;
}
