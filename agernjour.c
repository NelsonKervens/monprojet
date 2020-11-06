#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//Programme qui permet de convertir l'age en jour. 
 int main(int argc, char *argv[])
{
   int age=0, days=0;
   printf("Enter your age:\n");
   scanf("%d", &age);
   days=365*age;
   if(days<0)
    {
     printf("Error. you entered a wrong age !\n");
    }
   else
    {
       printf("You have %d days.", days);
    }
   return 0;
}