#include<stdio.h>

int main()
{
  int n;
  printf(" enter the number \n");
  scanf("%d",&n);
  switch(n>=0)
  {
    case 0 : 
       printf(" positive = %d",-1*n);
            break;
    case 1 :
       printf(" negative = -%d",n);
            break;
  }
   return 0;
}

