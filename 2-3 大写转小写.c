//
// Created by 郑奕扬 on 2020/9/27.
// Copyright by 郑奕扬 2020-Now All rights reserved.Limitation of usage apply,NOT intended for copying.

#include <stdio.h>
#include <ctype.h>
int main()
{
    char a, b;
    scanf("%c%c", &a, &b);
    printf("Use putchar:%c %c\n", tolower(a), tolower(b));
    printf("Use printf:%c %c", tolower(a), tolower(b));
    return 0;

}
