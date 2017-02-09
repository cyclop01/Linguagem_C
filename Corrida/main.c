#include <stdio.h>
#include <stdlib.h>

int main()
{
system("color 0a");

int i=0, cont=1;
float mt, tvolta,tmv;
char op;

printf("Pressione uma tecla para iniciar......\n");
getch();

while (op!='s'){

printf("\t[v] - volta\n");
printf("\t[c] - calcular\n");
printf("\t[s] - sair\n");
scanf("%c",&op);

for(i=0;i<100;i++){
    if(op=='v'){
    cont=cont++;
    printf("Volta\n");
}
    else{
    if(op=='c'){
        printf("Calculando");
        break;
    }
}

}

}
return 0;
}
