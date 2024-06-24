#include <stdio.h>

int main() {
    char ch;

    printf("%c",ch);
    scanf("%c",&ch);

    if (ch>='a' && ch<'z') {
        // If it's an alphabet, print the next character
        printf("%c\n",ch+1);
    }
     else {
        // If it's not an alphabet, print the character itself
        printf("%c\n",ch);
    }

    return 0;
}