#include <stdio.h>
#include <string.h>

int main() {
    char answer[5]; 
    char guess[5]; 
    int round = 0;

    scanf("%s", answer);

    while (1) {

        scanf("%s", guess);


        if (strcmp(guess, "0") == 0) {
            break;
        }

        int A = 0, B = 0;


        for (int i = 0; i < 4; i++) {
            if (guess[i] == answer[i]) {
                A++;
            } else {
                for (int j = 0; j < 4; j++) {
                    if (guess[i] == answer[j]) {
                        B++;
                    }
                }
            }
        }

        printf("%dA%dB\n", A, B);

        round++;
    }

    return 0;
}

