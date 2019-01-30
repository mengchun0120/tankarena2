package com.crazygame.tankarena2;

public class NativeLibWrapper {
    static {
        System.loadLibrary("native-lib");
    }

    public static native void on_surface_created(int programId);

    public static native void on_surface_changed(int width, int height);

    public static native void on_draw_frame();
}
