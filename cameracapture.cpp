#include "opencv2/highgui/highgui.hpp"
#include <iostream>
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui_c.h"

using namespace std;
using namespace cv;
 
int main(int argc, char* argv[])
{
	int width, height;   
	cout<<"cameracapture "<<argv[0]<<" has "<<argc - 1<<" arguments\n";
	     int devNum = atoi(argv[1]);
    
	VideoCapture capture(devNum);
	capture.set(CV_CAP_PROP_FRAME_WIDTH, width);
   	capture.set(CV_CAP_PROP_FRAME_HEIGHT, height);
	cout << "Actual resolution: "<< capture.get(CV_CAP_PROP_FRAME_WIDTH) << "x" << capture.get(CV_CAP_PROP_FRAME_HEIGHT) << endl;
	    if(!capture.isOpened()){
	        cout << "Failed to connect to the camera." << endl;
		    }
	    Mat frame;
	    capture >> frame;
   		imwrite("capture.png", frame);
    return 0;
}

