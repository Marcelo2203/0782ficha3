#include <stdio.h>

int dia;
int categoria;
int cate;
double total;
int seguro ;
void main(){
dias();
escolha();
preco();

}
void dias(){
printf("Quantos dias pretende alugar o carro ");
scanf(" %d",&dia);
}
void escolha(){
printf("Qual a tarifa que deseja\n ");
printf("\tKM-Ilimitado\tDiario\t+\tKm\tSeguro\n");
printf("1\t   27,50\t 14,00\t       0,17\t  6,50\n");
printf("2\t   32,50\t 17,00\t       0,20\t  7,50\n");
printf("3\t   37,50\t 20,00\t       0,25\t  8,50\n");
printf("4\t   40,00\t 22,00\t       0,30\t  10,00\n");
scanf(" %d",&cate);
printf("[1]Km ilimitados ou [2]Diario ");
scanf(" %d",&categoria);
printf("Quer seguro?\n[1]Sim\t[2]Nao");
scanf(" %d",&seguro);
}
void preco(){
if (cate == 1 && categoria == 1 && seguro == 1) 
{
printf("Entao escolheu a escolha A onde vai pagar 27,50 por dia por KM ilimitados\n");
total = 27.50 * dia + 6.50;
printf("Entao no total vai pagar %lf\n",total);
}
else if (cate == 1 && categoria == 2 && seguro == 1)
{
printf("Entao escolheu a escolha A onde vai pagar 27,50 por dia por KM ilimitados\n");
total = 14 * dia + 6.50 + 0.17*100;
printf("Entao no total vai pagar %lf\n",total);
}
else if (cate == 1 && categoria == 1 && seguro == 2)
{
printf("Entao escolheu a escolha A onde vai pagar 27,50 por dia por KM ilimitados\n");
total = 27.50 * dia;
printf("Entao no total vai pagar %lf\n",total);
}
else if (cate == 1 && categoria == 2 && seguro == 2)
{
printf("Entao escolheu a escolha A onde vai pagar 27,50 por dia por KM ilimitados\n");
total = 14 * dia + 0.17*100;
printf("Entao no total vai pagar %lf\n",total);
}
else if (cate == 2 && categoria == 1 && seguro == 1)
{
printf("Entao escolheu a escolha B onde vai pagar 32,50 por dia por KM ilimitados\n");
total = 32.50 * dia + 7.50;
printf("Entao no total vai pagar %lf\n",total);
}
else if (cate == 2 && categoria == 1 && seguro == 2)
{
printf("Entao escolheu a escolha A onde vai pagar 27,50 por dia por KM ilimitados\n");
total = 32.50 * dia + 0.20*100;
printf("Entao no total vai pagar %lf\n",total);
}
else if (cate == 2 && categoria == 2 && seguro == 1)
{
printf("Entao escolheu a escolha A onde vai pagar 27,50 por dia por KM ilimitados\n");
total = 17 * dia + 0.20*100;
printf("Entao no total vai pagar %lf\n",total);
}
else if (cate == 2 && categoria == 2 && seguro == 2)
{
printf("Entao escolheu a escolha A onde vai pagar 27,50 por dia por KM ilimitados\n");
total = 17 * dia + 0.20*100 + 7.50;
printf("Entao no total vai pagar %lf\n",total);
}
else if (cate == 3 && categoria == 1 && seguro == 1)
{
printf("Entao escolheu a escolha A onde vai pagar 27,50 por dia por KM ilimitados\n");
total = 37.50 * dia + 8.50;
printf("Entao no total vai pagar %lf\n",total);
}
else if (cate == 3 && categoria == 1 && seguro == 2)
{
printf("Entao escolheu a escolha A onde vai pagar 27,50 por dia por KM ilimitados\n");
total = 37.50 * dia ;
printf("Entao no total vai pagar %lf\n",total);
}
else if (cate == 3 && categoria == 2 && seguro == 2)
{
printf("Entao escolheu a escolha A onde vai pagar 27,50 por dia por KM ilimitados\n");
total = 20 * dia + 0.25*100;
printf("Entao no total vai pagar %lf\n",total);
}
else if (cate == 3 && categoria == 2 && seguro == 1)
{
printf("Entao escolheu a escolha A onde vai pagar 27,50 por dia por KM ilimitados\n");
total = 20 * dia + 0.25*100+8.50;
printf("Entao no total vai pagar %lf\n",total);
}

else if (cate == 4 && categoria == 1 && seguro == 1)
{
printf("Entao escolheu a escolha A onde vai pagar 27,50 por dia por KM ilimitados\n");
total = 40 * dia + 10;
printf("Entao no total vai pagar %lf\n",total);
}
else if (cate == 4 && categoria == 1 && seguro == 2)
{
printf("Entao escolheu a escolha A onde vai pagar 27,50 por dia por KM ilimitados\n");
total = 40 * dia ;
printf("Entao no total vai pagar %lf\n",total);
}
else if (cate == 4 && categoria == 2 && seguro == 2)
{
printf("Entao escolheu a escolha A onde vai pagar 27,50 por dia por KM ilimitados\n");
total = 22 * dia + 0.30*100;
printf("Entao no total vai pagar %lf\n",total);
}
else if (cate == 4 && categoria == 2 && seguro == 1)
{
printf("Entao escolheu a escolha A onde vai pagar 27,50 por dia por KM ilimitados\n");
total = 22 * dia + 0.30*100+10.00;
printf("Entao no total vai pagar %lf\n",total);
}
}