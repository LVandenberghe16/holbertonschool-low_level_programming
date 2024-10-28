#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to convert.
 *
 * Return: The converted integer, or 0 if there are no numbers.
 */
int _atoi(char *s)
{
    int sign = 1; // Variable to hold the sign of the number
    unsigned int num = 0; // Variable to accumulate the number
    int i = 0; // Index for traversing the string
    int found_digit = 0; // Flag to check if we've found any digits

    // Skip whitespace characters
    while (s[i] == ' ')
    {
        i++;
    }

    // Check for sign characters
    while (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign *= -1; // Change the sign if a '-' is found
        i++;
    }

    // Convert the number part of the string
    while (s[i] >= '0' && s[i] <= '9')
    {
        found_digit = 1; // Mark that we've found a digit
        // Prevent integer overflow
        if (num > (2147483647 / 10) || (num == (2147483647 / 10) && (s[i] - '0') > 7))
        {
            return (sign == 1) ? 2147483647 : -2147483648; // Handle overflow case
        }
        num = num * 10 + (s[i] - '0'); // Build the number
        i++;
    }

    // If no digits were found, return 0
    if (!found_digit)
    {
        return 0;
    }

    return (sign == -1) ? -num : num; // Apply the sign to the result
}
