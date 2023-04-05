#include <stdio.h>
int f(){
    static int x = 0; //variave universal
    return x++;
}
int main(){
    int i = 0;
    while(i++ < 10)
    printf("%d ", f());
}