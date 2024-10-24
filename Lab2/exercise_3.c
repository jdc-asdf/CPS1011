#include <stdio.h>
#define NUMOFWORDS 3

int main(void){
    char words[NUMOFWORDS][64];

    printf("Input %d words\n", NUMOFWORDS);

    for (int i = 0; i < NUMOFWORDS; i++){
        scanf("%s", words[i]);
    }
   
    printf("Words in reverse:\n");
    for (int i = NUMOFWORDS; i > -1; i--){
        printf("%s\n", words[i]);
    }

    return 0;
}
