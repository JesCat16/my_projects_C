#include <stdio.h>

int main(){
    int a,i;

    scanf("%d", &a);

    int fb[a];

    fb[0] = 0;
    fb[1] = 1;

    for(i=2; i<=a; i++){
        fb[i]= fb [i-1] + fb[i-2];
    }
    printf("%d", fb[a-1]);
    return 0;
    
}
