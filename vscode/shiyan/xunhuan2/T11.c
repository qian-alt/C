#include <stdio.h>
#include <math.h>

char s[3];
int sps[3];

int XL(int a, int b, int c) {
    void LX(int a, int b, int c);
    LX(a, b, c);
    if (sps[0] - sps[1] == 1 && sps[1] - sps[2] == 1) {
        return 1;
    } else {
        return 0;
    }
}

void LX(int a, int b, int c) {
    int t;
    if (a < b) {
        t = a;
        a = b;
        b = t;
    }
    if (a < c) {
        t = a;
        a = c;
        c = t;
    }
    if (b < c) {
        t = b;
        b = c;
        c = t;
    }
    sps[0] = a;
    sps[1] = b;
    sps[2] = c;
}

void max(int a, int b, int c) {
    LX(a, b, c);
    int max = sps[0];
    if (max > 10) {
        if (max == 11) {
            max = 'J';
        } else if (max == 12) {
            max = 'Q';
        } else if (max == 13) {
            max = 'K';
        } else if (max == 14) {
            max = 'A';
        }
        sprintf(s, "%c", max);
    } else {
        sprintf(s, "%d", max);
    }
}

int main(void) {
    int N;
    scanf("%d", &N);
    int a, b, c;
    char d1, d2, d3;
    for (int i = 1; i <= N; i++) {
        scanf("%d%c %d%c %d%c", &a, &d1, &b, &d2, &c, &d3);
        if (a == b && a == c) {
            max(a, b, c);
            printf("Leopard %s\n", s);
        } else if (d1 == d2 && d1 == d3) {
            if (XL(a, b, c)) {
                max(a, b, c);
                printf("Flush straight %s\n", s);
            } else {
                max(a, b, c);
                printf("Same kind %s\n", s);
            }
        } else if (XL(a, b, c)) {
            max(a, b, c);
            printf("Straight %s\n", s);
        } else if (a == b) {
            max(a, b, 0);
            printf("Pair %s\n", s);
        } else if (b == c) {
            max(b, c, 0);
            printf("Pair %s\n", s);
        } else if (c == a) {
            max(c, a, 0);
            printf("Pair %s\n", s);
        } else {
            max(a, b, c);
            printf("General %s\n", s);
        }
    }
    return 0;
}