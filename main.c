#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include "palindrome/palindrome.h"

#define INPUT_BUFFER_SIZE 1024

static char input_buffer[INPUT_BUFFER_SIZE];

int main(void) {
    printf("Type your word: ");
    if (fgets(input_buffer, sizeof(input_buffer), stdin) == NULL) {
        printf("Error on readig string\r\n");
        return -1;
    }

    uint32_t len = strlen(input_buffer) - 1;

    int result = palindrom_check(input_buffer, len);

    printf("%s\r\n", result == 0 ? "YES" : "NO");

    return 0;
}
