class Pattern1{
       public static void main(String[] args){


                   for(int i=1;i<=5;i++){
                        for(int j=1; j<=i;j++){
                            if(j==1){
                                 System.out.print(i);
                                 }
                            else{
                                System.out.print("*"+ i);
              }
         }
                        System.out.println();
  }
              
                      for(int k=5;k>=1;k--){
                        for(int j=1; j<=k;j++){
                            if(j==1){
                                 System.out.print(k);
                                 }
                            else{
                                System.out.print("*"+ k);
              }
         }
                        System.out.println();
     }
  }
}
