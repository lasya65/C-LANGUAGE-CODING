#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++, printf("\n")) {
        for (int j = 0, num = i % 2 ? 1 : 2; j < i; j++, num += 2)
            printf("%d ", num);
    }
}

