#include <stdio.h>

int main() {
    int N, i;
    printf("Digite las veces: ");
    scanf("%d",&N);
    i = 0;
    do {
        printf("Hola\n");
        i += 1;
    } while(i < N);
    /*
    for(i = 0;i <= N - 1; i++){
        printf("Hola\n");
    }
    */
    /*
    i =  0;
    while(i < N){
        printf("Hola\n");
        i++;
    }
    */
    /*
    if(N == 0) {
        printf("Hola\n");
    }
    else {
        for(i = 0;i <= N - 1; i++){
                printf("Hola\n");
        }
    }
    */
  return 0;
}
