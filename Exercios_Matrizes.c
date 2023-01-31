#include <stdio.h>



struct registro
{
    char nome[20];
    char telefone[10];
};




void alocacao(){

int linhas = 5;
int colunas = 10;
// alocando espaço para as linhas,
// que guardam ponteiro de inteiro.
matriz = malloc(sizeof(int*) * linhas);

// agora, para cada linha, alocamos
for(int i = 0; i < linhas; i++) {
    matriz[i] = malloc(sizeof(int) * (colunas+1));
}

}

int main(){

    int numeros[2][2];

    for (int i = 0; i < 20; i++)
    {
      for (int j = 0; j < 10; i++)
      {
        numeros[i][j] = 10;
        printf("%d\n", numeros[i][j]);
      }
    printf("\n");  

    }

}
    

