#include "hexadecimal.h"
#include <string>
#include <cmath>

namespace hexadecimal {
    int convert(std::string input)
    {
        int length = input.length();
        int total{0};

        for (int i = length - 1; i >= 0; i--)
            {
                if (input[i] >= '0' && input[i] <= '9')
                {
                    total += pow(16, length - (i + 1)) * (input[i] - '0');
                }
                else if (input[i] >= 'a' && input[i] <= 'f')
                {
                    total += pow(16, length - (i + 1)) * ((input[i] - 'a') + 10);
                }
                else {return 0;}
            }
        return total;
    }

}  // namespace hexadecimal
