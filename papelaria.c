#include <math.h>

int main () {

    float preco1 = 0.25;
    float preco2 = 0.20;
    float quantidade_de_folhas;

    printf ("quantidade_de_folhas: ");
    scanf ("%f", &quantidade_de_folhas);
    
    float multiplicacao1 = preco1 * quantidade_de_folhas;
    float multiplicacao2 = preco2 * quantidade_de_folhas;

    if (quantidade_de_folhas <= 100)
    {
        printf("%.1f|\n", multiplicacao1); 
        }

    else 
   
   { (quantidade_de_folhas > 100);
    
        printf("%.1f|\n", multiplicacao2);


    }
}
