#include <stdio.h>


int printarray(char s, int a[]){
    printf("%s:", s);
    for(int i = 0; i<sizeof(a); i++){
        printf("%s + ", a[i]);
    }
    printf("\n");
}

int cumsum(int a[], int b[]){
    int c = 0;
    for (int i = 0; i<sizeof(a); i++){
        c+=a[i];
        b[i]=c;
    }
}

int main(){
    int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    printarray("a", a);
    int b[12];
    cumsum(a, b);
    printarray("b", b);
}

