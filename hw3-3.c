#include <stdio.h>
#include <stdlib.h>

int calculateDigitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int compare(const void *a, const void *b) {
    int digitSumA = calculateDigitSum(*(int*)a);
    int digitSumB = calculateDigitSum(*(int*)b);

    if (digitSumA != digitSumB) {
        return digitSumA - digitSumB;
    } else {
        return *(int*)a - *(int*)b;
    }
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int numbers[2] = {num1, num2};

    qsort(numbers, 2, sizeof(int), compare);

    printf("%d\n", numbers[0]);

    return 0;
}

