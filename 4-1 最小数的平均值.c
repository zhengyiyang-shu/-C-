//
// Created by 郑奕扬 on 2020/9/27.
//
// Copyright by 郑奕扬 2020-Now All rights reserved.Limitation of usage apply,NOT intended for copying.

#include <stdio.h>

int main() {
    //定义变量 a为用户输入数字，n为循环次数，min为最小值
    int a, n, i;
    //将min设为足够大的值
    int min = 100000;
    printf("Input n: ");
    scanf("%d", &n);
    printf("Input numbers: ");

    for (i = 1; i <= n; i++) {

        scanf("%d", &a);
        //判断用户输入的数与当前最小值的大小关系
        if (a <= min) {
            //如果用户输入的数更小，我们就最小值变量重新设置为用户输入的数
            min = a;
        }
    }

    printf("min=%d", min);

    return 0;
}


