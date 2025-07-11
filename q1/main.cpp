#include <stdio.h>

/**
 ** sum_of_multiples
 *: Finds the sum of a series of natural numbers with a common factor
 * 
 *  @param start The starting value of the search (inclusive)
 *  @param end The ending value of the search (exclusive)
 *  @param factor The common factor to look for
 * 
 *  @returns The sum of the natural numbers with the given common factor
 */
int sum_of_multiples(int start, int end, int factor) {

    // Exit Condition
    if(start >= end) {
        return 0;
    }

    if(start % factor == 0) {
        // Found, Continue
        return start + sum_of_multiples(start + 1, end, factor);
    } else {
        // Not Found, Continue
        return sum_of_multiples(start + 1, end, factor);
    }
}

int main() {
    int sum_three = sum_of_multiples(1, 10, 3);
    int sum_five = sum_of_multiples(1, 10, 5);
    int total_sum = sum_three + sum_five;
    printf("%d\n", total_sum);

    return 0;
}