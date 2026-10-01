public class ConsoleInput {

    public static float getFloat()
    {
        String objString = getString();

        float data = Float.parseFloat(objString);
        return data;

    }

    public static int getInt()
    {
        // String objString = getString();

        // int data = Integer.parseInt(objString);
        // return data;

        return Integer.parseInt(getString());

    }
    public static double getDouble(){
        return Double.parseDouble(getString());
    }

    public static String getString()
    {
        try
        {
            byte arrInput[] = new byte [100] ; //Heap

            //   System.out.println("Enter the Value"); // even if you like remove it not matter in code anyway

            int length = System.in.read(arrInput);

            byte [] arrFinal = new byte [length - 1];

            System.arraycopy(arrInput, 0, arrFinal, 0, length - 1);

            String objString = new String(arrFinal);

            return  objString;

        }catch(Exception e)
        {
            e.printStackTrace();
        }
        return  null;
    }
}