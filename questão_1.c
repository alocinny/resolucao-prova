#include <stdio.h>
#include <stdlib.h>

int main(){
    int meses[] = {31,28,31,30,31,30,31,30,30,31,30,31};
    int dia;
    char titulo[50];
    int frequencia;

    

    printf("digite o titulo do evento: ");
    scanf("%s", &titulo);

    printf("1- 1 vez na semana\n2- duas vezes na semana\ndigite a frequencia ");
    scanf("%d", &frequencia);

    printf("1-segunda\n2-terca\n3-quarta\n4-quinta\n5-sexta\ndigite o dia de inicio: ");
    scanf("%d", &dia);

    dia+=1;
    int count = 1;

    printf("\n%s      %d/1/2023", titulo, dia);

    int data=dia;
    int i;
    if(frequencia == 1){

        for(int j=0;j<12;j++){
            for(i=data;i<=meses[j];i++){
                if(count%7==0){
                    printf("\n%s      %d/%d/2023",titulo, i+1,j+1);
                }
                count++;
            }
            data=0;
        }
    }
    if(frequencia == 2){
        int par = data - 6;
        for(int j=0;j<12;j++){
            for(i=data;i<=meses[j];i++){
                if(count%2==0){
                   if(count%par!=0 || count%(par+1)!=0){
                        printf("\n%s      %d/%d/2023",titulo, i+1,j+1);
                    } 
                } 
                count++;
            }
            data=0;
        }
    }


}