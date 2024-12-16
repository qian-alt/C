#include <stdio.h>

/*********Begin*********/
double f(int n);
/*********End**********/

int main(void)
{  
    /*********Begin*********/
    int n;
    scanf("%d", &n);
    double sum = f(n);
    printf("%lf", sum);
    /*********End**********/
    return 0;
}

double f(int n) {
    double s = 1.0;
    double fz = 1.0,fm = 1.0;
    for(int i = 1; i <= n; i++) {
        fz *= i;
        fm *= (2 * i + 1);
        s += (fz / fm);
    }
    return s;
}