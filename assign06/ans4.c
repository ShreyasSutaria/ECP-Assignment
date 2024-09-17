#include <stdio.h>
#include <stdbool.h>

bool is_char_in_string(const char *str, char ch) {
    while (*str) {
        if (*str == ch) {
            return true;
        }
        str++;
    }
    return false;
}

void remove_chars(const char *string1, char *string2) {
    char *src = string2;
    char *dst = string2;
    
    while (*src) {
        if (!is_char_in_string(string1, *src)) {
            *dst++ = *src;
        }
        src++;
    }
    *dst = '\0';
}

int main() {
    char string1[] = "aeiou";
    char string2[] = "Hello, World!";
    
    remove_chars(string1, string2);
    printf("Resulting string: %s\n", string2);
    
    return 0;
}

