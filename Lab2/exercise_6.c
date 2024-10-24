#include <stdio.h>
#define DOLLAR_TO_EURO 0.92

int main(void){
    float dollarInput;
    
    for (int i = 0; i < 10; i++){
        printf("%d. Input Dollar: ", i+1);
        scanf("%f", &dollarInput);
        printf("€%.2f\n", dollarInput * DOLLAR_TO_EURO);
    }

    return 0;
}
