//
// Created by 郑奕扬 on 2020/9/27.
//
// Copyright by 郑奕扬 2020-Now All rights reserved.Limitation of usage apply,NOT intended for copying.
#include <math.h>
#include <stdio.h>

int main() {

    int ind = 0;
    int num[20];
    int n = 0;
    float sum = 1;
    printf("Input an integer: ");
    scanf("%d", &n);
    //若该数小于0，则先取绝对值，再输出负号
    if (n < 0) {
        printf("- ");
        n = -n;
    }
    //末尾取余，取出各位
    while (n >= 1) {
        num[ind] = n % 10;
        n = n / 10;
        ind = ind + 1;
    }
    while (ind >= 1) {
        printf("%d ", num[ind - 1]);
        ind = ind - 1;
    }

    return 0;
}