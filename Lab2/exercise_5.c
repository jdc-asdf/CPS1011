#include <stdio.h>
#define DAYS_IN_THE_WEEK 7

int main(void){
    int days;
    for (int i = 0; i < 10; i++){
        printf("%d. Input Days: ", i+1);
        scanf("%d", &days);
        printf("%d weeks & %d days\n", days/DAYS_IN_THE_WEEK, days%DAYS_IN_THE_WEEK);
    }

    return 0;
}
