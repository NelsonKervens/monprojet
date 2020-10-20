#include<stdio.h>
#include<stdlib.h>
#include<time.h>
   int main(int argc, char *argv[])
 {
   int continuerPartie=1, choixMenu, nc=0, nombreMystere=0, nombreEntre=0;

   int MAX=0, MIN=0;
   srand(time(NULL));
   nombreMystere=(rand()%(MAX-MIN+1))+MIN;
    printf("NIVEAU\n");
    printf("1.Entre 1 et 100\n");
    printf("2.Entre 1 et 1000\n");
    printf("3.Entre 1 et 10000\n");
    printf("Votre choix ?");
    scanf("%d", &choixMenu);
    printf("\n");
    switch(choixMenu)
    {
     case 1:
     printf("Entre 1 et 100.\n");
    MAX=100;
    MIN=1;
    nombreMystere=(rand()%(MAX-MIN+1))+MIN;
    break;
    case 2:
    printf("Entre 1 et 1000.\n");
    MAX=1000;
    MIN=1;
    nombreMystere=(rand()%(MAX-MIN+1))+MIN;
    break;
    case 3:
    printf("Entre 1 et 100000.\n");
    MAX=100000;
    MIN=1;
    nombreMystere=(rand()%(MAX-MIN+1))+MIN;
    break;
    default:
    printf("Erreur !");
    break;
    printf("\n\n");
  }
    do
    {
      do{
    printf("Quel est le nombre ?\n");
    scanf("%d", &nombreEntre);
    if(nombreMystere>nombreEntre)
    printf("C'est plus !\n\n");
    else if(nombreMystere<nombreEntre)
    printf("C'est moins !\n\n");
    else
    printf("Bravo, Vous avez trouvez le nombre mystère en %d coups !\n\n", nc);
    nc++;
    }while(nombreEntre != nombreMystere);
    printf("\nVoulez vous faire une autre partie ? oui(1) / non(0)\n\n");
    scanf("%d", &continuerPartie);
    }while(continuerPartie==1);
      return 0;
  }
    