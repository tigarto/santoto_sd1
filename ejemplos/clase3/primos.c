#include <stdio.h>

int main() {
    int num, nDiv = 2, div, ciclos = 0;
    printf("Numero: ");
    scanf("%d",&num);
    for(div = 2; div < num; div++) {
        if(num%div == 0) {
            nDiv++;
            //printf("%d\n",div);
        }
        if (nDiv > 2) {
            break;
        }
        ciclos++;
    }
    printf("Numero de ciclos: %d\n",ciclos);
    if(nDiv > 2) {
        printf("%d no es primo\n",num);
    }
    else {
        printf("%d es primo\n",num);
    }
    return 0;
}


