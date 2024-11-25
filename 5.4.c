#include <stdio.h>
int main(void) {
    int e, a, b, c, n, i; 
 char v; 
 printf("Total de eleitores? "); 
 scanf("%d", &e); 
 a = 0; 
 b = 0;
 c = 0; 
 n = 0; 
 for(i=1; i<=e; i++) { 
 printf("%do. voto? ", i); 
 scanf("%*c%c", &v); // %*c descarta enter digitado na ultima entrada 
 switch( toupper(v) ) { 
 case 'A': a++; break; 
 case 'B': b++; break; 
 case 'C': c++; break; 
 default : n++;
}
} 
 printf("\nResultado:\n\n"); 
 printf("A.....: %d\n", a); 
 printf("B.....: %d\n", b); 
 printf("C.....: %d\n", c); 
 printf("Nulo..: %d\n", n); 
 
} 