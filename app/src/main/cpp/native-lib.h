//
// Created by mengc on 1/29/2019.
//

#ifndef TANKARENA2_NATIVE_LIB_H
#define TANKARENA2_NATIVE_LIB_H

#include <jni.h>

JNIEXPORT void JNICALL
Java_com_crazygame_tankarena2_NativeLibWrapper_on_1surface_1created(JNIEnv *env, jclass cls,
                                                                    jint program_id);

JNIEXPORT void JNICALL
Java_com_crazygame_tankarena2_NativeLibWrapper_on_1surface_1changed(JNIEnv *env, jclass cls,
                                                                    jint width, jint height);

JNIEXPORT void JNICALL
Java_com_crazygame_tankarena2_NativeLibWrapper_on_1draw_1frame(JNIEnv *env, jclass cls);

#endif //TANKARENA2_NATIVE_LIB_H
