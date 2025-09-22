#include <stdio.h>
#include <assert.h>

int NUM_COMPS;
int f1(int* a, int n){
    assert (n > 2);
    int resultado; 
    for (int i = 1; i<n-1; i++){
        NUM_COMPS++;
        if (a[i] == a[i-1] + a[i+1]){
            resultado++;
        }

    }
    return resultado;
}



int main(void){
int a1[10] = {1,2,3,4,5,6,7,8,9,10};
int a2[10] = {1,2,1,4,5,6,7,8,9,10};
int a3[10] = {1,2,1,3,2,6,7,8,9,10};
int a4[10] = {0,2,2,0,3,3,0,4,4,0};
int a5[10] = {0,0,0,0,0,0,0,0,0,0};
int* array[5] = {a1, a2, a3, a4, a5};

    for (int i = 0; i<5; i++){
        NUM_COMPS=0;
        int n = f1(array[i],10);
        printf("\n%d é o número de elementos que respeitam a propriedade", n);
        printf("\n%d é o número de comparações", NUM_COMPS);
    }
}
