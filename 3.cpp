#include<stdio.h>
int main()
{
  int n;
   printf(" enter the choice of day number \n ");
   scanf("%d",&n);

  switch(n)
  {
    case 1 : 
     printf(" today is monday:\n waiting for the holiday!!");
         break;
    case 2 :
     printf("today is Tuesday: jai hanuman ji...!!");
         break;
    case 3 : 
     printf(" today is Wednesday....go green !!");
         break;
    case 4 : 
     printf(" today is Thursday....gadpati bappa!!"); 
         break;
    case 5 :
      printf(" today is Friday....jai laxmi !!");
         break;
    case 6 :
      printf(" today is Saturday.....complete pending work !!");
         break;
    case 7 :
      printf(" today is sunday....ek din milta usme bhi sukoon nhi");
         break;
    default :
      printf(" enter the valid choice");
    
  }
   return 0;
}

