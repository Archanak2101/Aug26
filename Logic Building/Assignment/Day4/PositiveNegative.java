import java.util.*;
class PositiveNegative{
              public static void main(String[] args){
                 Scanner sc=new Scanner(System.in);
                    System.out.println("Enter Numbers:");
                     int[]num=new int[6];
                      for(int i=0;i<6;i++){
                           num[i]=sc.nextInt();
                       }
                  		 int pCount=0;
                  		 int nCount=0;
                   		     for(int n:num){
                      			    if(n>0){
                      			      pCount++;
                      			 } 
                     			  else if(n<0){
                          		    nCount++;
                       		}
                            }
                                      
                                    System.out.println("Positive Numbers:"+pCount);
                                     System.out.println("Negative Numbers:"+nCount);
                  }
           }