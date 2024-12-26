#include <stdio.h>
#include <ctype.h> // for isupper() and islower()
int main() {
	char str[100];
	int vowels = 0;
	printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
	
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o'
            || str[i] == 'u') {
            vowels++;
        }
    }
    printf("Lowercase string: %s\n", str);
    printf("Number of vowels: %d\n", vowels);
}
