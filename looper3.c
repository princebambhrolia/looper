#include <stdio.h>
int main() {
    int num, first, last, sum;
    printf("Enter any number: ");
    scanf("%d", &num);
    last = num % 10;
    first = num;
    while (first >= 10) {
        first/= 10;
    }
    sum = first + last;
    printf("The sum of the first and the last digit: %d\n", sum);
}
