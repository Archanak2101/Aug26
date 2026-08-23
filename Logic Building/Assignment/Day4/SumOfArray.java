
import java.util.*;
class SumOfArray{
       public static void main(String[] args){
              Scanner sc=new Scanner(System.in);
                System.out.println("Enter Array size:");
                  int[]num=new int[5]; 
                     
                        
                      for(int i=0; i<5;i++){
                             num[i]=sc.nextInt();
                       }  
                             int sum=0;   
                          for( int n:num){
                             sum=sum+n;
			}   
                          
                           System.out.println(sum);   
                      }
               }

                            

                    