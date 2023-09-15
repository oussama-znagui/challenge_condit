#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,w,l,m;

    printf("entrez un nombre compose de 3 chiffre:");
    scanf("%d",&n);
    l = n%10;
    m =n/10;
    w = m%10;
    a = m/10;
    printf("%d%d%d",l,w,a);
    return 0;
}
