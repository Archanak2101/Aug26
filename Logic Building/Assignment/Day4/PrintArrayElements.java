import java.util.*;
class PrintArrayElements{
          
             public static void main(String[] args){
               Scanner sc=new Scanner(System.in);
                System.out.println("Enter Number");
                 
                    int[]num=new int[5];
                     
                 for(int i=0;i<5;i++){
                      num[i]=sc.nextInt();
                     }
                     for(int n:num){
                        System.out.print(n+ "  ");
                  }
          }
	}