import java.util.*;
class LargestElement{
         public static void main(String[] args){
                     Scanner sc=new Scanner(System.in);
                     System.out.println("Enter Integers:");
                      int[]num=new int[5];
                      for(int i=0;i<5;i++){
                          num[i]=sc.nextInt();
			 
                        }
                           Arrays.sort(num);
                               System.out.println("The Largest Element is:" +num[4]);
                   }
              }   