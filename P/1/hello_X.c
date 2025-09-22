#include<stdio.h>

int main (void){
    char nome[60];
    printf("Nome proprio e apelido: ");
    fgets(nome, 60, stdin);
    printf("Hello %s", nome);
}
