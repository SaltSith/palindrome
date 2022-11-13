#include "../../acutest.h"

#include "palindrome/palindrome.h"

void test_palindrome_1(void) {
    const char *palindrom = "deed kayak deed";
    uint32_t len = strlen(palindrom);

    int result = palindrom_check(palindrom, len);

    TEST_ASSERT(result == 0);
}

void test_palindrome_2(void) {
    const char *palindrom = "deed";
    uint32_t len = strlen(palindrom);

    int result = palindrom_check(palindrom, len);

    TEST_ASSERT(result == 0);
}

void test_palindrome_3(void) {
    const char *palindrom = "ded";
    uint32_t len = strlen(palindrom);

    int result = palindrom_check(palindrom, len);

    TEST_ASSERT(result == 0);
}

void test_palindrome_4(void) {
    const char *palindrom = "d";
    uint32_t len = strlen(palindrom);

    int result = palindrom_check(palindrom, len);

    TEST_ASSERT(result == 0);
}

void test_not_palindrome(void) {
    const char *palindrom = "ala ko ala";
    uint32_t len = strlen(palindrom);
    
    int result = palindrom_check(palindrom, len);

    TEST_ASSERT(result == -2);
}

void test_palindrome_null_ptr(void) {
    int result = palindrom_check(NULL, 5);

    TEST_ASSERT(result == -1);
}

TEST_LIST = {
	{"test_palindrome_1", test_palindrome_1},
    {"test_palindrome_2", test_palindrome_2},
    {"test_palindrome_3", test_palindrome_3},
    {"test_palindrome_4", test_palindrome_4},
	{"test_not_palindrome", test_not_palindrome},
	{"test_palindrome_null_ptr", test_palindrome_null_ptr},

	{0} /* must be terminated with 0 */
};
