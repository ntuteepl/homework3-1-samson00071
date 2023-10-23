#include <stdio.h>
#include <stdlib.h>
int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}


