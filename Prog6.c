#include <stdio.h>

void main(){

int operacao;
int num1;
int num2;
int resultado;
printf("Qual a operacao matematica que deseja fazer \n[1]Multiplicação\n[2]Adiçao\n[3]Subtraçao\n[4]Divisao\n");
scanf(" %d",&operacao);

printf("Qual o numero que deseja: ");
scanf(" %d",&num1);
printf("Qual o outro numero que deseja: ");
scanf(" %d",&num2);

if (operacao == 1)
{
resultado = num1*num2;
printf("O Resultado é %d",resultado);
}
else if (operacao == 2)
{
resultado = num1+num2;
printf("O Resultado é %d",resultado);
}
else if (operacao == 3)
{
resultado = num1-num2;
printf("O Resultado é %d",resultado);
}
else if (operacao == 4)
{
resultado = num1/num2;
printf("O Resultado é %d",resultado);
}
}



