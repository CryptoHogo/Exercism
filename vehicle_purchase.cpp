#include "vehicle_purchase.h"
#include <iostream>

std::string lexico(std::string option1, std::string option2);

namespace vehicle_purchase {

// needs_license determines whether a license is needed to drive a type of
// vehicle. Only "car" and "truck" require a license.
bool needs_license(std::string kind) {
    // TODO: Return true if you need a license for that kind of vehicle.
    if (kind == "car" || kind == "truck") {return true;}
    else {return false;}
}

// choose_vehicle recommends a vehicle for selection. It always recommends the
// vehicle that comes first in lexicographical order.
std::string choose_vehicle(std::string option1, std::string option2) {
    // TODO: Return the final decision in a sentence.
    std::string choice = lexico(option1, option2);
    return choice + " is clearly the better choice.";
}

// calculate_resell_price calculates how much a vehicle can resell for at a
// certain age.
double calculate_resell_price(double original_price, double age) {
    // TODO: Return the age-corrected resell price.
    double current_price{};
    if (age < 3) {
        current_price = original_price * 0.8;
    }
    else if (age >= 10) {
        current_price = original_price * 0.5;
    }
    else {
        current_price = original_price * 0.7;
    }
    
    return current_price;
}

}  // namespace vehicle_purchase

std::string lexico(std::string option1, std::string option2) 
{
    int length1 = option1.length();
    int length2 = option2.length();
    int min_length = std::min(length1, length2);

    int i = 0;
    while(option1[i] == option2[i] && i < min_length) {
        i++;
    }

    if (option1[i] < option2[i]) {return option1;}
    else {return option2;}
}
