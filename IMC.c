#include <stdio.h>

int main(){

/* Variáveis */

float imc; 
float peso, altura;
char classificacao [256];

/* Inputs e Outputs */

printf("Qual o seu peso? \n");
scanf("%f", &peso);
printf("\n\n\n");
printf("Qual a sua altura? \n");
scanf(" %f", &altura);

/* Calculo do IMC */

imc = peso / (altura * altura);

/* Classificação */

if (imc < 18.5)
{
    printf("Classificação: Abaixo do Peso \n\n");
}
if (imc >= 18.6 && imc <= 24.9)
{
    printf("Classificação: Saudável \n\n");
}
if (imc >= 25.0 && imc <= 29.9){
    printf("Classificação: Peso em excesso \n\n");
}
if (imc >= 30.0 && imc <= 34.9){
    printf("Classificação: Obesidade Grau I \n\n");
}
if (imc >= 35.0 && imc <= 39.9){
    printf("Classificação: Obesidade Grau II \n\n");
}
if (imc >= 40.0)
{
    printf("Classificação: Obesidade Grau III \n\n");
}
}