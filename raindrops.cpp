#include "raindrops.h"
#include <string>

namespace raindrops {
    using namespace std;
    
    string convert(int input)
    {
        string final_sound{};
        const int number = input;
        if (number % 3 == 0 || number % 5 == 0 || number % 7 == 0)
        {
            if (number % 3 == 0){final_sound += "Pling";}
            if (number % 5 == 0){final_sound += "Plang";}
            if (number % 7 == 0){final_sound += "Plong";}
        }
        else {
            final_sound = to_string(number);
        }
        return final_sound;
    }

}  // namespace raindrops
