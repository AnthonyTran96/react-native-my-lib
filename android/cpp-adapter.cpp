#include <jni.h>
#include "react-native-my-lib.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_mylib_MyLibModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return mylib::multiply(a, b);
}
