#include <stdio.h>
    int main(){
        printf("Tabuleiro de Batalha Naval\n");
        printf("  A B C D E F G H I J\n");
        int matriz [10][10] = {0}; //iniciando a matriz 10x10

        int navio1 [3] = {3,3,3}; //declarando o array dos navios de tamanho 1x3
        int navio2 [3] = {3,3,3};
        int navio3 [3] = {3,3,3};
        int navio4 [3] = {3,3,3};

        //Definindo a posição do navio 1, utilizando for para preencher as linhas de acordo com o valor do navio
        for (int n1 = 0; n1 < 3; n1++){ 
            matriz[0][n1] = navio1[n1]; //posso decidir em qual linha iniciar (aqui por exemplo começa na linha 1)
        }
        //Definindo a posição do navio 1, utilizando for para preencher as colunas de acordo com o valor do navio
        for (int n2 = 0; n2 < 3; n2++){ 
            matriz[n2+3][7] = navio2[n2]; //posso decidir em qual linha iniciar (aqui começa na linha 4)
        }

         for (int n3 = 0; n3 < 3; n3++){ 
                matriz[n3+4][n3+2] = navio3[n3]; //colocando o navio na diagonal
            }
        for (int n4 = 0; n4 < 3; n4++){ 
            matriz[n4+5][n4+5] = navio4[n4]; 
        }

        //Exibição do Tabuleiro Antes do Ataque
            for (int i = 0; i < 10; i++){
                printf("%d ",i+1);  
             for (int j = 0; j < 10; j++){
                printf("%d ", matriz[i][j]);
            }
          
        printf("\n");
        }
        printf("\n");

        //Criando as matrizes das habilidades
        int habilidade1[3][5]={0};
        int habilidade2[3][5]={0};
        int habilidade3[3][5]={0};
        //Cone
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 5; j++){
                if( i == 0 && j == 2 ){
                    habilidade1 [i][j] = 1;
                }else if( i == 1 &&  j > 0 && j < 4 ){
                    habilidade1 [i][j] = 1;
                }else if(i == 2){
                    habilidade1 [i][j] = 1;
                    }  
                }
            }
        //Cruz
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 5; j++){
                if( i == 0 && j == 2 ){
                    habilidade2 [i][j] = 1;
                }else if( i == 1 ){
                    habilidade2 [i][j] = 1;
                }else if(i == 2 && j == 2){
                    habilidade2 [i][j] = 1;
                    }  
                }             
            }
        //Octaedro
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 5; j++){
                if( i == 0 && j == 2 ){
                    habilidade3 [i][j] = 1;
                }else if( i == 1 &&  j > 0 && j < 4 ){
                    habilidade3 [i][j] = 1;
                }else if(i == 2 && j == 2){
                    habilidade3 [i][j] = 1;
                    }  
                }
            }
        //Posicionando as habilidades
        
        //Cone
        for (int i = 0; i < 3; i++) //incrementando a linha que começa na quarta linha e vai até a sexta já que a matriz habilidade tem [3][5]
            for (int j = 0; j < 5; j++){ //mesma coisa para as colunas
                if (habilidade1[i][j] == 1){
                    matriz[i][j] = habilidade1[i][j];
            }
        } 

        //Cruz
         for (int i = 5; i < 8; i++){ 
            for (int j = 2; j < 7; j++){ 
                if (habilidade2[i-5][j-2] == 1){ 
                    matriz[i][j] = habilidade2[i-5][j-2];//cálculo para caber nos parametros de busca da matriz original que vai de 0 a 3 e de 0 a 5;
                }
            }
        } 

        //Octaedro
        for (int i = 0; i < 3; i++){ 
            for (int j = 5; j < 10; j++){ 
                if (habilidade3[i][j-5] == 1){ 
                    matriz[i][j] = habilidade3[i][j-5];
                }
            }
        }
          

        //Exibição do Tabuleiro Depois do Ataque
            printf("Resultado do Ataque\n");
            printf("  A B C D E F G H I J\n");
            for (int i = 0; i < 10; i++){
                printf("%d ",i+1);  
             for (int j = 0; j < 10; j++){
                printf("%d ", matriz[i][j]);
            }
          
        printf("\n");
        }

    return 0;
}

    