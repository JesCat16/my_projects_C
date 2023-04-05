#include <stdio.h>

int main(){
    int a,b,c,d;
    char p;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);

    if(a+b>c){
        if(a+c>b){
            if (b+c>a){
                p ='S';
            }else {p = 'N';}
        }else{p = 'N';}
    }else{p = 'N';}

    printf("%c",p);
}
