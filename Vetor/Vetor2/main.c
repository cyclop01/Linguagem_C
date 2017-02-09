#include <stdio.h>
#include <stdlib.h>
#define DIM 5

int main()
{
    int a[DIM]={0};
    int i, somap=0,somai=0,somat=0, cont=0;

    for(i=0;i<DIM;i++){
        printf("Digite um numero...\n");
        scanf("%d",&a[i]);

        somat+=a[i];

        if (a[i]%2==0){
        somap+=a[i];
        cont++;
        }
        else{
          somai+=a[i];
        }
    }

    printf("A soma dos pares resulta em: %d\n",somap);
    printf("A soma dos impares resulta em: %d\n",somai);
    printf("A soma TOTAL resulta em: %d\n",somat);
    printf("%% dos pares %2.2f\n", (float)cont\5);
    printf("%% dos impares %2.2f\n", (5-cont)/(float)5);

    return 0;
}
