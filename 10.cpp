#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c;
  float D;
  float x,y;
  printf(" enter the value of coefficient of x^2\n");
  scanf("%d",&a);
  printf(" enter the value of coefficient of x\n");
  scanf("%d",&b);
  printf(" enter the constant term ");
  scanf("%d",&c);
  D= b*b - 4*a*c;
  switch(D>0)
  {
    case 1 :
             x= (-b+ sqrt(D))/2*a ;
             y= (-b- sqrt(D))/2*a ;
             printf(" roots of equation is %f and %f\n",x,y);
             break;
    case 0 :
             switch(D<0)
            {
                case 1 :
                         x= -b/2*a + sqrt(4*a*c - b*b)/2*a;
                         y= -b/2*a - sqrt(4*a*c - b*b)/2*a;
                         printf(" roots of equation are %f and %f\n",x,y);
                         break;
                case 0 : 
                         x= -b/2*a ;
                         y= -b/2*a ;
                         printf(" roots of equation are %f and %f\n",x,y);
                         break;
            }break;
  }
   return 0;
}

