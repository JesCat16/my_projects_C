#include <stdio.h>

int main(){

    int s, m, h, t;

    scanf("%d",&t);
    h = t/3600;
    m = (t % 3600)/60;
    s = t % 60;

    printf("%d:%d:%d",h,m,s);


}