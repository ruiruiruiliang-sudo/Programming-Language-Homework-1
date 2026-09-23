#include <stdio.h>

int main(void) {
    int number;

    printf("number\tsquare\tcube\n");

    for (number = 0; number <= 10; number++) {
        printf("%d\t%d\t%d\n", number, number * number, number * number * number);
    }
    system("Pause");
    return 0;
}