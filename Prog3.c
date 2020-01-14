#include <stdio.h>
void main(){

const double premio = 500000;
const double vencedor = 46;
const double segundo = 32;
const double terceiro = 22;
double premio1;
double premio2;
double premio3;

premio1= premio*vencedor/100;
premio2= premio*segundo/100;
premio3= premio*terceiro/100;

printf("O vencedor ganhou %lf, o segundo ganhou %lf e o terceiro ganhou %lf",premio1,premio2,premio3);
}