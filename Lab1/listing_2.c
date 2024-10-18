#include <stdio.h>

int main(void)

{

    int dogs;
    int cats;
    int total;



    printf("How many dogs do you have?\n");

    scanf("%d", &dogs);
    
    printf("How many cats do you have?\n");

    scanf("%d", &cats);

    total = cats + dogs;

    printf("So you have %d dog(s)!\n", dogs);
    printf("So you have %d cat(s)!\n", cats);
    printf("So you have %d pet(s) in total!\n", total);

    return 0;

}
