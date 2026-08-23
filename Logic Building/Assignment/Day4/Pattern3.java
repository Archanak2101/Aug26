class Pattern3{
       public static void main(String[] args){


                   for(int i=1;i<=5;i++){
                        for(int j=1; j<=i;j++){
                            if(j==1){
                                 System.out.print((2*j)-1);
                                 }
                            else{
                                System.out.print("*"+ ((2*j)-1));
              }
         }
                          System.out.println();
      }
    }
}