#include <stdio.h>

int main(){
    int a,b,i,MDC,maior;
    scanf("%d", &a);
    scanf("%d", &b);

    if (a>b){
        maior = a;
    }else{
        maior = b;
    }

    for (i = maior; i > 0; i--){
        if (a%i == 0 && b%i == 0){
            MDC = i;
            break;
        }else{
            continue;
        }
    }

    printf("MDC = %d", MDC);


}