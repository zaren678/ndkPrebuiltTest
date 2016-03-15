package com.example.andersonjoh.ndkprebuilttest;

/**
 * Created by andersonjoh on 3/14/16.
 */
public class HybridDebuggerTest
{
    public static native void callCplusplus();

    public static int fromCplusplus()
    {
        return 5;
    }
}
