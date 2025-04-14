#include "sieve.h"
#include <algorithm>

namespace sieve {
    std::vector<int> primes(int number)
    {
        std::vector<int> primes{};
        std::vector<int> composites{};
        // make prime number candidate vector:
        for (int i = 2; i < number + 1; i++) {primes.emplace_back(i);}
        // iterates over the list and both checks if number in primes
        // is in the composite list (meaning not prime and then erasing
        // it) or adding multiples of the prime to the composite list.
        std::vector<int> result{};
        for (auto it = primes.begin(); it != primes.end(); ++it)
            {
                if (std::find(composites.begin(), composites.end(), *it) != composites.end()) {continue;}

                result.emplace_back(*it);  // It's a prime
                
                for (int j = 2; (*it) * j <= number; ++j) 
                {
                    composites.emplace_back((*it) * j);
                }
            }
        
        return result;
    }

}  // namespace sieve
