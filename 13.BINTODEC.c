#include <stdio.h>

int main() {
    char binary[32];
    int decimal = 0;
    char ch;
    int i;

    printf("Enter a binary number (up to 31 digits):\n");
    
    for (i = 0; i < 32; i++) {
        ch = getchar();
        if (ch == '\n' || ch == '\r') {
            binary[i] = '\0'; 
            break;
        } else if (ch == '0' || ch == '1') {
            binary[i] = ch;
        } else {
            printf("Invalid character '%c'. Only binary digits (0 or 1) are allowed.\n", ch);
            return 1; 
        }
    }


    if (i == 32) {
        binary[i] = '\0';
    }


    for (i = 0; binary[i] != '\0'; i++) {
        decimal = decimal * 2 + (binary[i] - '0');
    }

    printf("The decimal equivalent is: %d\n", decimal);

    return 0;
}
