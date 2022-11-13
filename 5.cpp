#include<stdio.h>

int main()
{
 int n;
   printf(" enter 1 to print good bye \n");
   printf(" enter 2 to print better \n");
   printf(" enter 3 to print best \n");
   printf(" enter 4 for exit\n");
   printf(" enter the choice \n ");
   scanf("%d",&n);
  
 
  switch(n)
  {
    case 1 : 
      
       printf("good bye!\n");
    
         break;
    case 2 :
      
       printf("bette\n");
     
         break;
    case 3 : 
     
       printf("best\n");
    
         break;
    case 4 :
     printf(" invalid !!!");
         break;
    default :
    printf(" enter the valid choice");
    
  }
 
   return 0;
}

