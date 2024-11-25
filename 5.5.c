#include <stdio.h> 
#include "conio.h" 
#include <unistd.h> 
int main(void) { 
 int h, m; 
 _clrscr(); 
 for(h=0; h<=23; h++) { 
 for(m=0; m<=59; m++) { 
 _gotoxy(38,12); 
 printf("%02d:%02d\n", h, m); 
 sleep(1); 
 } 
 } 

} 