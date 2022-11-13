#include<stdio.h>

int main()
{
 int n,y;
   printf(" enter the the year \n ");
   scanf("%d",&n);
  y= n%100==0 || n%400==00 || n%4 ==0 ;
       
  switch(y)
  {
    case 1 : 
      
           printf("%d year is a leap year \n",n);
    
           break;
    case 0 :
      
           printf("%d is not a leap year \n ",n);
     
           break;

    default :
           printf("%d is not a leap year \n ",n);
    
  }
 
   return 0;
}

