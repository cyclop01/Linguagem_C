#include <stdio.h>
#include <stdlib.h>

int main()
{
   int opc;

    printf("Cardapio\n");
    printf("1.. Cafe\n");
    printf("2.. Cafe Gelado\n");
    printf("3.. Cafe Duplo\n");
    printf("Escolha a Opcao\n");
    scanf("%d",&opc);
    switch(opc){
case 1:
    printf("Escolheu cafe\n");
    break;
case 2:
    printf("Escolheu cafe gelado\n");
    break;
case 3:
    printf("Escolheu cafe duplo\n");
    break;
default:
    printf("Nao ha esse numero\n");
    }
    printf("Acabou\n");
    return 0;
}
