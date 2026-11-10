#include <stdio.h>

void to_hms(int total, int* h, int* m, int* s) {
    *h = total / 3600;
    *m = (total % 3600) / 60;
    *s = total % 60;
}

int main(void) {
    int total_seconds;
    int hour, minute, second;

    printf("총 시간(초)을 입력하시오 : ");
    scanf_s("%d", &total_seconds);

    to_hms(total_seconds, &hour, &minute, &second);

    printf("%d시간 %d분 %d초\n", hour, minute, second);

    return 0;
}