#include <stdio.h>

int main() {

    int number, i, j;

    while(1) {

        printf("\nEnter a positive number (Enter \"-1\" to exit):");
        scanf("%d", &number);

        if (number == -1) {
            break;
        }

        if (number < 2) {
            printf("There is not a prime number\n");
            continue;
        }
        


        for (i = 2; i <= number; i++) {
            
            for(j = 2; j <= i/2; j++) {

                if(i%j == 0) {
                break;
                }
            }
            
            if (i%j != 0 || i == 2) {
            printf("%d is a prime number\n", i);
            }
        }
    }
    return 0;
}