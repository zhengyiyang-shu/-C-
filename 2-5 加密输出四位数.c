//
// Created by 郑奕扬 on 2020/9/27.
// Copyright by 郑奕扬 2020-Now All rights reserved.Limitation of usage apply,NOT intended for copying.
#include <stdio.h>

int main()
{
    int num, a, b, c, d;
    printf("Enter a number: ");
    scanf("%d", &num);
    a = num / 1000;
    //printf("%d", num);
    num = num - a * 1000;
    b = num / 100;
    num = num - b * 100;
    c = num / 10;
    num = num - c * 10;
    d = num;
    //printf("The  encrypted  number  is  %d %d %d %d", a,b,c,d);
    int ae = (a + 9) % 10;
    int be = (b + 9) % 10;
    int ce = (c + 9) % 10;
    int de = (d + 9) % 10;
    printf("The encrypted number is %d%d%d%d", ce, de, ae, be);
}
