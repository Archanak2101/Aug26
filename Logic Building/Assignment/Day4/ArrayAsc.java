import java.util.*;
class ArrayAsc{
              public static void main(String[] args){
                 Scanner sc=new Scanner(System.in);
                    System.out.println("Enter Numbers:");
                     int[]num=new int[5];
                      for(int i=0;i<5;i++){
                           num[i]=sc.nextInt();
                       }
                          Arrays.sort(num);
                          System.out.print("Sorted Arrray:");
                       
                         for(int n:num){
                              System.out.print(n+ " "); 
                     }
               }
             }