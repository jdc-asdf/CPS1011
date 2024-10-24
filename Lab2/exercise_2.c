#include <stdio.h>

int main() {
    float weight;
    int value;
    printf("Enter your weight in pounds: \n");
    scanf("%f", &weight);
    // Platinum is $1770 / pound
    // 14.5 troy ounces in 1 pound
    value = 1770.0 * weight * 14.5;
    printf ("Your weight in platinum costs $%d \n", value);

    printf("Hex: %X\n",value);
    printf("Octal: %o\n",value);
}

//1. original result $4234725.00
//2. new result $4234725.00. Result does not change.
//4. for %d: $4234725, for %f: $0.000000. value cannot be printed as the specifier is expecting a float but recieved an int instead.
//5. nothing will be printed
