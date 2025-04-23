#include <stdio.h>

void movimentotorre(int torre){
    if(torre > 0){
        printf("Direita\n");
        movimentotorre(torre - 1);
    }
}

void movimentobispo(int bispo){
    if(bispo > 0){
        printf("Cima, direita\n");
        movimentobispo(bispo - 1);
    }
}

void movimentorainha(int rainha){
    if(rainha > 0){
        printf("Esquerda\n");
        movimentorainha(rainha - 1);
    }
}

int main(){
    
    printf("\nTorre:\n");
    movimentotorre(5);
    printf("\n");

    printf("\nBispo:\n");
    movimentobispo(5);
    printf("\n");

    printf("\nRainha:\n");
    movimentorainha(8);
    printf("\n");

    printf("\nCavalo:\n");

    for (int i = 1; i <= 3; i++)
    {   
        if( i == 2) continue; 

        printf("Cima, ");
    }

        printf("Direita\n");


    return 0;
}