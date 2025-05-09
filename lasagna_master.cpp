#include "lasagna_master.h"

namespace lasagna_master {
int preparationTime(std::vector<std::string> layers) {
    return layers.size() * 2;
}
    
int preparationTime(std::vector<std::string> layers, int avg_prep_time) {
    return layers.size() * avg_prep_time;
}

amount quantities(std::vector<std::string> layers) {
    amount* quants = new amount{};
    int num_of_noodles{0};
    int num_of_sauce{0};
    int size = layers.size();
    for (int i = 0; i < size; i++) {
        if (layers[i] == "noodles") {num_of_noodles++;}
        else if (layers[i] == "sauce") {num_of_sauce++;}
        else {continue;}
    }
    quants->noodles = 50 * num_of_noodles;
    quants->sauce = 0.2 * num_of_sauce;

    return *quants;
}

void addSecretIngredient(std::vector<std::string>& myList, const std::vector<std::string> friendsList) {
    int friend_size = friendsList.size();
    std::string secret_ingredient = friendsList[friend_size - 1];
    (myList).pop_back();
    (myList).push_back(secret_ingredient);
}

void addSecretIngredient(std::vector<std::string>& myList, std::string secretIngredient) {
    (myList).pop_back();
    (myList).push_back(secretIngredient);
}

std::vector<double> scaleRecipe(const std::vector<double> quantities, int portions) {
    std::vector<double> new_quantities{};
    int quantities_size = quantities.size();
    for (int i = 0; i < quantities_size; i++) {
        new_quantities.push_back((quantities[i] / 2) * portions);
    }
    return new_quantities;
}


}  // namespace lasagna_master
