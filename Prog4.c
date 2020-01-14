#include <stdio.h>
void main(){

int dias;

printf("Qual é o dia em que esta sabendo que o numero 1 é domingo ");
scanf(" %d",&dias);


switch (dias)
{
    case 1:
printf("O primeiro dia da semana é domingo");
    break;
    case 2:
printf("O segundo dia da semana é segunda");
    break;
    case 3:
printf("O terceiro dia da semana é terça");
    break;
    case 4:
printf("O quarto dia da semana é quarta");
    break;
    case 5:
printf("O quinto dia da semana é quinta");
    break;
    case 6:
printf("O sexto dia da semana é sexta");
    break;
    case 7:
printf("O ultimo dia da semana é sabado");
    break;
default:
printf("Desculpe mas isso não é um dia da semana");

}



}