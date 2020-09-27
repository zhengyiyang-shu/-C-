//
// Created by 郑奕扬 on 2020/9/27.
//
// Copyright by 郑奕扬 2020-Now All rights reserved.Limitation of usage apply,NOT intended for copying.

#include <stdio.h>

int main() {
    //定义变量 a为用户输入的数字，flag为判断用户输入的数字是否小于0的标志（若小于0则循环会中断），sum为所求之和
    int a;
    int sum = 0;
    printf("Input integers: ");
    int flag = 1;
    while (flag == 1) {

        scanf("%d", &a);
        //一旦用户输入了小于0的数，则判断循环终止
        if (a <= 0) {
            flag = 0;
        } else {
            //如果用户输入了奇数，则在结果中加上
            if (a % 2 == 1) {
                sum = sum + a;
            }
        }
    }
    printf("The sum of the odd numbers is %d", sum);

    return 0;
}
