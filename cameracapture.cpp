#include<iostream>
#include<opencv2/opencv.hpp>
using namespace std;
using namespace cv;
 
int main()
{
    VideoCapture capture(0);
    capture.set(CV_CAP_PROP_FRAME_WIDTH,600);
    capture.set(CV_CAP_PROP_FRAME_HEIGHT,400);
    if(!capture.isOpened()){
        cout << "Failed to connect to the camera." << endl;
    }
    Mat frame;
    capture >> frame;
   
imwrite("capture.png", frame);
    return 0;
}

