#include <stdio.h>
#include <string.h> 

int main() {
    char source[] = "Hello, World!";
    char destination[50]; 
    strcpy(destination, source);
    
    printf("Source string: %s\n", source);
    printf("Destination string: %s\n", destination);
    
    return 0;
}

