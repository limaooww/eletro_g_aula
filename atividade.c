#include <stdio.h>



int main(){
    float peso;
    float altura;
    float resultado;
    printf("coloque seu peso: ");
    scanf("%f", &peso);  
    printf("coloque sua altura: ");
    scanf("%f", &altura);
    resultado = peso/(altura * altura);

    printf("%f", resultado);
  
    }