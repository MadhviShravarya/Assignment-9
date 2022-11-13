#include<stdio.h>

int main()
{
 float n,amt=0,total=0;
   printf(" enter the the year \n ");
   scanf("%f",&n);
  
       
  switch(n<=50)
  {
    case 1 : amt= n*0.5;
             break;
    case 0 : switch(n<=150)
             {   case 1 : amt= 25+(n-50)*0.75;
                          break;
                 case 0 : switch(n<=250)   
                           { case 1: amt= 100+(n-150)*1.20;
                                      break;
                             case 0: amt=220 +(n-250)*1.5;
                                      break;
            
                           }break;
             }  break;          
  } 
       total = amt + amt*120/100.0 ;
      printf(" total amount  is %f",total);
   return 0;
}
            

