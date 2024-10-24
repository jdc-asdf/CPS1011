#include <stdio.h>

unsigned int factorial (unsigned int x);

int main(void){
    unsigned int userInput;
    printf("Input number: ");
    scanf("%d", &userInput); 
    printf("%d! = %d\n", userInput, factorial(userInput));
    return 0;
}

unsigned int factorial(unsigned int x){
    if (x == 0) return 1;
    else return x*factorial(x-1);    
}
