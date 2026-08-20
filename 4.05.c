#include <stdio.h>

int
main(int argc, char **argv){
    int n, i;

    printf("Enter numbers:\n");

    while (scanf("%d", &n) == 1){

        printf("%2d |", n);

        for (i = 0; i < n; i++){
            printf("*");
        }

        printf("\n");
    }

    return 0;
    
}