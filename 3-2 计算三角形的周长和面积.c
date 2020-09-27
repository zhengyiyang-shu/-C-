//
// Created by 郑奕扬 on 2020/9/27.
// Copyright by 郑奕扬 2020-Now All rights reserved.Limitation of usage apply,NOT intended for copying.
#include <math.h>
#include <stdio.h>
int main() {
    float a = 0;
    float b = 0;
    float c = 0;
    printf("Enter 3 sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    //判断第三边是否小于两边之和
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("These sides do not correspond to a valid triangle");
    } else {
        float s = (a + b + c) / 2;
        float ar = sqrtf(s * (s - a) * (s - b) * (s - c));
        float cc = (a + b + c);

        printf("area=%.2f\n", ar);
        printf("perimeter=%.2f", cc);
    }
    return 0;
}

