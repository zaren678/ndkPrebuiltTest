#include <android/log.h>
#include <jni.h>

#define CJNIEXPORT extern "C" JNIEXPORT

CJNIEXPORT void JNICALL Java_com_example_andersonjoh_ndkprebuilttest_HybridDebuggerTest_callCplusplus(
    JNIEnv *env,
    jclass type
                                                                                                    )
{

    //call back to java
    auto theClass =  env->FindClass( "com/example/andersonjoh/ndkprebuilttest/HybridDebuggerTest" );
    auto theMethod = env->GetStaticMethodID( theClass, "fromCplusplus", "()I");

    auto theValue = env->CallStaticIntMethod( theClass, theMethod );

    __android_log_print( ANDROID_LOG_DEBUG, "Native", "Got a %d", theValue );
}