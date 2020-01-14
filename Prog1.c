#include<stdio.h>

void main(){

double celsius;
double fahrenheit;

printf("Quantos graus celsius estão");
scanf(" %lf",&celsius);

fahrenheit = celsius * 9/5 + 32;
printf("Estão aproximadamente %lfº fahrenheit",fahrenheit);
}