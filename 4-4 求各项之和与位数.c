//
// Created by 郑奕扬 on 2020/9/27.
//
// Copyright by 郑奕扬 2020-Now All rights reserved.Limitation of usage apply,NOT intended for copying.
#include <stdio.h>
int main()
{

    int ind = 0;
    int num[20];
    int n = 0;
    int sum = 0;
    int ind_h = 0;

    printf("Input an integer: ");
    scanf("%d", &n);
    int i = 0;
    int counter = 0;
    //考虑负数时的情形，由于题设要求在算各位之和时忽略符号，因而我们将n取绝对值
    if (n < 0) {
        n = -n;
    }
    //末尾取余法，把各位之和取到数组num之中，同时，ind变量进行累加，以计算出总位数
    while (n >= 1) {
        num[ind] = n % 10;
        n = n / 10;
        ind = ind + 1;
    }
    //将sum初始化为0
    sum = 0;

    ind_h = ind;
    //遍历数组，取出每一位进行累加
    while (ind >= 1) {

        sum = sum + num[ind - 1];

        ind = ind - 1;
    }
    printf("count=%d sum=%d", ind_h, sum);

    return 0;
}



