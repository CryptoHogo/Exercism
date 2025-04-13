#include "trinary.h"
#include <string>
#include <cmath>

namespace trinary {
    using namespace std;
    
    bool is_trinary(string input) 
    {
        int length = input.length();
        int flag = 0;

        for (int i = 0; i < length;)
            {
            if (input[i] == '0' || input[i] == '1' || input[i] == '2' ) {i++;}
            else {flag++, i++;}
            }
        if (flag > 0) {return false;}
        else {return true;}
        
    }
    
    int to_decimal(string input) 
    {
        if (is_trinary(input) == 0) {return 0;}
        else
        {
            int total{0};
            int i{0};
            int length = input.length();
            int j = length-1;
            while (i < length)
                {
                    total += (input[i] - '0') * pow(3, j);
                    j--;
                    i++;
                }
            return total;
        }
    }

}  // namespace trinary
