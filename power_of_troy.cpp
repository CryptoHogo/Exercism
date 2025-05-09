#include "power_of_troy.h"

namespace troy {
void give_new_artifact(human& human_name, std::string artifact_name) {
    human_name.possession = std::make_unique<artifact>(artifact_name); // make_unique creates the artifact pointer and makes it unique
}

// Here, we want to point grab a reference to unique_ptr of type artifact. We are assuming the inputs will be human_name.possession, which is this type.
void exchange_artifacts(std::unique_ptr<artifact>& artifact1, std::unique_ptr<artifact>& artifact2) {
    std::swap(artifact1, artifact2);
}

void manifest_power(human& human_name, std::string power_name) {
    human_name.own_power = std::make_shared<power>(power_name); // make_shared creates the power pointer and makes it shared
}

void use_power(human& caster, human& target) {
    target.influenced_by = caster.own_power; // use . notation because we are called struct parts
}

int power_intensity(human& human_name) {
    if (human_name.own_power == nullptr) {return 0;}
    return human_name.own_power.use_count(); // smart use of the use_count() member function that comes with shared_ptrs
}

    
}  // namespace troy
