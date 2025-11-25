#include <stdio.h>

int main() {
    char str[100];
    int i = 0, spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str); // Read string including spaces

    while (str[i]) {
        if (str[i] == ' ') {
            spaces++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        else {
            special++;
        }
        i++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    return 0;
}
