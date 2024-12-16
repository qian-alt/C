#include<stdio.h>

void solve(){
    /*********Begin*********/
    for (int A = 1; A <= 3000; A++) {
        int sum1 = 0;
        for (int i = 1; i <= A / 2; i++) {
            if (A % i == 0) {
                sum1 += i;
            }
        }

        for (int B = 1; B <= 3000; B++) {
            int sum2 = 0;
            for (int j = 1; j <= B / 2; j++) {
                if (B % j == 0) {
                    sum2 += j;
                }
            }

            if (sum1 == B && sum2 == A && sum1 <= 3000 && sum2 <= 3000&&A!=B&&A<=B) {
                printf("(%d,%d)\n", A, B);
            }
        }
    }
    /*********End*********/
}

int main(void)
{  
    solve();
    return 0;
}