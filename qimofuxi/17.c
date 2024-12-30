#include <stdio.h>

int main() {
    for(int i = 1; i <= 10; i++) {
        if(i == 3) {
            // 跳过当前循环后续内容
            continue;
        }
        if(i == 7) {
            // 终止整个循环
            break;
        }
        printf("%d ", i);
    }
    return 0;
}