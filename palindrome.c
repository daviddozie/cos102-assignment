
#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number
    original = num;

    // Reverse the number
    while (num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    // Check if the number is a palindrome
    if (original == reversed) {
        printf("It is a Palindrome.\n");
    } else {
        printf("It is not a Palindrome.\n");
    }

    return 0;
}
