#include "luhn.h"
#include <string>
#include <vector>

namespace luhn { 
    bool valid(std::string testNumber) {
    using namespace std;

    int length = testNumber.length();
    int total = 0;
    int digitCount = 0; // To keep track of digit positions

    // Remove leading and trailing spaces by trimming
    size_t start = testNumber.find_first_not_of(" ");
    size_t end = testNumber.find_last_not_of(" ");

    // If only spaces were present, return false
    if (start == string::npos) {
        return false;
    }

    // Extract the string without leading/trailing spaces
    testNumber = testNumber.substr(start, end - start + 1);

    length = testNumber.length();
    // Check if there are fewer than 2 digits after trimming
    if (length < 2) {
        return false;
    }

    // Iterate through the string from the end (right to left)
    for (int i = length - 1; i >= 0; i--) {
        char currentChar = testNumber[i];

        // Skip spaces (although there shouldn't be any now)
        if (currentChar == ' ') {
            continue;
        }

        // Ensure the character is a digit
        if (currentChar < '0' || currentChar > '9') {
            return false; // Non-digit character found
        }

        int digit = currentChar - '0';

        // Double every second digit starting from the right (after skipping spaces)
        if (digitCount % 2 == 1) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9; // Equivalent to digit = (digit * 2) % 9
            }
        }

        total += digit;
        digitCount++;
    }

    // Return true if the total modulo 10 is zero
    return (total % 10 == 0);
}
}  // namespace luhn
