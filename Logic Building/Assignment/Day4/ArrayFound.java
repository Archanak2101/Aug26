import java.util.*;
class ArrayFound{
              public static void main(String[] args){
                 Scanner sc=new Scanner(System.in);
                    System.out.println("Enter Numbers:");
                     Integer[]num=new Integer[5];
                       
                 
                         for(int i=0;i<5;i++){
                              num[i]=sc.nextInt();
                           }
                              System.out.println("Enter SerchElement:");
                               int searchElement=sc.nextInt();
                            if(Arrays.asList(num).contains(searchElement)){
                                   System.out.println("Found");
                                }
                              else{
                                  System.out.println(" Not Found");

                                 }
                               }
                   }