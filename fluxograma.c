#include <stdio.h>
int main () {
  char estado_civil;

    printf("insira uma letra mor:  ");
    scanf("%c", &estado_civil);
    if(estado_civil == 's'||'S') {
        printf("solteiro");
    }
    if(estado_civil == 'c') {
        printf("casadoh mor");
    }
    if(estado_civil == 'd') {
        printf("divorciado");
    }
    if(estado_civil == 'v')
     {
        printf("viuvo");
    }






}