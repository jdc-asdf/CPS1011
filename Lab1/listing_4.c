#include <stdio.h>

int sum (int x, int y);
int subtract (int x, int y);
int multiply (int x, int y);


int main(void){
    int x = 10;
    int y = 5;
    
    int sumResult = sum(x, y);
    int subtResult = subtract(x, y);
    int multResult = multiply(x, y);
    
    printf("Starting Numbers are: %d, %d\n\n", x , y);
    printf("Results are\n");
    printf("sum: %d\n", sumResult);
    printf("subtraction: %d\n", subtResult);
    printf("multiplication: %d\n", multResult);

    return 0;
}


int sum (int x, int y){
    return x + y;
}

int subtract (int x, int y){
    return x - y;
}

int multiply (int x, int y){
    return x * y;
}
