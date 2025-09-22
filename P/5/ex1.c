#include <stdio.h>

int N1, N2, N3;

int f1(int n){
    if (n == 1){
        return 1;
    }
    else{
        N1++;
        return f1(n/2) + n;
    }
}

int f2(int n){
    if (n == 1){
        return 1;
    }else{
        N2+=2;
        return f2(n/2) + f2( (n+1)/2 ) + n;
    }
}

int f3(int n){
    if (n == 1){
        return 1;
    }
    else if (n%2 == 0){
        N3++;
        return 2*f3(n/2) + n;
    }
    else{
        N3+=2;
        return f3(n/2) + f3( (n+1)/2 ) + n;
    }
}

int main(){
    printf("      |  F1   Calls  |  F2  Calls  |  F3  Calls");
    for(int i = 1; i<=128; i++){
        N1 = 0; N2 = 0; N3 = 0;
        int x = f1(i);
        int y = f2(i);
        int z = f3(i);
        printf("\ni=%3d |  %4d %3d    | %4d %3d    | %4d %3d ", i, x, N1, y, N2, z, N3);
    }
}