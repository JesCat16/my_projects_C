#include <stdio.h>
#include "funcoes.h"

int main(){
    int a = 4, b = 2;
    int so = soma(a,b);
    int subtra = subtracao(a,b);
    int divi = divisao(a,b);
    int multip = multiplicacao(a,b);

    printf("%d\n",so);
    printf("%d\n",subtra);
    printf("%d\n",divi);
    printf("%d\n",multip);


}