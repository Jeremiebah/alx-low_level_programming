/*a program written in C that calculates the minimum number of coins */
/*needed to make change for a given amount of money*/

#include <stdio.h>
#include <stdlib.h>

int calculateCoins(int amount) {
    int coins[] = {25, 10, 5, 2, 1};
    int coinCount = sizeof(coins) / sizeof(coins[0]);
    int count = 0;

    for (int i = 0; i < coinCount; i++) {
        count += amount / coins[i];
        amount %= coins[i];
    }

    return count;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    int cents = atoi(argv[1]);

    if (cents < 0) {
        printf("0\n");
        return 0;
    }

    int coinCount = calculateCoins(cents);
    printf("%d\n", coinCount);

    return (0);
}
