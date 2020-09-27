//
// Created by 郑奕扬 on 2020/9/27.
//

#include <stdio.h>

int main() {

    int a, b;
    int num = 0;
    int minn = 0;
    int maxn = 0;
    printf("Input m: ");
    scanf("%d", &minn);
    printf("Input n: ");
    scanf("%d", &maxn);
    int counter = 0;
    for (a = minn; a <= maxn - 1; a++) {
        //num为是否为素数的标志
        num = 0;

        for (b = 2; b <= a - 2; b++) {
            if (a % b == 0) {
                //如果找到一个因子，那么此数即不为素数，num被设置为1
                num = 1;
            }
        }
        //若循环完毕都没有找到质数，说明其为素数,同时，1不为素数，在此做附加判断
        if (num == 0 && (a != 1 || a == 2)) {
            counter = counter + 1;
            printf("%4d", a);
            //若输出满6个，则换一行
            if (counter % 6 == 0) {
                printf("\n");
            }
        }
    }

    return 0;
}
