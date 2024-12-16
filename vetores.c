#include <stdio.h>

int main (void) {
    int v[3], i;
for(i=0; i<3; i++) {
    printf("%do. numero?  ", i+1);
    scanf("%d", &v[i]);
}
printf("\nordem inversa: ");
for(i=2; i>=0; i--) {
    printf("%d ", v[1]);
}
}
