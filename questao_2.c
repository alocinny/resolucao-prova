#include <stdio.h>
#include <stdlib.h>

int main(){
    char x; char z;

    printf("digite um caracter: ");
    scanf("%c", &x);

    do{
        printf("digite outro caracter: ");
        scanf("%c", &z);
    
    }while(z<x);

    int count=0;

    for(char c = x+1; c <= z; c++){
        count++;
    }

    printf("\n%d", count);
}