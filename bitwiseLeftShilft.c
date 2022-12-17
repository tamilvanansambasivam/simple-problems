#include <stdio.h>
int main(){

    int var  = 8;
    printf("var * 2 = %d\n", var<<1);
    printf("var * 4 = %d\n", var<<2);
    printf("var * 8 = %d\n", var<<3);
    return 0;
}

// number << n = number * 2^n