/*
 * 2.33 (Car-Pool Savings Calculator)
 * 讀入每日總里程、油價、平均油耗、停車費、過路費，
 * 計算並顯示每天開車去工作的花費。
 */
#include <stdio.h>

int main(void) {
    double milesPerDay;
    double costPerGallon;
    double milesPerGallon;
    double parkingFee;
    double tollFee;
    double gasCost;
    double totalCost;

    printf("Enter total miles driven per day: ");
    scanf("%lf", &milesPerDay);

    printf("Enter cost per gallon of gasoline: ");
    scanf("%lf", &costPerGallon);

    printf("Enter average miles per gallon: ");
    scanf("%lf", &milesPerGallon);

    printf("Enter parking fees per day: ");
    scanf("%lf", &parkingFee);

    printf("Enter tolls per day: ");
    scanf("%lf", &tollFee);

    gasCost = (milesPerDay / milesPerGallon) * costPerGallon;
    totalCost = gasCost + parkingFee + tollFee;

    printf("Your daily driving cost is: $%.2f\n", totalCost);

    system("Pause");
    return 0;
}
