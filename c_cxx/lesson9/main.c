#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char array[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
    printf("Is %c upper? %d\n", array[0], isupper(array[0]));
    printf("array strlen: %d\n", strlen(array));
    printf("array: %s\n", array);

    char* number_str = "123";
    int int_number = atoi(number_str);
    printf("number_str: %s, int_number: %d\n", number_str, int_number);
}