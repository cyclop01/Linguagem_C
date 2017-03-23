#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{

    int x, n, fat, aux1, aux2;
    double a, senx,acc;

    printf("Entre com um Ângulo em Graus");
    scanf("%d", &x);

    a=(M_PI*x)/180;

    for(n=0;n<3;n++){

            if(n%2==0){
                    aux1=-1;
            }
            else{
                    aux1=1;
            }
                    aux2=((2*n)+1);

            while(aux2>0){
             fat*=aux2;
             aux2--;
            }

            senx=(aux1/ fat*pow(a,(2*n)+1));
            acc=acc +senx;
    }

    printf("%.7f",senx);
    return 0;
}
