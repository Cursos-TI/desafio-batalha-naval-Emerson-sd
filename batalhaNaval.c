#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.




int main (){

        char linha [10] ={'A','B','C','D','E','F','G','H','I','J'};
        int tabuleiro[10][10];
        int naviohorizotal[3];
        int naviovertical[3];
    for (int i=0;i<10;i++){
        for(int j = 0; j<10;j++){
            tabuleiro[i][j]=0;
        }

    for (int i =0 ;i<3;i++){
        naviohorizotal[i]=3;
        naviovertical[i]=3;
    }

        
    }
    printf("TABULEIRO BATALHA NAVAL\n");

    printf("  ");

    for (int i = 0;i<10;i++){
        printf(" %c",linha[i]);
    }
    printf("\n");

    for(int i = 0;i<10;i++){
        printf("%2d",i+1);
        for (int j =0;j<10;j++){
            tabuleiro[3][7]=naviohorizotal[0];
            tabuleiro[3][8]=naviohorizotal[1];
            tabuleiro[3][9]=naviohorizotal[2];

            
            tabuleiro[7][7]=naviohorizotal[0];
            tabuleiro[6][7]=naviohorizotal[1];
            tabuleiro[5][7]=naviohorizotal[2];
            printf(" %d",tabuleiro[i][j]);


        }
        printf("\n");
    }
    
    
    
    
    
   return 0; 
}

