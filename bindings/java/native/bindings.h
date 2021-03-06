/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_sf_rhash_Bindings */

#ifndef _Included_org_sf_rhash_Bindings
#define _Included_org_sf_rhash_Bindings
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_sf_rhash_Bindings
 * Method:    rhash_library_init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_sf_rhash_Bindings_rhash_1library_1init
  (JNIEnv *, jclass);

/*
 * Class:     org_sf_rhash_Bindings
 * Method:    rhash_count
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_sf_rhash_Bindings_rhash_1count
  (JNIEnv *, jclass);

/*
 * Class:     org_sf_rhash_Bindings
 * Method:    rhash_msg
 * Signature: (I[BII)J
 */
JNIEXPORT jlong JNICALL Java_org_sf_rhash_Bindings_rhash_1msg
  (JNIEnv *, jclass, jint, jbyteArray, jint, jint);

/*
 * Class:     org_sf_rhash_Bindings
 * Method:    rhash_print_bytes
 * Signature: (JI)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_sf_rhash_Bindings_rhash_1print_1bytes
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_sf_rhash_Bindings
 * Method:    rhash_print_magnet
 * Signature: (JLjava/lang/String;I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_sf_rhash_Bindings_rhash_1print_1magnet
  (JNIEnv *, jclass, jlong, jstring, jint);

/*
 * Class:     org_sf_rhash_Bindings
 * Method:    rhash_is_base32
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_sf_rhash_Bindings_rhash_1is_1base32
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_sf_rhash_Bindings
 * Method:    rhash_get_digest_size
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_sf_rhash_Bindings_rhash_1get_1digest_1size
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_sf_rhash_Bindings
 * Method:    rhash_init
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_org_sf_rhash_Bindings_rhash_1init
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_sf_rhash_Bindings
 * Method:    rhash_update
 * Signature: (J[BII)V
 */
JNIEXPORT void JNICALL Java_org_sf_rhash_Bindings_rhash_1update
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jint);

/*
 * Class:     org_sf_rhash_Bindings
 * Method:    rhash_final
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_sf_rhash_Bindings_rhash_1final
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sf_rhash_Bindings
 * Method:    rhash_reset
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_sf_rhash_Bindings_rhash_1reset
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sf_rhash_Bindings
 * Method:    rhash_print
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_sf_rhash_Bindings_rhash_1print
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_sf_rhash_Bindings
 * Method:    rhash_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_sf_rhash_Bindings_rhash_1free
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sf_rhash_Bindings
 * Method:    compareDigests
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_sf_rhash_Bindings_compareDigests
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_sf_rhash_Bindings
 * Method:    hashcodeForDigest
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_sf_rhash_Bindings_hashcodeForDigest
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_sf_rhash_Bindings
 * Method:    freeDigest
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_sf_rhash_Bindings_freeDigest
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
