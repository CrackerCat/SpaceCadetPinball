#include "SpaceCadetPinballJNI.h"
#include "SpaceCadetPinball/winmain.h"
#include <jni.h>

void SpaceCadetPinballJNI::show_error_dialog(std::string &title, std::string &message) {

}

extern "C"
JNIEXPORT void JNICALL
Java_com_dualscreenstudios_spacecadetpinball_MainActivity_initNative(JNIEnv *env, jobject thiz,
        jstring data_path) {
winmain::BasePath = (char *) env->GetStringUTFChars(data_path, nullptr);
}