#include <stdio.h>

int main(){
 int i,j;
 float total;
    scanf("%d", &i);
    scanf("%d", &j);
    
    if(i == 1){
        total = (j * 9);
    }else if(i==2){
        total = (j * 12.5);
    }else if(i==3){
        total = (j * 11.5);
    }else if(i==4){
        total = (j * 10.5);
    }else if(i==5){
        total = (j * 14.5);
    }
    printf("TOTAL: R$%.2f",total);

}