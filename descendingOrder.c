#include<stdio.h>
void main(){
    int i;
    printf("enter number: ");
    scanf("%d",&i);

    void recursion(int n)
    {

        if(n<1)
           return;
        
        printf("%d\n ",n);
        recursion(--n);
    }
recursion(i);
}
