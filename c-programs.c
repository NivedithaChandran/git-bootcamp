#include <stdio.h>
#include<math.h>

int main()
{
    float x,y;
    do
  {
    char op;
    printf("\nenter operation:");
    scanf("%c",&op);
    switch(op)
     {
         case 'a':
              printf("enter 1st number:");
              scanf("%f",&x);
              printf("enter 2nd number:");
              scanf("%f",&y);
              printf("\n %.2f",(x+y));
              break;
          case 's':
            printf("enter 1st number:");
            scanf("%f",&x);
            printf("enter 2nd number:");
             scanf("%f",&y);
              printf("\n %.2f",(x-y));
              break;
          case 'm':
             printf("enter 1st number:");
            scanf("%f",&x);
            printf("enter 2nd number:");
            scanf("%f",&y);
              printf("\n %.2f",(x*y));
              break;
         case 'd':
              printf("enter 1st number:");
              scanf("%f",&x);
              printf("enter 2nd number:");
              scanf("%f",&y);
              printf("\n %.2f",(x/y));
              break;
         default:
              printf("exit");
              break;
        
     }
   }while(x!=0);


return 0;
}