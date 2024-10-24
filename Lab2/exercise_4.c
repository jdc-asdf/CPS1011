#include <stdio.h>
#define NUMBER_OF_EMPLOYEES 10

int main(void){
    char name [NUMBER_OF_EMPLOYEES][64];
    char surname [NUMBER_OF_EMPLOYEES][64];
    float monthlyPay[NUMBER_OF_EMPLOYEES];
    float total;

    for (int i = 0; i < NUMBER_OF_EMPLOYEES; i++){
        printf("Enter Employee Name, Surname and Monthly Pay:\n");
        scanf("%s%s%f", name[i], surname[i], &monthlyPay[i]);
        total += monthlyPay[i];
        printf("\n");

        if ((i + 1) % 5 == 0 ){
            printf("Employee Data:\n");
            printf("%2.d %12.10s%12.10s%12.10s%24.24s\n", 0, "name", "surname", "Monthly Pay", "13-month Pay Cheque");
            for (int j = 4; j >= 0; j--){
                printf("%2.d %12.10s%12.10s%12.2f%24.2f\n", i-j+1, name[i-j], surname[i-j], monthlyPay[i-j], monthlyPay[i-j] * 13);
            }
        }
    }

    printf("Average Salary: %.2f\n", total/10);
    return 0;
}
