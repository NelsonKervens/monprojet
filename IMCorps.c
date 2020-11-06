#include<stdio.h>
#include<stdlib.h>
#include<math.h>
   int main(int argc, char *argv[])
   { 
     int choix;
     double IMC=0, t=0, p=0;
     printf("GENRES\n");
     printf("1.Masculin\n");
     printf("2.Féminin\n");
     printf("Votre sexe ?\n");
     scanf("%d", &choix);
     printf("\n");
    switch(choix)
     {
      case 1:
      printf("Vous etes de sexe Masculin !\n");
      break;
      case 2:
      printf("Vous etes de sexe Feminin!\n");
      break;
      default:
      printf("Vous n'avez pas choisi le bon numéro !\n");
      break;
      printf("\n");
      }
    
     printf("Entrer votre poids:\n");
     scanf("%lf", &p);
     printf("Entrer votre taille en m:\n");
     scanf("%lf", &t);
     IMC = p/pow(t,2);
     printf("Votre indice de masse corporelle est %lf", IMC);
     printf("\n");
     switch(choix)
     {
      case 1:
      if(IMC>=25)
      {
       printf("Vous etes de sexe masculin donc, vous devez surveiller votre alimentation.\n");
      }
      else if(IMC<=19)
      {
       printf("Vous devriez prendre des forces !\n");
       }
       else
       {
         printf("Vous etes à poids de forme\n");
        }
        break;
        printf("\n");
        }
        switch(choix)
        {
        case 2:
        if(IMC>=23)
        {
        printf("Vous devriez surveiller votre alimentation !\n");
        }
        else if(IMC<18)
        {
        printf("Vous devriez prendre des forces !\n");
        }
        else
        {
        printf("Vous etes à poids de forme !\n");
        }
        break;
       }
     return 0;
   }

    