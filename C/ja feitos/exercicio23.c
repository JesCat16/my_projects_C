#include <stdio.h>

int main(){
    int m,i,f,j;

    scanf("%d",&m);
    scanf("%d",&i);
    scanf("%d",&f);

    for(j = i;j<=f;j++){

        if(j%m == 0){
            printf("%d",j);
        }

    }
}