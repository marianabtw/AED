#include <stdio.h>
#include <assert.h>

int NUM_MULT;

int f1(int* a, int n){
    assert (n > 2);
    int r = a[1] / a[0];
    for (int i = 2; i<n; i++){
        if (a[i] != r*a[i-1]){
            return 0;
        }
    }
    return 1;
}