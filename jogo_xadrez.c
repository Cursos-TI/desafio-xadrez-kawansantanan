#include <stdio.h>

int main(){

    int torre;
    int bispo = 0;
    int rainha = 0;
 
    printf("Torre:\n");

    for ( int torre = 0; torre < 5; torre++){
        printf("Direita\n");
    }

    printf("\n");

    printf("Bispo:\n");

    while (bispo < 5)
    {
        printf("Cima, direita\n");
        bispo++;
    }
    
    printf("\n");

    printf("Rainha:\n");

    do{
       printf("Esquerda\n");
       rainha++;
    } while (rainha < 8);

    return 0;
}