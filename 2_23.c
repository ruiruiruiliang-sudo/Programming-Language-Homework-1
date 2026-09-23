#include <stdio.h>

int main(void) {
    int a, b, c;
    int largest, smallest;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = a;
    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }

    smallest = a;
    if (b < smallest) {
        smallest = b;
    }
    if (c < smallest) {
        smallest = c;
    }

    printf("Largest is: %d\n", largest);
    printf("Smallest is: %d\n", smallest);
    
    system("Pause");
    return 0;
}
