#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pi =3.14;
    float r;
    float c;
    printf("Entrez le rayon du cercle: ");
    scanf("%f",&r);
    c = 2*pi*r;
    printf("la circonference du cercle est: %.2f",c);
    return 0;
}
