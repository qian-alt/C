#include<stdio.h>

int count1 = 0, count0 = 0;
int countA = 0, countB = 0;

void erjinzhi(int k1, int k2) {
    int a[1000];
    for (int n = k1; n <= k2; n++) {
        int i = 0;
        int temp = n;
        count1 = 0; // 重置 count1
        count0 = 0; // 重置 count0
        while (temp > 0) {
            a[i] = temp % 2;
            temp /= 2;
            i++;
        }
        for (int j = 0; j < i; j++) {
            if (a[j] == 1) {
                count1++;
            } else if (a[j] == 0) {
                count0++;
            }
        }
        if (count1 > count0) {
            countA++;
        } else {
            countB++;
        }
    }
}

int main() {
    int k1, k2;
    scanf("%d %d", &k1, &k2);
    erjinzhi(k1, k2);
    printf("%d %d\n", countA, countB);
    return 0;
}