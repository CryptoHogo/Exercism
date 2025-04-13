#include "armstrong_numbers.h"
#include <string>
#include <cmath>

namespace armstrong_numbers {
    bool is_armstrong_number(int num)
    {
        int length = std::to_string(num).length();
        int power_sum{0};
        int temp_sum{0};
        int temp_num{0};
        for (int i = 0; i < length; i++)
            {
                int greater = pow(10,i+1);
                int mid = pow(10,i);
                temp_num = (num % greater) - temp_sum;
                temp_sum += temp_num;
                int temp = temp_num / mid;
                power_sum += pow(temp, length);
            }
        if (power_sum == num) {return true;}
        else {return false;}
    }
}  // namespace armstrong_numbers
