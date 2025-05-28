#include "grains.h"

namespace grains {

// Counts grains of rice on corresponding chess square under concept of doubling for each progressive square
unsigned long long int square(int sq) {
    int i{1};
    unsigned long long int rice{1}; // ULL could also be declared as "auto rice = 1ULL;"
    while (i != sq) {
        rice <<= 1; // bitwise left-shift operator: rice*2, essentially.
        i++;
    }
    return rice;
}

// Returns total grains of rice on entire chess board
unsigned long long int total() {
    unsigned long long int totes{0};
    for (int i = 1; i < 65; i++) {
        totes += grains::square(i); // Could also just use a geometric series here: sum_{k=0}^{63} 2^k = 2^64 - 1
    }
    return totes;
}

}  // namespace grains
