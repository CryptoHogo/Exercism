#include "kindergarten_garden.h"
#include <vector>
#include <stdexcept>

namespace kindergarten_garden {
    std::array<kindergarten_garden::Plants,4> plants(std::string encoding, std::string name)
    {
        char position = name.front() - 65;
        std::array<kindergarten_garden::Plants, 4> namesOfPlants{};
        int i{0};
        for (std::string::iterator it = (encoding.begin() + 2*position); it != (encoding.begin() + 2*position + 2); ++it)
            {
                namesOfPlants[i] = kindergarten_garden::decoder(*it);
                i++;
            }
        size_t size = encoding.size();
        size /= 2;
        size += 1;
        for (std::string::iterator it = (encoding.begin() + 2*position + size); it != (encoding.begin() + 2*position + 2 + size); ++it)
            {
                namesOfPlants[i] = kindergarten_garden::decoder(*it);
                i++;
            }
        return namesOfPlants;
    }

    kindergarten_garden::Plants decoder(char c)
    {
        switch (c) {
            case 'G':
                return kindergarten_garden::Plants::grass;
            case 'V':
                return kindergarten_garden::Plants::violets;
            case 'C':
                return kindergarten_garden::Plants::clover;
            case 'R':
                return kindergarten_garden::Plants::radishes;
        }
        throw std::invalid_argument("Invalid plant character");
    }
    

}  // namespace kindergarten_garden
