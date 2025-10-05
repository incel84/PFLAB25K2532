#include <stdio.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    int i = 0;

    
    while (i < a) {
        int j = 0;
        while (j < 2 * a - 1) {
            if (j >= (a - 1) - i && j <= (a - 1) + i) {
                printf("*");
            } else {
                printf(" ");
            }
            j++;
        }
        printf("\n");
        i++;
    }

    
    i = a - 2;  
    while (i >= 0) {
        int j = 0;
        while (j < 2 * a - 1) {
            if (j >= (a - 1) - i && j <= (a - 1) + i) {
                printf("*");
            } else {
                printf(" ");
            }
            j++;
        }
        printf("\n");
        i--;
    }

    return 0;
}
