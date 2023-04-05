#include <stdio.h>

int main(){
    int x,y,z,a1,a2,a3;

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    if (x<y && x<z){
        a1 = x;
        if (y>z){
            a3=y;
            a2=z;
        }else{
            a3=z;
            a2=y;
        }
    }else if(y<x && y<z){
        a1 = y;
        if (x>z){
            a3=x;
            a2=z;
        }else{
            a3=z;
            a2=x;
        }
    }else if(z<x && z<y){
        a1 = z;
        if (x>y){
            a3=x;
            a2=y;
        }else{
            a3=y;
            a2=x;
        }
}
printf("%d %d %d",a1, a2 , a3);
}