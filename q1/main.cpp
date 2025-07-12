#include <iostream>
#include <list>
using namespace std;

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
int sum_of_multiples(int start, int end, list<int> factors) {

    // Exit Condition
    if(start >= end) {
        return 0;
    }

    for(auto factor : factors) {
        if(start % factor == 0) {
            // Found, Continue
            return start + sum_of_multiples(start + 1, end, factors);
        }
    }

    // Not Found, Continue
    return sum_of_multiples(start + 1, end, factors);
}

int main() {
    list<int> factors = {3, 5};
    int sum = sum_of_multiples(1, 1000, factors);
    cout << sum << endl;

    return 0;
}