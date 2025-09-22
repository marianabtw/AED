#include <stdio.h>

int main(void){
    int array[60];
    for (int i = 0; i<59; i++){
        array[i]=i*i;
    }
    for (int i = 0; i<59; i++){
        for (int j = 0; j<59; j++){
            for (int k = 0; k<59; k++){
                if ()
                printf("\n%d = %d + %d + %d", i+j+k, i*i, j*j, k*k);
            }
        }
    }
    return 0;
}

main();