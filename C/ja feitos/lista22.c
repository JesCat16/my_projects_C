#include <stdio.h>

int main(){
   int i;

   for (i = 0; i < 10; i++){

    if (i % 2 == 0){
        //retorna ao for
        continue;}
    
    else if (i >= 8){
        break;
    }
    

    printf("%d ", i);
    }
}