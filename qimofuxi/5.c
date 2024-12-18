#include <stdio.h>
#include <stdlib.h>
int main() {
    int scores[20];
    double sum = 0, avg, final_avg;
    int count = 0, valid_count = 0;
    int valid_scores[20];
    for (int i = 0; i < 20; i++) {
        scanf("%d", &scores[i]);
        sum += scores[i];
    }
    avg = sum / 20;
    printf("所有评委平均分:%.3lf分.\n", avg);
    printf("不合格得分:");
    for (int i = 0; i < 20; i++) {
        if (abs(scores[i] - avg) < 10) {
            valid_scores[valid_count++] = scores[i];
        } else {
            printf("%d ", scores[i]);
        }
    }
    printf(".\n");
    if (valid_count > 0) {
        sum = 0;
        for (int i = 0; i < valid_count; i++) {
            sum += valid_scores[i];
        }
        final_avg = sum / valid_count;
        printf("最后得分:%.3lf分.", final_avg);
    } else {
        printf("无合格打分.");
    }
    return 0;
}