#include <stdio.h>
#include <string.h>

int main() {
    char temp[10];
    char name[3][10];
    char *pname[3];

    for (int i = 0; i < 3; i++) {
        pname[i] = name[i];
        scanf("%s", pname[i]);
    }

    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (strcmp(pname[i], pname[j]) > 0) {
                strcpy(temp, pname[i]);
                strcpy(pname[i], pname[j]);
                strcpy(pname[j], temp);
            }
        }
    }

    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("%s\n", pname[i]);
    }

    return 0;
}