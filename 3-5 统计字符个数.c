//
// Created by 郑奕扬 on 2020/9/27.
//
// Copyright by 郑奕扬 2020-Now All rights reserved.Limitation of usage apply,NOT intended for copying.
#include <stdio.h>
int main() {
    int i;
    int letter = 0;
    int blank = 0;
    int digit = 0;
    int other = 0;
    char f;
    printf("Input 10 characters: ");
    for (i = 0; i <= 9; i++) {
        f = getchar();
        if (f >= '0' && f <= '9') {
            digit++;
        } else if (f == ' ') {
            blank++;
        } else if ((f >= 'a' && f <= 'z') || (f >= 'A' && f <= 'Z')) {
            letter++;
        } else {
            other++;
        }
    }
    printf("letter=%d,blank=%d,digit=%d,other=%d", letter, blank, digit, other);
    return 0;
}
