
// Shows a name and your respective number in ASCII list

#include <stdio.h>

int main() {
    setbuf(stdout, NULL);

    char name[50];

    printf("Type Your Name -> ");
    fgets(name, sizeof(name), stdin); // Use fgets for safe input

    // Loop through each character in the name array
    for (int j = 0; j < sizeof(name); j++) {
        // Check if the null character is encountered
        if (name[j] == '\0') {
            printf("Null character '\\0' detected at position %d\n", j);
            break; // Stop the loop as we've reached the end of the string
        }
        // Skip newline character if present
        if (name[j] == '\n') {
            continue;
        }
        // Print the character and its ASCII value
        printf("The letter -> %c of your name represents the number -> %d\n", name[j], name[j]);
    }

    return 0;
}


