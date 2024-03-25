#include <stdio.h>
#include <string.h>
#include <ctype.h>

void formatString(char* str) {
    char* result = str;
    while((result = strchr(result, '.')) != NULL) {
        ++result;
        if (!isupper(result[0])) {
            result[0] = toupper(result[0]);
        }
    }
}

int main() {
    char str[256];
    strcpy(str, "This is c Code.how are u doin.hello world");

    printf("Before formatString: %s\n", str);
    formatString(str);
    printf("After formatString: %s\n", str);
    return 0;
}