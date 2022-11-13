#include "palindrome.h"

#include <stdbool.h>
#include <stdlib.h>

int
palindrom_check(const char *string, const uint32_t string_len)
{
	if (string == NULL) {
		return -1;
	}

	bool is_palindrome = true;

	for (uint32_t i = 0; i < string_len / 2; i++) {
        if (string[i] != string[string_len - 1 - i]) {
            is_palindrome = false;
            break;
        }
    }

	return is_palindrome ? 0 : -2;
}
