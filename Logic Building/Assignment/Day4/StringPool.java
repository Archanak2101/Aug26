class StringPool{
         public static void main(String[] args){
               String str1=new String("Hello");
               String str2=str1.intern();
               String str3="Hello";
               boolean isSameObject=(str2.equals(str3));
                System.out.println("Is str2 and str3 pointing to the same object?" +isSameObject);
     }
   }