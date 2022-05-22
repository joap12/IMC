#include <stdio.h> 
#include <conio.h> 
#include <math.h> 
#include <locale.h>

#define LIMITE 30 
main() { 
    setlocale(LC_ALL, "Portuguese_Brazil");

    float peso, altura, imc; 

    printf("\n Qual o seu peso e altura? "); 
    printf("\n Digite seu peso: ");
    scanf("%f", &peso);
    printf(" Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso/pow((altura/100),2); 

    printf("\n Seu i.m.c. resultou em: %.2f", imc); 

    if( imc <= LIMITE ) printf("\n Portanto você não está obeso!"); 
    else printf("\n Portanto você está obeso!"); 

    getch();
}