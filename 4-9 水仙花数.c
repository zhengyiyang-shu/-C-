//
// Created by 郑奕扬 on 2020/9/27.
//
// Copyright by 郑奕扬 2020-Now All rights reserved.Limitation of usage apply,NOT intended for copying.

#include <stdio.h>

int main() {

    int num;
    int a, b, c;
    int maxn, minn;
    printf("Input m: ");
    //输入范围的最小值
    scanf("%d", &minn);
    printf("Input n: ");
    //输入范围的最大值
    scanf("%d", &maxn);
    //遍历所有小于等于999的数字
    for (a = 0; a <= 8; a++) {
        for (b = 0; b <= 8; b++) {
            for (c = 0; c <= 8; c++) {
                num = 100 * a + 10 * b + c;
                //判断是否在要求的范围之间
                if ((num >= minn) && (num <= maxn)) {
                    //判断是否时水仙花数
                    if (a * a * a + b * b * b + c * c * c == num) {
                        printf("%d\n", num);
                    }
                }
            }
        }
    }

    return 0;
}
