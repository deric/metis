#include <jni.h>
/* Header for class edu_umn_metis_MetisNative */

#ifndef _Included_edu_umn_metis_MetisNative
#define _Included_edu_umn_metis_MetisNative
#ifdef __cplusplus
extern "C" {
#endif
  /*
   *  * Class:     edu_umn_metis_MetisNative
   *   * Method:    PartGraphRecursive
   *    * Signature: ()I
   *     */
  JNIEXPORT jint JNICALL Java_edu_umn_metis_MetisNative_PartGraphRecursive
      (JNIEnv *, jobject);

  /*
   *  * Class:     edu_umn_metis_MetisNative
   *   * Method:    PartGraphKway
   *    * Signature: ()I
   *     */
  JNIEXPORT jint JNICALL Java_edu_umn_metis_MetisNative_PartGraphKway
      (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif

