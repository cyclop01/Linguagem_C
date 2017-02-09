#include <stdio.h>
#include <stdlib.h>
#define DIM 8

int main()
{
    int a[DIM]={0};
    int b[DIM]={0};
    int i;

    for(i=0;i<DIM;i++){

        printf("digite um numero...\n");
        scanf("%d",&a[i]);

          b[i]=a[i]*3;
    }

     for(i=0;i<DIM;i++){
        printf("%d\n",b[i]);
     }
    return 0;
}
