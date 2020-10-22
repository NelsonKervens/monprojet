#include<stdio.h>
#include<stdlib.h>
#include<math.h>
///Algorithme qui permet à l'utilisateur de vérifier si un nombre est positif ou pas.
int main(int argc, char *argv[])
{
   double m=0, note1=0, note2=0, note3=0, note4=0, note5=0;
   printf("Entrer la première note:\n");
   scanf("%lf", &note1);
   printf("Entrer la deuxième note:\n");
   scanf("%lf", &note2);
   printf("Entrer la troisième note:\n");
   scanf("%lf", &note3);
   printf("Entrer la quatrième note:\n");
   scanf("%lf", &note4);
   printf("Entrer la cinquième note:\n");
   scanf("%lf", &note5);
    m=(note1+note2+note3+note4+note5)/5;
   printf("Moyenne: (%lf+%lf+%lf+%lf+%lf)/5=%lf\n", note1, note2, note3, note4, note5, m);
   if(m>=6)
   {
    printf("L'étudiant a réussi !");
    }
    else
    {
    printf("L'étudiant a échoué !");
    }
    return 0;
}