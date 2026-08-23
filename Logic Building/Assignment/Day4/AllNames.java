import java.util.*;
class AllNames{
       public static void main(String[] args){
              Scanner sc=new Scanner(System.in);
                System.out.println("Enter Array size:");
                 String[] str=new String[4];
                 for(int i=0;i<4;i++){
                     str[i]=sc.next();
                 }
                   for(String n:str){
                     System.out.println(n);
                  }
              }
          }
                     