#include<stdio.h>

int main()
{
  int n;
  printf(" enter the number \n");
  scanf("%d",&n);
  switch(n%2==0)
  {
    case 0 : 
       printf(" number is odd so uppercaseodd numberis %d",n);
            break;
    case 1 :
       printf(" uppercase odd number %d",n+1);
            break;
  }
   return 0;
}

