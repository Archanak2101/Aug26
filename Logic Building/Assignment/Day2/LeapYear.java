class LeapYear{
       public static void main(String[]args){
          int year=1998;
         
           if((year%4==0 && year %100!=0 || year%400==0)){
                  System.out.println("A Leap Year");
             }
           else{
                  System.out.println(" Not A Leap Year");
            }
         }
       }