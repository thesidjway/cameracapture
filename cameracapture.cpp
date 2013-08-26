#include "cv.h"
#include "highgui.h"

using namespace cv;

int main(int, char**)
{
    VideoCapture cap(0); // open the default camera

Mat frame;
    namedWindow("feed",1);
//    for(;;)
{
    Mat frame;
    cap >> frame;   // get a new frame from camera
    //imshow("feed", frame);
imwrite("output.png", frame);    
//if(waitKey(1) >= 0) break;
}
    return 0;
}
