#include <stdio.h>
#include <stdlib.h>

int a[101][101]; // 二维数组存储选手比赛情况
int books[101];  // 数组记录每位选手的比赛对手
int main() {
    int n, days = 0, sum = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        a[i][0] = 1; // 初始化每位选手已完成一场比赛

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n - 1; j++)
            scanf("%d", &a[i][j]); // 输入每位选手在n-1天内的比赛对手

    while (1) {
        days++;

        if (days > n * (n - 1) / 2) {
            days = -1; // 如果比赛天数超过上限，无法满足所有选手的要求
            break;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - 1; j++) {
                if (a[i][j] != 0) {
                    books[i] = j; // 记录每位选手的未完成比赛对手
                    break;
                }
            }
        }

        for (int i = 1; i <= n - 1; i++) {
            for (int j = i + 1; j <= n; j++) {
                if (a[i][books[i]] == j && a[j][books[j]] == i) {
                    a[i][books[i]] = a[j][books[j]] = 0; // 若两位选手互为对手，比赛完成
                }
            }
        }

        for (int i = 1; i <= n; i++)
            sum += books[i]; // 计算所有选手完成的比赛数量

        if (sum == n * (n - 1))
            break; // 若所有选手完成所有比赛，跳出循环

        sum = 0; // 重置sum，用于下一轮循环
    }

    printf("%d", days); 
    return 0;
}
