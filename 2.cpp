#include<stdio.h>

int main()
{
  int n,a,b;
  printf("enter the two numbers ");
   scanf("%d%d",&a,&b);
do{
   printf(" enter 1 for addition\n");
   printf(" enter 2 for subtraction\n");
   printf(" enter 3 for multiplication\n");
   printf(" enter 4 for diviion\n");
   printf(" enter 5 for exit\n");
   printf(" enter the choice \n ");
   scanf("%d",&n);
  
  
  switch(n)
  {
    case 1 : 
     printf(" addition of two no. %d+%d=%d",a,b,a+b);
         break;
    case 2 :
     printf(" subtraction of two no. %d-%d=%d",a,b,a-b);
         break;
    case 3 : 
     printf(" multiplication of two no. %d*%d=%d",a,b,a*b);
         break;
    case 4 : 
     printf(" division of two no. %d/%d=%d\n",a,b,a/b);
         break;
    case 5 :
     printf(" goodbye !!!");
         break;
    default :
    printf(" enter the valid choice");
    
  }
 }while(n!=5);
   return 0;
}

