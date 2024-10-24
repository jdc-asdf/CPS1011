#include <stdio.h>
#include <math.h>

double reimannZeta(int x, int approx);

int main(void){
    int userInput_S;
    int userInputApprox;

    printf("Input number: ");
    scanf("%d", &userInput_S); 
    printf("Apporximate to: ");
    scanf("%d", &userInputApprox); 

    double result = reimannZeta(userInput_S, userInputApprox);
    printf("%.15f", result);
    return 0;
}

double reimannZeta(int s, int approx){
    double sum;
    s = s * -1;
    
    for (int i = 1; i < approx+1; i++) sum = sum + pow(i, s);
    return sum;
}
