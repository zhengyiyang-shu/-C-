//
// Created by 郑奕扬 on 2020/9/27.
//
// Copyright by 郑奕扬 2020-Now All rights reserved.Limitation of usage apply,NOT intended for copying.
#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
    float x, y, z = 0;
    printf("Enter money,year and rate:");
    scanf("%f %f %f", &x, &y, &z);
    float interest = 0;
    interest = pow((1 + z), y) * x - x;
    printf("interest=%.2f", interest);
    return 0;
}
