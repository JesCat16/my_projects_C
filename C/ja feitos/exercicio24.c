#include <stdio.h>
int main(){
    int a,rv,rm;
    scanf("%d",&a);
    rv = 0;
    while(a!=0){
        rm = a%10;
        rv=rv*10+rm;
        a/=10;
    

    }
    printf("%d", rv);

}