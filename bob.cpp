#include "bob.h"
#include <string>
#include <algorithm>

namespace bob {
    std::string hey(std::string statement)
    {
        statement.erase(remove_if(statement.begin(), statement.end(), isspace), statement.end());
        int length = statement.length();
        bool has_upper{false};
        bool has_lower{false};
        for (char c : statement)
        {
            if (isalpha(c) && isupper(c)) {has_upper = true;}
            if (isalpha(c) && islower(c)) {has_lower = true;}
        }
        bool is_yelling = (has_upper && !has_lower);
        if (is_yelling && statement[length - 1] == '?') {return "Calm down, I know what I'm doing!";}
        else if (is_yelling) {return "Whoa, chill out!";}
        else if (!is_yelling && statement[length - 1] == '?') {return "Sure.";}
        else if (length == 0) {return "Fine. Be that way!";}
        else {return "Whatever.";}
    }

}  // namespace bob
