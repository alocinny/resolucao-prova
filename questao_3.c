#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num;
    time_t start_1, end_1, star_2, end_2;

    int **matriz;
    int i, j, k;

    printf("digite a ordem da matriz quadrada: ");
    scanf("%d", &num);
    
    start_1 = time(NULL);

    matriz = malloc(num*sizeof(int)); // numero de linhas

    for(i=0;i<num;i++){
        matriz[i] = malloc(num*sizeof(int));
    }
    end_1 = time(NULL);

    star_2 = time(NULL);
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            if(i==j){
                matriz[i][j] = 1;
            } else {
                printf("digite um numero: ");
                scanf("%d", &k);

                matriz[i][j] = k;
            }
        }
    }
    end_2 = time(NULL);

    printf("tempo de alocacao: %4.2fs e tempo de preenchimento da matriz: %4.2fs", difftime(end_1,start_1), difftime(end_2, star_2));

}