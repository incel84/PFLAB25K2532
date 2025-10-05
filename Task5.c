#include <stdio.h>

int main() {
    int c; // number of rows
    printf("Enter number of rows: ");
    scanf("%d", &c);

    long long a = 0, b = 1, next; 

    for (int i = 1; i <= c; i++) {   
        for (int j = 1; j <= i; j++) { 
            next = a + b;
            printf("%lld ", next);
            a = b;
            b = next;
        }
        printf("\n"); 
    }

    return 0;
}
