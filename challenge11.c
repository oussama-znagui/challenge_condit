
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));

    int r = rand() % 7;

    switch (r)
    {
    case 0:
        printf("Dimanche\n");
        break;
    case 1:
        printf("Lundi\n");
        break;
    case 2:
        printf("Mardi\n");
        break;
    case 3:
        printf("Mercredi\n");
        break;
    case 4:
        printf("Jeudi\n");
        break;
    case 5:
        printf("Vendredi\n");
        break;
    case 6:
        printf("Samedi\n");
        break;
    default:
        printf("Erreur : nombre aléatoire hors de la plage attendue.\n");
        break;
    }

    return 0;
}
