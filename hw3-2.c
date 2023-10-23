#include <stdio.h>

int main() {
    int s1, d1, s2, d2, s3, d3;


    printf("請輸入三筆訂單的出發時間和返回時間（格式：s1 d1 s2 d2 s3 d3）：");
    scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);

    int timeline[25] = {0}; 

    for (int i = s1; i < d1; i++) {
        timeline[i]++;
    }
    for (int i = s2; i < d2; i++) {
        timeline[i]++;
    }
    for (int i = s3; i < d3; i++) {
        timeline[i]++;
    }


    int max_cars = 0;
    for (int i = 0; i < 25; i++) {
        if (timeline[i] > max_cars) {
            max_cars = timeline[i];
        }
    }

    printf("%d\n", max_cars);

    return 0;
}
