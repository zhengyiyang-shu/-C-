//
// Created by 郑奕扬 on 2020/9/27.
// Copyright by 郑奕扬 2020-Now All rights reserved.Limitation of usage apply,NOT intended for copying.
#include <stdio.h>
int main() {
    int i;
    float score = 0;
    for (i = 0; i <= 4; i++) {
        printf("Enter grade: ");

        scanf("%f", &score);

        if (score >= 60) {
            printf("Pass\n");
        } else {
            printf("Fail\n");
        }

    }
    return 0;
}

