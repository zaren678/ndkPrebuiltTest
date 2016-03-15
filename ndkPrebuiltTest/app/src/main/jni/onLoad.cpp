/******************************************************************************

    Copyright 2014 by GARMIN Corporation

******************************************************************************/

#include <jni.h>
#include <android/log.h>

#include "onLoad.hpp"

jint
//-------------------------------------------------------------------------
JNI_OnLoad
//-------------------------------------------------------------------------
    (
    JavaVM* aVm,
    void* aReserved
    )
{
    JNIEnv* theEnv;
    if( aVm->GetEnv( (void **)&theEnv, JNI_VERSION_1_6 ) != JNI_OK )
    {
        return -1;
    }

    __android_log_print( ANDROID_LOG_DEBUG, "Native", "Library Loaded" );


    return JNI_VERSION_1_6;
}
