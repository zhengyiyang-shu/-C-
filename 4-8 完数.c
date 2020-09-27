//
// Created by 郑奕扬 on 2020/9/27.
// Copyright by 郑奕扬 2020-Now All rights reserved.Limitation of usage apply,NOT intended for copying.


#include <stdio.h>

int main() {

    int a, b;
    int num;

    for (a = 1; a <= 998; a++) {
        num = 0;
        for (b = 1; b <= a - 1; b++) {
            //若a%b等于0，说明b是a的因子，在num中加上
            if (a % b == 0) {
                num = num + b;
            }
        }
        if (num == a) {
            printf("%d ", a);
        }
    }


    return 0;
}

