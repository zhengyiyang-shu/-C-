//
// Created by 郑奕扬 on 2020/9/27.
//
// Copyright by 郑奕扬 2020-Now All rights reserved.Limitation of usage apply,NOT intended for copying.
#include <stdio.h>

int main() {
    //定义变量 i为循环控制符，n为循环次数，min为最小值,up为分子，down为分母
    float up = 2;
    float down = 1;
    float sum = 0;
    int i = 0;
    int n = 0;
    float org_up = 0;

    printf("Input n: ");
    scanf("%d", &n);


    for (i = 0; i <= n - 1; i++) {
        //在此，由于计算 分母 = 分子 + 原来分母 时会改变分母的值，我们要将分母保存在一个临时变量org_up中
        org_up = up;
        sum = sum + (float) up / (float) down;
        up = org_up + down;
        down = org_up;

    }
    printf("s=%.2f", sum);

    return 0;
}