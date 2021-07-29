
#include <jni.h>
#include <cstdio>
#include <cstring>
#include <iostream>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_tatv_ndkexample_MainActivity_Main(JNIEnv *env, jobject /*this*/){
    std::string text = "Hello TATV";
    return env->NewStringUTF(text.c_str());
}