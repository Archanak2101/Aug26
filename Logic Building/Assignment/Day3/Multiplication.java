import java.util.*;
class Multiplication{
      
               public static void printMultiplicationTable( int num){
                      
             for(int i=1;i<=10;i++){
                      int result=num*i;
                   
                  System.out.println(num +" x " + i + "=" + result);
          }
         }
                 public static void main(String[] args){
                   Scanner sc=new Scanner(System.in);
                     System.out.println("Enter Number");
                      int userNum=sc.nextInt();
 			System.out.println();
                       printMultiplicationTable(userNum);
      }
   }