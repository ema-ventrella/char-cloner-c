#include <stdio.h>
#include <string.h>

const int SIZE = 10;

void duplicateChars(char baseString[], char newString[]) {
    int j = 0; // Index for newString
    int length = strlen(baseString);
    for (int i = 0; i < length; i++) {
        newString[j++] = baseString[i];  // Copy the character
        newString[j++] = baseString[i];  // Copy the character again
    }
    newString[j] = '\0';  // Null-terminate the new string
}

int main() {
    char baseString[SIZE];
    char newString[SIZE * 2];
    
    printf("Enter a string: ");
    scanf("%9s", baseString);  // Limit input to 9 characters to avoid overflow
    
    duplicateChars(baseString, newString);
    
    printf("Duplicated string: %s\n", newString);
    return 0;
}
