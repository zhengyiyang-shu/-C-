//
// Created by 郑奕扬 on 2020/9/27.
//
// Copyright by 郑奕扬 2020-Now All rights reserved.Limitation of usage apply,NOT intended for copying.
#include <stdio.h>
int main() {
    char score;


    printf("Input Grade: ");
    scanf("%c", &score);
    if (score == 'A') {
        printf("A is 90~100");
    } else if (score == 'B') {
        printf("B is 80~89");
    } else if (score == 'C') {
        printf("C is 70~79");
    } else if (score == 'D') {
        printf("D is 60~69");
    } else if (score == 'E') {
        printf("E is 0~59");
    } else {
        printf("error");
    }

    return 0;
}
