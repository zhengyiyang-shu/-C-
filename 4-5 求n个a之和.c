//
// Created by 郑奕扬 on 2020/9/27.
//
// Copyright by 郑奕扬 2020-Now All rights reserved.Limitation of usage apply,NOT intended for copying.
#include <stdio.h>

int main() {

    int a, n;
    printf("Input a, n: ");
    scanf("%d %d", &n, &a);
    int i = 0;

    int num = 0;
    int sum = 0;
    //观察到 a aa aaa 的递推公式为 A(N) = A(N-1) *10 + a，因而如此计算
    for (i = 1; i <= a; i++) {
        num = num * 10 + n;
        sum = sum + num;
    }
    printf("s=%d", sum);

    return 0;
}
