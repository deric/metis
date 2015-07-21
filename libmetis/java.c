
#include "metislib.h"
#include <jni.h>
#include "java.h"

JNIEXPORT jint JNICALL Java_edu_umn_metis_MetisNative_PartGraphRecursive(JNIEnv *env, jobject thisObj){
  return 1;
}

JNIEXPORT jint JNICALL Java_edu_umn_metis_MetisNative_PartGraphKway(JNIEnv *env, jobject thisObj){
  return 2;
}

