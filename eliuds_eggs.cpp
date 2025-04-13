#include "eliuds_eggs.h"

namespace chicken_coop {
    int positions_to_quantity(int num)
    {
        int temp = num;
        int total{0};
        while (temp > 0)
            {
                if (temp % 2 == 1) {total++;}
                temp /= 2;
            }
        return total;   
    }
}  // namespace chicken_coop
