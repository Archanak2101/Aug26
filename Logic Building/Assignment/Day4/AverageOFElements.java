import java.util.*;
class AverageOFElements{
         public static void main(String[] args){
                     Scanner sc=new Scanner(System.in);
                     System.out.println("Enter Integers:");
                      int[]num=new int[5];
                         
                      for(int i=0;i<5;i++){
                          num[i]=sc.nextInt();
                           }
                               int sum=0;
                         for(int n:num){
                            sum=sum+n;
                        }
                          double avg=sum/5.0;
                          System.out.println("The Avg Of Elements:" +avg);
                   }
              }