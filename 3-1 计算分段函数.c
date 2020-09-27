//
// Created by 郑奕扬 on 2020/9/27.
// Copyright by 郑奕扬 2020-Now All rights reserved.Limitation of usage apply,NOT intended for copying.
#include <stdio.h>
int main()
{
    printf("Enter x: ");
    float a = 0;
    scanf("%f", &a);
    int sig = 0;
    if (a > 0) {
        sig = 1;
    }
    if (a < 0) {
        sig = -1;
    }
    if (a == 0) {
        sig = 0;
    }
    printf("sign(%f)=%d",a,sig);
    return 0;
}

