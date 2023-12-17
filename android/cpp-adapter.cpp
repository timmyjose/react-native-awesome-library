#include <jni.h>
#include "react-native-awesomelibrary.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_awesomelibrary_AwesomelibraryModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return awesomelibrary::multiply(a, b);
}
