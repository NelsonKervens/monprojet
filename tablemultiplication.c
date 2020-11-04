#include<stdio.h>
#include<stdlib.h>
#include<math.h>
///Table de multiplication d'un nombre.
 void main()
{
   int c, n, R;
   printf("Entrer un nombre\n");
   scanf("%d", &n);
   for(c=0;c<=10;c++)
   {
     R=n*c;
     printf("%d*%d=%d\n", n, c, R);
    }
    return 0;
}