#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char *argv[])
{
    double a=0, b=0, c=0, x=0, x1=0, x2=0, d=0;
    printf("Entrer les valeurs de a, de b et de c:\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    d=pow(b,2)-4*a*c;
    if (d>0)
    {
        printf("Il y a deux solutions:\n");
        x1=(-b-sqrt(d))/2*a;
        x2=(-b+sqrt(d))/2*a;
        printf("Les solutions sont: %lf et %lf", x1, x2);
    }
      else if(d<0)
      {
          printf("pas de solutions\n");
      }
      else
      {
          printf("Il y a une seule solution.");
          x=(-b)/(2*a);
          printf("Cette solution est: %lf", x);
      }
    return 0;
}
