#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str); // Read string including spaces

    while (str[i]) {
        if (str[i] == ' ') {
            str[i] = '-'; // Replace space with hyphen
        }
        i++;
    }

    printf("%s\n", str);

    return 0;
}
