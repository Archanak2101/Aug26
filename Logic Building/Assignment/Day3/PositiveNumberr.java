import java.util.*;
class PositiveNumberr{
          
                  public static void AskForPositiveNumber(){
                           Scanner sc=new Scanner(System.in);
                            int num;
                          
 
      
                      do{
                   
                         System.out.println(" Enter Positive Number");
                            num=sc.nextInt();
                      }
                       while(num<=0);
                            System.out.println("You Enter Positive Number");
                                   
                          }
			public static void main(String[] args){

                           

                                 
                            AskForPositiveNumber();
                }
        }

                               