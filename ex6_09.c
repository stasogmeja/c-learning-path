#include <stdio.h>

# define DENOMINATION 6

int try_one_coin(int *cents, int coin);
void print_change(int cents);
int round_to_5(int cents);

int
main(int argc, char **argv) {
    int cents;

    printf("Enter amount in cents: ");
    scanf("%d", &cents);

    cents = round_to_5(cents);

    print_change(cents);

    return 0;
}

int try_one_coin(int *cents, int coin) {
    int count = 0;

    while (*cents >= coin) {
        *cents -= coin;
        count++;
    }

    return count;
}

void print_change(int cents) {
    int coins[] = {200, 100, 50, 20, 10, 5};
    int i;

    for (i = 0; i < DENOMINATION; i++) {
        int num = try_one_coin(&cents, coins[i]);
        
        if (num > 0) {
        printf("give %d %3d-cent coins\n", num, coins[i]);
        }
    }    
}

int round_to_5(int cents) {
    int remainder = cents % 5;

    if (remainder < 3) {
        return cents - remainder;
    } else {
        return cents + (5 - remainder);
    }
}
