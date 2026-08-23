class StringConcat{
         public static void main(String[] args){
              String str1="hello";
             String str2="world";
             boolean isSameObject=(str1==str2);
              String str3=str1 + str2;
               System.out.println("Is str3 pointing to the same object?" + isSameObject);
          }
        }