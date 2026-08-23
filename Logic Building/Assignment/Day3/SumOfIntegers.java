import java.util.*;
 class SumOfIntegers{
              public static int calculatesum(int n){
                        int result=0;
               for(int i=1;i<=n;i++){
                    result=result+i;
                 
             }
                      return result;
          }
                public static void main(String[] args){

                         Scanner sc=new Scanner(System.in);
                          System.out.println("Enter Number");
                           int N=sc.nextInt();
                            
                       int totalsum= calculatesum(N);
                           System.out.println("The sum of Number from 1 to " + N  +" is " + totalsum);
           }
      }