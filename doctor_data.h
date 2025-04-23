// Header file for doctor_data.cpp
#if !defined(DOCTOR_DATA_H)
#define DOCTOR_DATA_H
#include <string>


namespace star_map {
    enum System {
        AlphaCentauri,
        BetaHydri,
        DeltaEridani,
        EpsilonEridani,
        Omicron2Eridani,
        Sol,
    };
}

namespace heaven {
    class Vessel {
        private:
        public:
            std::string name{};
            int generation{};
            star_map::System current_system{};
            int busters{0};
            Vessel(std::string name, int generation);
            Vessel(std::string name, int generation, star_map::System current_system);
            Vessel replicate(std::string);
            void make_buster();
            bool shoot_buster();
    };

    std::string get_older_bob(Vessel name1, Vessel name2);
    bool in_the_same_system(Vessel name1, Vessel name2);
}





#endif
