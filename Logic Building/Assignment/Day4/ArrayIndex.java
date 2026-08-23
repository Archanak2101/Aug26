import java.util.*;
class ArrayIndex{
              public static void main(String[] args){
                 Scanner sc=new Scanner(System.in);
                    System.out.println("Enter Numbers:");
                   int[]num=new int[5];
                       
                    
                         for(int i=0;i<5;i++){
                              num[i]=sc.nextInt();
                           }
                                  Arrays.sort(num);
                             System.out.println("Enter Specific Number");
                               int SearchElement=sc.nextInt();
                               int index=Arrays.binarySearch(num, SearchElement);
                           
                              if(index>=0){
                                        System.out.println("The Number "+ SearchElement + "is found at index" + index);
                                   }
                                    else{
                                          System.out.println("The Number is Not found ");
                                   }

                           }
                    }