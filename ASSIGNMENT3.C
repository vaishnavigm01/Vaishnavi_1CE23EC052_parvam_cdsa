#include <stdio.h>
#include <ctype.h>  

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    
    if (isalpha(ch)) {
        
        if (islower(ch)) {
            printf("Uppercase: %c\n", toupper(ch));
        }
        
        else {
            printf("Lowercase: %c\n", tolower(ch));
        }
    } else {
        
        printf("Invalid input\n");
    }
     getchar();
    getchar();
    return 0;
}