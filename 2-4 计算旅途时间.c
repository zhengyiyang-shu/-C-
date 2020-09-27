//
// Created by 郑奕扬 on 2020/9/27.
// Copyright by 郑奕扬 2020-Now All rights reserved.Limitation of usage apply,NOT intended for copying.
#include <stdio.h>

int main() {
    int st, et = 0;
    printf("Enter time1:");
    scanf("%d", &st);
    printf("Enter time2:");
    scanf("%d", &et);
    int stm = st % 100;
    int sth = st / 100;
    int etm = et % 100;
    int eth = et / 100;
    int mins = (eth - sth) * 60 + etm - stm;
    int th = mins / 60;
    int tm = mins % 60;
    printf("The train journey time is %d hours %d minutes", th, tm);
}
