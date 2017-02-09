#include<stdlib.h>
#include<stdio.h>

int main(){
    int i,j,aux;
    int tam=5;
    int vet[5]={0};

    for(i=0;i<=tam-1;i++){
        printf("Digite um numero\n");
        scanf("%d",&vet[i]);
    }
    printf("Vetor Desordenado\n");
    for(i=0;i<=tam-1;i++){
        printf("%d\n",vet[i]);
    }

    for(i=0;i<=tam-1;i++){
        for(j=0;j<i;j++){
            if(vet[j]>vet[j+1]){
                aux=vet[j];
                vet[j]=vet[j+1];
                aux=vet[j+1];
            }
        }
    }
    printf("Vetor Ordenado\n");
    for(i=0;i<=tam-1;i++){
        printf("%d\n",vet[i]);
    }
return 0;
}
