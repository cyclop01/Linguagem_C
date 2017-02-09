#include <stdio.h>
#include <stdlib.h>
#define DIM 10

int main()
{
    int a[DIM]={0};
    int b[DIM]={0};
    int i;

    for(i=0;i<DIM;i++){
        printf("digite um numero...\n");
        scanf("%d",&a[i]);

        if (a[i]%2==0){
            b[i]=a[i]*5;
        }
        else{
          b[i]=a[i]+5;
        }
    }


     for(i=0;i<DIM;i++){
        printf("%d\n",b[i]);
     }
    return 0;
}
