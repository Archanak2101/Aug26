import java.util.*;
class StringVowels{
         public static void main(String[] args){
              Scanner sc=new Scanner (System.in);
                System.out.println("Enter String");  
                 String str=sc.nextLine();
                  
                  int count=0;

                  String lowercaseinput=str.toLowerCase();
                  for(int i=0; i<str.length();i++){
                          
                    char ch=lowercaseinput.charAt(i);
                     if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                        count++;
                   }
              
               }
                             System.out.println("Vowels in String :"+ str + " is " + count);
            }
       }
                          