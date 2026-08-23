import java.util.*;

class AgeCheckar{


               public static void checkAgeCategory(int age){
                   
              
                  if(age<18){
                        System.out.println("You are minor");
                     }
		else if(age >=18 && age< 60){
                         System.out.println("You are adult");
                  }
                    else{ 
                         
                         System.out.println("You are senior citizen");
                       }
                      }
                  public static void main(String[] args){
                     Scanner sc=new Scanner(System.in);

                      System.out.println("Enter Age");
                     int userage=sc.nextInt();
                 checkAgeCategory(userage);
               
                     
	   }
       }
           

			