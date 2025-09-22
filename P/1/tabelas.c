#include <stdio.h>
#include <math.h>
int main(void){
    int numero;
    scanf("%d", &numero);
    printf("%-15s%-15s%-15s\n", "numero", "quadrado", "raiz");
    for(int i = 1; i <= numero; i++){
        int quadrado = i*i;
        double raiz = sqrt(i);
        printf("\n %-15d %-13d %-12f", i, quadrado, raiz);
    }
    return 0;
}