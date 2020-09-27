//
// Created by 郑奕扬 on 2020/9/27.
//
// Copyright by 郑奕扬 2020-Now All rights reserved.Limitation of usage apply,NOT intended for copying.
#include <math.h>
#include <stdio.h>

int main() {
    float salrary = 0;
    float tax_rate = 0;
    printf("Enter the salary: ");
    scanf("%f", &salrary);
    if (salrary <= 850) {
        tax_rate = 0;
    } else if (salrary > 850 && salrary <= 1350) {
        tax_rate = 0.05;
    } else if (salrary > 1350 && salrary <= 2850) {
        tax_rate = 0.1;
    } else if (salrary > 2850 && salrary <= 5850) {
        tax_rate = 0.15;
    } else {
        tax_rate = 0.2;
    }
    double tax = (double) tax_rate * (salrary - 850);
    //在输出0时，有时会输出负数，这是为了避免这种情况
    if (tax == 0) {
        tax = 0;
    }
    printf("tax=%.2f", tax);
    return 0;
}
