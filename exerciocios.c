
/*int c = 10;
int* ponteiro;

// ponteiro apontando para o mesmo endereco de c
ponteiro = &c;

// imprime o endereco da variavel c
printf("%d %d\n", ponteiro, &c);

// imprime o conteúdo da variavel c
printf("%d %d\n", *ponteiro, c); 




/*#include <stdio.h>

int soma(int* nums, int total){

     for (int i = 0; i < 3; i++)
     {
          total += nums[i];
     }

     printf("Resukts %d", total);
     return total;     

}

int main(){

int nums[3];
nums[0] = 10;
nums[1] = 20;
nums[2] = 30;

int total = soma(nums, 3);

}

*/




void teste() {
    
    FILE* f;

    f = fopen("teste.txt", "r"); // r+ le e escreve
    if(f == 0) {
        printf("Banco de dados de palavras não disponível\n\n");
        exit(1);
    }

   
    fclose(f);
}