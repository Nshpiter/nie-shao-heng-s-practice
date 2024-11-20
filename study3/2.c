#include <stdio.h>
int main() {
    int num, max, min, diff, count = 0;
    scanf("%d", &num);
    if (num < 1000) {
        num = num * 10;
        if (num < 1000) num = num * 10;
    }
    do {
        int a = num % 10;
        int b = (num / 10) % 10;
        int c = (num / 100) % 10;
        int d = num / 1000;
        int temp[4] = {a, b, c, d};
        for (int i = 0; i < 3; i++) {
            for (int j = i + 1; j < 4; j++) {
                if (temp[i] < temp[j]) {
                    int swap = temp[i];
                    temp[i] = temp[j];
                    temp[j] = swap;
                }
            }
        }
        max = temp[0] * 1000 + temp[1] * 100 + temp[2] * 10 + temp[3];
        int temp2[4] = {a, b, c, d};
        for (int i = 0; i < 3; i++) {
            for (int j = i + 1; j < 4; j++) {
                if (temp2[i] > temp2[j]) {
                    int swap = temp2[i];
                    temp2[i] = temp2[j];
                    temp2[j] = swap;
                }
            }
        }
        min = temp2[0] * 1000 + temp2[1] * 100 + temp2[2] * 10 + temp2[3];
        diff = max - min;
        if (count > 0) printf("\n");
        printf("%04d-%04d=%04d", max, min, diff);
        num = diff;
        count++;
    } while (diff != 6174 && count < 7);
    return 0;
}
