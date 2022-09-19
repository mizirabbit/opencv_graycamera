#include <jni.h>
#include <string>

#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgproc/types_c.h>

using namespace cv;

extern "C"
JNIEXPORT void JNICALL
Java_com_sallysoft_opencv_1exam2_MainActivity_ConvertRGBtoGray(JNIEnv *env, jobject instance,
                                                               jlong matAddrInput,
                                                               jlong matAddrResult) {
    // TODO
    Mat &matInput = *(Mat *)matAddrInput;
    Mat &matResult = *(Mat *)matAddrResult;

    cvtColor(matInput, matResult, CV_RGBA2GRAY);
}