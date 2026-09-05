#include <stdio.h>

int sum_factors(int n);
int amicable_pair(int n1, int n2);

int
main(int argc, char **argv) {
    int n1, n2;

    printf("Enter two integers: ");
    scanf("%d%d", &n1, &n2);

    if (amicable_pair(n1, n2)) {
        printf("%d and %d are an amicable pair\n", n1, n2);
    } else {
        printf("%d and %d are not an amicable pair\n", n1, n2);
    }

    return 0;
}

int sum_factors(int n) {
    int sum = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return sum;
}

int amicable_pair(int n1, int n2) {
    if (n1 == n2){
        return 0;
    }

    return sum_factors(n1) == n2 && sum_factors(n2) == n1;
}