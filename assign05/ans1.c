#include <stdio.h>

int main() {
    float marks[5]; // Array to hold marks for 5 subjects
    float total = 0.0;
    float average;
    int i;

    // Prompt the user to enter marks for 5 subjects
    printf("Enter marks for 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);

        // Validate input
        if (marks[i] < 0) {
            printf("Marks cannot be negative. Please enter a valid mark.\n");
            return 1;
        }
        
        total += marks[i];
    }

    // Calculate average
    average = total / 5;

    // Display results
    printf("Total marks: %.2f\n", total);
    printf("Average marks: %.2f\n", average);

    return 0;
}

