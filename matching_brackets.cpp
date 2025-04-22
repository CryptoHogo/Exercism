#include "matching_brackets.h"
#include <algorithm>

namespace matching_brackets {
    bool check(std::string sentence)
    {
        std::string brackets{};

        for (char ch: sentence)
            {
                if (ch == '{' || ch == '(' || ch == '[')
                {
                    brackets.push_back(ch);
                }
                else if (ch == '}' || ch == ')' || ch == ']')
                {
                    if (brackets.empty()) {return false;}

                    char last = brackets.back();
                    if ((ch == '}' && last != '{') ||
                    (ch == ')' && last != '(') ||
                    (ch == ']' && last != '['))
                    {
                        return false;
                    }
                    brackets.pop_back();
                }
            }

        return brackets.empty();
    }

}  // namespace matching_brackets
