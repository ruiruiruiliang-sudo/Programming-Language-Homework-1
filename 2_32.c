#include <stdio.h>

int main(void) {
    int weightInPounds;
    int heightInInches;
    int bmi;

    printf("Enter weight in pounds: ");
    scanf("%d", &weightInPounds);

    printf("Enter height in inches: ");
    scanf("%d", &heightInInches);

    bmi = (weightInPounds * 703) / (heightInInches * heightInInches);

    printf("Your BMI is: %d\n", bmi);

    printf("BMI VALUES\n");
    printf("Underweight: less than 18.5\n");
    printf("Normal: between 18.5 and 24.9\n");
    printf("Overweight: between 25 and 29.9\n");
    printf("Obese: 30 or greater\n");

    if (bmi < 18) {
        printf("Result: Underweight\n");
    } else if (bmi <= 24) {
        printf("Result: Normal\n");
    } else if (bmi <= 29) {
        printf("Result: Overweight\n");
    } else {
        printf("Result: Obese\n");
    }
    system("Pause");

    return 0;
}
