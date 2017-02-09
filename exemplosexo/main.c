#include <stdio.h>
#include <stdlib.h>

int main()
{
   char sexo;
   printf("Digite m ou f para sexo:\n");
   scanf("%c",&sexo);

   switch(sexo){
   case 'm':
   case 'M':
       printf("Masculino\n");
       break;
    case 'f':
    case 'F':
       printf("Feminino\n");
       break;
    default:
    printf("hmmm\n");

   }
   return 0;
}
