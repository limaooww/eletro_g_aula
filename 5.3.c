#include <stdio.h>
int main (void) {
    int p, i;
    float c, j;
    printf("Capital? ");
    scanf("%f", &c);
    printf("Juros? ");
    scanf("%f", &j);
    printf("Periodo? ");
    scanf("%d", &p);
    for(i=1; i<=p; i++) {
        c = (1+j/100)*c;
        printf("%d. Capital: R$ %.2f\n", i, c );
    }

}