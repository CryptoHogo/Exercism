#pragma once
#include <array>
#include <string>

namespace kindergarten_garden {
    enum class Plants {
        clover,
        grass,
        violets,
        radishes,
    };
    std::array<kindergarten_garden::Plants,4> plants(std::string, std::string);
    kindergarten_garden::Plants decoder(char);

}  // namespace kindergarten_garden
