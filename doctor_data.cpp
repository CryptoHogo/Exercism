#include "doctor_data.h"

heaven::Vessel::Vessel(std::string name, int generation)
    : name{name}, generation{generation}, current_system{star_map::System::Sol} {}

heaven::Vessel::Vessel(std::string name, int generation, star_map::System current_system)
    : name{name}, generation{generation}, current_system{current_system} {}

heaven::Vessel heaven::Vessel::replicate(std::string new_name) {
    return Vessel(new_name, generation + 1, current_system);
    }

void heaven::Vessel::make_buster() {
    busters++;
    }

bool heaven::Vessel::shoot_buster() {
    if (busters > 0) {busters--; return true;}
    else {return false;}
    }

std::string heaven::get_older_bob(heaven::Vessel name1, heaven::Vessel name2) {
    if (name1.generation <= name2.generation) {return name1.name;}
    else {return name2.name;}
}

bool heaven::in_the_same_system(heaven::Vessel name1, heaven::Vessel name2) {
    if (name1.current_system == name2.current_system) {return true;}
    else {return false;}
}
