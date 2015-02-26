package com.revmob;

import org.qtproject.qt5.android.bindings.QtActivity;
import com.revmob.RevMob;
import com.revmob.RevMobTestingMode;
import com.revmob.client.RevMobClient;
import android.util.Log;
import android.app.Activity;
import java.lang.String;

public class RevMobActivityWrapper extends QtActivity {
    
    private static Activity activity;
    
    public RevMobActivityWrapper() {
        activity = this;
    }
    
    public static void startSession(String appId) {
        Log.d("XXY", "startSession");
              
        RevMobClient.setSDKName("qt-android-by-skhaz");
        RevMobClient.setSDKVersion("0.0.1");
        RevMob.start(activity, appId);
    }
    
    public static void showFullscreen() {
        RevMob revmob = RevMob.session();
        revmob.showFullscreen(activity);
    }
    
    public static void showPopup() {
        RevMob revmob = RevMob.session();
        revmob.showPopup(activity);
    }
    
    public static void showBanner() {
        RevMob revmob = RevMob.session();
        revmob.showBanner(activity);
    }
}
