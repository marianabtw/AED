//
// TO DO : desenvolva um algoritmo para verificar se um numero inteiro positivo
//         e uma capicua
//         Exemplos: 12321 e uma capiacua, mas 123456 nao e
//         USE uma PILHA DE INTEIROS (STACK) e uma FILA DE INTEIROS (QUEUE)
//
// TO DO : design an algorithm to check if the digits of a positive decimal
//         integer number constitue a palindrome
//         Examples: 12321 is a palindrome, but 123456 is not
//         USE a STACK of integers and a QUEUE of integers
//

#include <stdio.h>
#include <math.h>
#include "IntegersQueue.h"
#include "IntegersStack.h"

int main(void) { 
    int n;
    scanf("Numero: %d", &n);
    Queue* queue = QueueCreate(20);
    Stack* stack = StackCreate(20);
    
    while (n>0){

        int r = n%10;
        n/=10;
        QueueEnqueue(queue, r);
        StackPush(stack, r);
    }

    while (QueueIsEmpty(queue) == 0 || StackIsEmpty(stack) == 0){
        
        int q = QueueDequeue(queue);
        int s = StackPop(stack);
        if (q != s){
            printf("N e capicua");
            return 0;}
    }
    printf("E capicua");
    return 0; 
}
