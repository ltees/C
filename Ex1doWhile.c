#include<stdio.h>

int main(){
    int N;

    printf("Digite um numero positivo:");
    scanf("%d", &N);

    do{
        printf("%d\n", N);
        N--;
    }
    while(N >= 0);

    printf("Fim");
    return 0;
}