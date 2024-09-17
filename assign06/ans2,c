#include <stdio.h>
#include <ctype.h>

// a. Simulate strlen
size_t my_strlen(const char* str) {
    size_t length = 0;
    while (*str++) {
        length++;
    }
    return length;
}

// b. Simulate strcpy
char* my_strcpy(char *dest, const char *src) {
    char *original_dest = dest;
    while ((*dest++ = *src++)) {
        // Copying characters
    }
    return original_dest;
}

// c. Simulate strcat
char* my_strcat(char *dest, const char *src) {
    char *original_dest = dest;
    while (*dest) {
        dest++;
    }
    while ((*dest++ = *src++)) {
        // Appending characters
    }
    return original_dest;
}

// d. Simulate strcmp
int my_strcmp(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char*)str1 - *(unsigned char*)str2;
}

// e. Simulate stricmp (case-insensitive comparison)
int my_stricmp(const char *str1, const char *str2) {
    while (tolower((unsigned char)*str1) == tolower((unsigned char)*str2) && *str1 && *str2) {
        str1++;
        str2++;
    }
    return tolower((unsigned char)*str1) - tolower((unsigned char)*str2);
}

// f. Simulate strrev
char* my_strrev(char* str) {
    char *start = str;
    char *end = str;
    char temp;
    
    while (*end) {
        end++;
    }
    end--;
    
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    return str;
}

// g. Simulate strchr
char* my_strchr(const char *str, int ch) {
    while (*str) {
        if (*str == (char)ch) {
            return (char*)str;
        }
        str++;
    }
    return NULL;
}

// h. Simulate strstr
char* my_strstr(const char *str, const char *substr) {
    if (*substr == '\0') {
        return (char*)str;
    }
    
    while (*str) {
        const char *start = str;
        const char *pattern = substr;
        
        while (*str && *pattern && *str == *pattern) {
            str++;
            pattern++;
        }
        
        if (!*pattern) {
            return (char*)start;
        }
        
        str = start + 1;
    }
    
    return NULL;
}

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50] = "Hello, World!";
    
    printf("strlen: %zu\n", my_strlen(str1));
    
    my_strcpy(str2, "Everyone");
    printf("strcpy: %s\n", str2);
    
    my_strcat(str1, " World");
    printf("strcat: %s\n", str1);
    
    printf("strcmp: %d\n", my_strcmp("apple", "apple"));
    printf("strcmp: %d\n", my_strcmp("apple", "banana"));
    
    printf("stricmp: %d\n", my_stricmp("Hello", "hello"));
    printf("stricmp: %d\n", my_stricmp("Hello", "World"));
    
    char rev[] = "Reverse";
    printf("strrev: %s\n", my_strrev(rev));
    
    printf("strchr: %s\n", my_strchr("Find me", 'm'));
    
    printf("strstr: %s\n", my_strstr("Find the needle in the haystack", "needle"));
    
    return 0;
}

