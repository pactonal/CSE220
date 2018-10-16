// Study Code for CSE 220 Exam 1
#include <stdio.h>

// HW02
int prob7() {
    int x = 4, y = 7;
    x = 2 * x;
    y = y + 2;
    x = 2 * (x + y);
    x - 1;
    printf("X = %d\n Y = %d\n", x, y);
    return 0;
}

// X = 37
// Y = 9

// HW04
int prob3() {
    int alpha = 10, beta = 5, gamma = 3;
    alpha /= beta++ - --gamma;
    printf("%d %d %d\n", alpha, beta, gamma);
    return 0;
}

// 3 6 2

int prob5() {
    int x = 5, y = 7;
    int result = (x == y) + y / 2 + !y;
    return result;
}

// result has value 3

int prob6() {
    int x = 17, y = 4;
    int z = x & y;
    int w = x && y;
    printf("z = %d\tw=%d", z, w);
    return 0;
}

// z = 0    w=1

int prob8() {
    int x = 23;
    if (24 > x > 18) {
        printf("%d is between 18 and 24\n");
    } else {
        printf("%d is outside the range 18 - 24\n");
    }
    return 0;
}

// is outside the range 18 - 24

int prob9() {
    int a = 4, b = 2, c = 4;
    x = a && b ? a/b : a/c;
    return x;
}

// x has value 2

int prob10() {
    int w = 15, z = 5;
 // int w = 5, z = 15;
    if (w<10)
        if (z > 10)
            printf("0000\n");
        else
            printf("1111\n");
    printf("2222\n");
    return 0;
}

// w = 15, z = 5
// 2222
// w = 5, z = 15
// 0000
// 2222

int prob11() {
    char answer = 'y';
    int countYes, countNo;
 /* if (answer == 'y') {
        printf("Let’s do it\n");
        printf("Be ready at 5:00pm\n");
        countYes++;
    } else if (answer == 'n') {
        printf("May be next time\n");
        countNo++; */

    switch (answer) {
        case 'y':
            printf("Let's do it\n");
            printf("Be ready at 5:00pm\n");
            countYes++;
            break;
        case 'n':
            printf("Maybe next time\n");
            countNo++;
            break;
        case 'u':
            printf("Still undecided?\n");
            break;
        default:
            printf("This is not a valid option\n");
            break;

    }
}

// Code is rewritten using a switch statement

int prob12() {
    int delta = 26;
    switch (delta/5) {
        case 1: printf("delta is small");
        case 5: printf("delta is midsize");
        case 10: printf("delta is large");
        default: printf("delta can be anything");
    return 0;
    }
}

// delta is midsize
// delta is large
// delta can be anything

int prob13() {
 /* for (row = 50; row >= 1; row--)
        if (row % 2 == 0)
            printf("Even iteration #%d\n", row);
        else
            printf("Odd iteration #%d\n", row); */

    int row = 50;
    while (row >= 1) {
        if (row % 2 == 0)
            printf("Even iteration #%d\n", row);
        else
            printf("Odd iteration #%d\n", row); 
        row--;
    }
}

// code is rewritten using a while loop

// HW05
int prob1() {
    int value = 7;
    do {
        printf("%d ", value);
        value *= 2;
    } while (value < 225);
}

// 7 14 28 56 112 224

int prob1_2() {
    int alpha = 10, beta = 10;
    for (alpha = 0; alpha < 5; alpha++) {
        for (beta = 100; beta < 300; beta = beta + 100)
            printf("%d", alpha);
        printf("\n");
    }
}

// 00
// 11
// 22
// 33
// 44

int prob2() {
    int x = 0, y = 0;
    y = x = 11,12,13,14;
}

// x = 11 y = 11

int prob2_2() {
    int x = 0, y = 0;
    y = x = (11,12,13,14);
}

// x = 14 y = 14
