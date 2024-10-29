#include <stdio.h>
int main () {

    float x;
    float y;
    char z;
    printf ("escolha um numero mor: ");
    scanf ("|%1.f|\n", x);
    printf ("escolhe outro vida: ");
    scanf ("|%1.f|\n", y);
    printf ("escolhe a operção ");
    scanf ("%c", &z);
    float soma = x+y;
    float subtracao = x-y;
    float divisao = x/y;
    float multiplicacao = x*y;

    if (z == '+')
    {
        printf("soma");    
    }
    else;
     if (z == '-')
    {
        printf("subtracao");  
    }
     else;
     if (z == '*')
    {
        printf("multiplicacao");    
    }
    else;
     if (z == '%')
    {
        printf("divisao"); 
    }
}
