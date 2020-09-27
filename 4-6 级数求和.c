//
// Created by 郑奕扬 on 2020/9/27.
//

// Copyright by 郑奕扬 2020-Now All rights reserved.Limitation of usage apply,NOT intended for copying.
#include <stdio.h>

int main() {

    int n, k;
    int num = 0;
    float sum = 1;
    printf("Input n: ");
    scanf("%d", &n);
    int i;

    for (i = 1; i <= n; i++) {
        num = 1;
        //计算阶乘
        for (k = 1; k <= i; k++) {
            num = num * k;

        }

        sum = sum + 1.0 / num;
    }

    printf("e=%.4f", sum);

    return 0;
}
