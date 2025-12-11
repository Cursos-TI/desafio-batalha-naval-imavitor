#include <stdio.h>
    int main(){
        printf("  A B C D E F G H I J\n");
        int matriz [10][10] = {0}; //iniciando a matriz 10x10

        int navio1 [3] = {3,3,3}; //declarando o array dos navios de tamanho 1x3
        int navio2 [3] = {3,3,3};
        int navio3 [3] = {3,3,3};
        int navio4 [3] = {3,3,3};

        //definindo a posição do navio 1, utilizando for para preencher as linhas de acordo com o valor do navio
        for (int n1 = 0; n1 < 3; n1++){ 
            matriz[0][n1] = navio1[n1]; //posso decidir em qual linha iniciar (aqui por exemplo começa na linha 1)
        }
        //definindo a posição do navio 1, utilizando for para preencher as colunas de acordo com o valor do navio
        for (int n2 = 0; n2 < 3; n2++){ 
            matriz[n2+3][7] = navio2[n2]; //posso decidir em qual linha iniciar (aqui começa na linha 4)
        }

         for (int n3 = 0; n3 < 3; n3++){ 
                matriz[n3+4][n3+2] = navio3[n3]; //colocando o navio na diagonal
            }
        for (int n4 = 0; n4 < 3; n4++){ 
            matriz[n4+5][n4+5] = navio4[n4]; 
        }

        for (int i = 0; i < 10; i++){
            printf("%d ",i+1);  
            for (int j = 0; j < 10; j++){
                printf("%d ", matriz[i][j]);
            }
          
        printf("\n");
        }
    return 0;
}

    