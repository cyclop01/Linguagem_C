#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a[5]={0};
    int i,j;
    int aux;
    int DIM=5;

    for(i=0;i<=DIM-1;i++){
        printf("Digite o  valor a ser ordenado\n",i);
        scanf("%d",&a[i]);
    }

 printf("\tVetor Desordenado\n \n");
 printf("\n") ;
  for(i=0;i<=DIM-1;i++){
        printf("%d\n",a[i]);
 }

   for(i=0;i<=DIM;i++){
       for(j=0;j<i;j++){
            if(a[j]<a[j+1]){
                aux=a[j];
                a[j]=a[j+1];
                aux=a[j+1];
            }
        }
   }

    printf("\tVetor Ordenado\n \n");

    for(i=0;i<=DIM-1;i++){
        printf("%d\n",a[i]);
    }

return 0;
}
