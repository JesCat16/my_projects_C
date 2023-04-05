#include <stdio.h>
// ^ isso sempre tem que começar o código!
//não retorna nada!
//void main(){
    //printf("Hello, world!");
//}

//retorna um número inteiro e o return 0 faz com que apenas funcione se der certo, se não colocado ele retorne o erro!
//int main(){
    //printf("Hello, world!");
    //return 0;
//}

//sempre declara a váriavel!
int main(){
    int s = 1; //tipo inteiro
    float f = 3.14; //ponto flutuante
    char c = 'a'; // uma letra só

    printf("Inteiro: %d\n", s);
    printf("Ponto Flutuante: %f\n", f);
    printf("Letra: %c\n", c); 

    return 0;
}

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