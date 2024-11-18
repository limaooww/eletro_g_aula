#include <stdio.h> 
int main(void) { 
 int a, c; 
 float s, n, m; 
 printf("Total de alunos? "); 
 scanf("%d",&a); 
 s = 0; 
 for(c=1; c<=a; c++) { 
 printf("%da. Nota? ", c); 
 scanf("%f",&n); 
 s = s + n; 
 } 
 m = s/a; 
 printf("Media = %.1f\n", m); 

}