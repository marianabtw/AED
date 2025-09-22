#include <stdio.h>

int D(int m, int n){
    if (m == 0 || n == 0){
        return 1;
    }
    return D(m-1, n) + D(m-1, n-1) + D(m, n-1);
}

int D_d(int m, int n){
    int d[m][n];
    for (int i = 0; i<m; i++){
        d[i][0]=1;
    }
    for (int i = 0; i<n; i++){
        d[0][i]=1;
    }
    for (int i=1;i<m;i++){
        for (int j=1;j<n;j++){
            d[i][j] =  d[m-1][n] + d[m-1][n-1] + d[m][n-1];
        }
    }
}

int arr[50][50] = {{0}};

int D_m(int m, int n){
    int temp;

    if (arr[m][n] =! 0){
        return arr[m][n];
    }
    if (m == 0 || n == 0){
        arr[m][n] = 1;
        return 1;
    }else{
        temp = D_m(m-1, n) + D_m(m-1, n-1) + D_m(m, n-1);
    }
    arr[m][n] = temp;
    return temp;
}

void main(){
    for (int i = 0; i<15; i++){
        printf("\n");
        for (int j = 0; j<15; j++){
            printf("%d\t" , D_m(j, i));
        }
    }
}