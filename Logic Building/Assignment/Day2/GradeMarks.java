class GradeMarks{
       public static void main(String[]args){
           
              int Maths=80;
              int Science=85;
	      int History=90;

 	  int Avg=(Maths +Science + History)/3 ;
	  System.out.println("Avgerage is!"+Avg);



           if(Avg>=90){
	        System.out.println("Grade A");
              }
             else if(Avg>=70 && Avg<=89){
                 System.out.println("Grade B");
            }
              else if(Avg>=50 && Avg<=69){
                 System.out.println("Grade C");
            }
              else if(Avg>=30 && Avg<=49){
                 
                 System.out.println("Grade D");
            }
              else{
                 System.out.println("FAIL");
            }
              
       }
    }
              
              