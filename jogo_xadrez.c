#include <stdio.h>

int main(){

    int t;
    int b = 0;
    int r = 0;
    int cavalo = 1, c;
    printf("Torre:\n");

    for ( int t = 0; t < 5; t++){
        printf("Direita\n");
    }

    printf("\n");

    printf("Bispo:\n");

    while (b <= 5)
    {
        printf("Cima, direita\n");
        b++;
    }
    
    printf("\n");

    printf("Rainha:\n");

    do{
       printf("Esquerda\n");
       r++;
    } while (r < 8);

    printf("\n");

    printf("cavalo:\n");

    while(cavalo--){
        for(c = 0; c < 2; c++ )
        {
            printf("Cima\n");
        }
        printf("Direita\n");
        }
    
    
    return 0;
}