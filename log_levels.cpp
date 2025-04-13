#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    int divider = line.find(":");
    return line.substr(divider + 2);
}

std::string log_level(std::string line) {
    // return the log level
    int divider = line.find(":");
    return line.substr(1,divider - 2);
}

std::string reformat(std::string line) {
    // return the reformatted message
    std::string output = message(line) + " (" + log_level(line) + ")";
    return output;
}
}  // namespace log_line
