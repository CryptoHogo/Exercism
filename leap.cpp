#include "leap.h"

namespace leap {

    bool is_leap_year(int year){
        bool is_leap_year_bool{};

        if (year % 4 == 0)
        {
            if (year % 100 == 0)
            {
                if (year % 400 == 0){is_leap_year_bool = 1;}
                else if (year % 400 != 0) {is_leap_year_bool = 0;}
            }
            else {is_leap_year_bool = 1;}   
        }
        else {is_leap_year_bool = 0;}
        
        return is_leap_year_bool;
    }
// TODO: add your solution here

}  // namespace leap
