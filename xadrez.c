#include <stdio.h>

void torre(int n){
        if(n <= 0){
            printf("Fim movimento Torre\n");
            return;
        }
        printf("direita\n");
        torre(n -1);
}


void bispo(int j){

    if( j <= 0){
        printf("Fim movimento Bispo\n");
        return;
    }
    printf("Cima, Direita\n");
    bispo(j-1);

}


void rainha(int r){
    if(r <= 0){
        printf("Fim movimento Rainha\n");
        return;
    }
    printf("Esquerda\n");
    rainha(r -1);
}

void cavalo (int c){
    
    for(int x = 0; x < 1; x++){
        if(c <= 0){
        printf("Insira valor > 0\n");
        break;
    }
        for(int j = 0; j < c; j++){
            printf("cima\n");
            
        }
        printf("Direita\n");
        printf("Fim movimento Cavalo\n");
    }
}

int main(){

    int n = 5;
    int j = 5;
    int r = 8;
    int c = 2;
    torre(n);
    bispo(j);
    rainha(r);
    cavalo(c);
    
}
