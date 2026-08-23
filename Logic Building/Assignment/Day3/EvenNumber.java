class EvenNumber{
        public static void printEvenNumber(){
                int i=1;
                while(i<=50){
                   if(i%2==0){
                       System.out.println(i+ " ");
                  }
                      i++;
               }
                     System.out.println();
             }
       public static void main(String[] args){
            System.out.println("Even Numbers between 1 to 50 are:");

               printEvenNumber();
	}
     }
              