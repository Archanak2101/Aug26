package Util;

//
// Source code recreated from a .class file by IntelliJ IDEA
// (powered by FernFlower decompiler)
//



public class ConsoleInput {
    public ConsoleInput() {
    }

    public static String getString() {
        try {
            byte[] inputarr = new byte[100];
            int length = System.in.read(inputarr);
            byte[] final_arr = new byte[length - 2];
            System.arraycopy(inputarr, 0, final_arr, 0, length - 2);
            String t = new String(final_arr);
            return t;
        } catch (Exception var4) {
            System.out.println(var4);
            return "";
        }
    }

    public static double getDouble() {
        return Double.parseDouble(getString());
    }

    public static float getFloat() {
        return Float.parseFloat(getString());
    }

    public static int getInteger() {
        return Integer.parseInt(getString());
    }
}

