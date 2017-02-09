#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numero,somatoria=0;


  while (numero!=0){
   do{
   printf("Entre com um numero\n");
   scanf("%d",&numero);
   somatoria=somatoria+numero;
   printf("A somatoria e:\n");
   printf("%d",somatoria);
   }
   while(numero>=0&&numero<20);
  }
}
