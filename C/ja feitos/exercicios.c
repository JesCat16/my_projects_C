#include <stdio.h>

int main(){

    int segundos, minutos;

    scanf("%d",&segundos);

    if (segundos > 60){
        int minutos = segundos/60;
        printf("%d\n", minutos);
    }
    else{
        int minutos = 0;
        printf("%d\n", minutos);
    }
    
    return 0;
}