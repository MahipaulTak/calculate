#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <stdio.h>

using namespace std;
using namespace cv;

int main(int argc, char  ** argv) {

Mat unprocessed, gray, processedgray;

    //read in unprocessed image
    unprocessed = imread(argv[1],1);
    // convert to gray
    cvtColor(unprocessed, gray, CV_BGR2GRAY);

    for( int y = 0; y < gray.rows; y++ )
    { for( int x = 0; x < gray.cols; x++ ){
        if (gray.at<uchar>(x,y) != 255) {
            printf("0");}
            else{printf("1");}
        }
        printf("\n");
    }
    
    
    
    
    
    namedWindow( "gray", CV_WINDOW_AUTOSIZE );
    imshow( "gray", gray );


    
    
    
    waitKey(0);
    return 0;

}
