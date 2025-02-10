#include<stdio.h>
#include<string.h>

int main(){
    char resposta[5] = {"sim"}; //Definimos um array de caracteres para armazenar a resposta(sim ou não)

    printf("Voce respondeu: %s\n", resposta);
    while (strcmp(resposta,"nao")!= 0){
        printf("Voce quer continuar? (sim/nao):");
        scanf("%4s",resposta); //Lê uma string de até 3 caracteres(sim/não)
        printf("Voce respondeu: %s\n", resposta);
    }
    
}