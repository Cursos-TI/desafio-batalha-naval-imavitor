#include <stdio.h>
    int main(){
        printf("  A B C D E F G H I J\n");
        int matriz [10][10] = {0}; //iniciando a matriz 10x10

        int navio1 [3] = {3,3,3}; //declarando o array dos navios de tamanho 1x3
        int navio2 [3] = {3,3,3};

        //definindo a posição do navio 1, utilizando for para preencher as linhas de acordo com o valor do navio
        for (int k = 0; k < 3; k++){ 
            matriz[0][k] = navio1[k]; //posso decidir em qual linha iniciar (aqui por exemplo começa na linha 1)
        }
        //definindo a posição do navio 1, utilizando for para preencher as colunas de acordo com o valor do navio
        for (int x = 0; x < 3; x++){ 
            matriz[x+3][7] = navio2[x]; //posso decidir em qual linha iniciar (aqui começa na linha 4)
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

    