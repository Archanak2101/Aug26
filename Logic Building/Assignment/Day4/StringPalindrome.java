import java.util.*;
class StringPalindrome{
         public static void main(String[] args){
              Scanner sc=new Scanner (System.in);
                System.out.println("Enter String");  
                 String str=sc.nextLine();
                      String rev=" ";
               for(int i=str.length()-1; i>=0; i--){
                     rev+=str.charAt(i);
                   }
                     if(str.equals(rev)){
                         System.out.println("The String is Palindrome" );
                        }
                      else{
                            System.out.println("The String is Not Palindrome");
                      }
                  }
             }
                   
                          
                   