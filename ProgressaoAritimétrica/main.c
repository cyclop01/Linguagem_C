#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rz,i,pt,n;

    printf("Entre com o primeiro termo da PA\n");
    scanf("%d",&pt);

    printf("Entre com a razao da PA\n");
    scanf("%d",&rz);
    printf("\n");

    for(i=1;i<=10;i++){
        n=pt+rz;
        printf("%d\n", n);
        pt=n;
    }
    return 0;
}
