#include <stdio.h>
int main() {
    float N1;
    float N2;
    float N3;
    float N4;
    printf("Primeiro BIM");
    scanf("%f", &N1);
    printf("Segundo BIM");
    scanf("%f", &N2);
    printf("Terceiro BIM");
    scanf("%f", &N3);
    printf("Quarto BIM");
    scanf("%f", &N4);

float nota_final = (N1+N2+N3+N4)/4;
printf("%.1f|\n", nota_final);
if ( 4>= nota_final <=7)
{
    printf("o aluno está na média");
    }
}