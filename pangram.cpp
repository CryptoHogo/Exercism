#include "pangram.h"
#include <cctype>

namespace pangram {

bool is_pangram(std::string sentence) {
    for (char a = 'a'; a <= 'z'; a++) { // Iterate through letters as they are essentially just numbers, starting at 97, ending at 122.
        if (sentence.find(a) == std::string::npos && sentence.find(toupper(a)) == std::string::npos) {return false;} // std::string::find returns std::string::npos if a is not found.
        continue;
    }
    return true;
}

}  // namespace pangram
