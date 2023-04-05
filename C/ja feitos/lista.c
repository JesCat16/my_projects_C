#include <stdio.h>

int main(){

    int segundos, minutos , hora;

    scanf("%d",&segundos);

    if (segundos >= 60){
        int minutos = segundos/60;
        int segundos = segundos % 60;
        printf("%d:%d", minutos,segundos);
        
        if (minutos >= 60){
            int hora = minutos/60;
            printf("%d\n", hora);
        }
        else{
            int hora = 0;
            printf("%d\n", hora);
        }
    }
    else{
        int minutos = 0;
        printf("%d\n", minutos);
    }
    
    return 0;
}