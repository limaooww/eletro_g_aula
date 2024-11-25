#include <stdio.h>
int main (void) {
    int p, m, c, i;

    printf("Total de pacientes: ");
    scanf("%d", &p);

    m = 0;

    for( c=1; c<=p; c++) {
        printf("%d. Idade?", c);
        scanf("%d", &i);
        if (i>m) m = i;
    
    }
printf ("pessoa mais velha: = %d\n", m);

}