#include <stdio.h>

void main() {

    int i = 1;
    int j = 2;
    int soma = i + j;
    int subtracao = i - j;
    int multiplicacao = i * j;
    int divisao = j / i;
    int resto = i % j;
    int incremento = i++; //ou ++i
    int decremento = i--; //ou --i

    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Divisao: %d\n", divisao);
    printf("Resto: %d\n", resto);
    printf("Incremento: %d\n", incremento);
    printf("Decremento: %d\n", decremento);
    

}