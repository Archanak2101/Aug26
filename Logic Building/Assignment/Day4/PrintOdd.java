import java.util.*;
class PrintOdd{
        
                public static void main(String[] args){
                    Scanner sc=new Scanner(System.in);
                    System.out.println("Enter Number:");
                      int num=sc.nextInt();
                          int sum=0;
                        for(int i=1; i<=num;i++){
                          if(i%2!=0){
                                  sum=sum+i;
                               
                           
                          }
                        }
                           System.out.print(sum);
                            
                            
                         
                         
                }
	}