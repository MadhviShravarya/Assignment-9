#include<stdio.h>

int main()
{
  int n,a,b,c;
  printf("enter the three numbers ");
   scanf("%d%d%d",&a,&b,&c);
do{
   printf(" enter 1 to check isosceles triangle \n");
   printf(" enter 2 to check right angled triangle \n");
   printf(" enter 3 to check equilateral triangle \n");
   printf(" enter 4 for exit\n");
   printf(" enter the choice \n ");
   scanf("%d",&n);
  
  
  switch(n)
  {
    case 1 : 
      if(a==b || b==c || c==a)
       printf("side a=%d , b=%d , c=%d is a side of isosceles triangle\n",a,b,c);
      else
         printf("not an isosceles triangle\n" );
         break;
    case 2 :
      if( a*a +b*b == c*c ||  a*a ==b*b + c*c ||    a*a + c*c ==b*b )
       printf("side a=%d , b=%d , c=%d is a side of right angled triangle\n",a,b,c);
      else
         printf("not a right  angled triangle\n" );
         break;
    case 3 : 
      if(a==b==c)
       printf("side a=%d , b=%d , c=%d is a side of equilateral triangle\n",a,b,c);
      else
         printf("not an equilateral triangle\n" );
         break;
    case 4 :
     printf(" goodbye !!!");
         break;
    default :
    printf(" enter the valid choice");
    
  }
 }while(n!=5);
   return 0;
}

