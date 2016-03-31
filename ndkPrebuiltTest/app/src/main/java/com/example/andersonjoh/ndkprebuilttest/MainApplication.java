package com.example.andersonjoh.ndkprebuilttest;

import android.app.Application;

public class MainApplication extends Application
{
    @Override
    public void onCreate()
    {
        super.onCreate();

        System.loadLibrary( "app" );
    }
}
