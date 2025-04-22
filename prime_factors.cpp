#include "prime_factors.h"

namespace prime_factors {
    std::vector<long long> of(long long constant)
    {
        std::vector<long long> factors{};
        long long n = constant;
        int k{2};
        while (n != 1)
            {
                if (n % k == 0)
                {
                    factors.emplace_back(k);
                    n /= k;
                }
                else
                {
                    k++;
                }
            }
        return factors;
    }

}  // namespace prime_factors
