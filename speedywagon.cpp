#include "speedywagon.h"

namespace speedywagon {

// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}
    
// Enter your code below:
bool connection_check(speedywagon::pillar_men_sensor* ptr){
    return ptr != nullptr;
}

int activity_counter(speedywagon::pillar_men_sensor* sensor, int number) {
    int total{0};
    for (int i = 0; i < number; ++i) {
        total += (sensor + i)->activity;
    }
    return total;
}

bool alarm_control(speedywagon::pillar_men_sensor* ptr){
    if (!connection_check(ptr)) {return false;}
    else {
        int size = (ptr->data).size();
        if (activity_counter(ptr, size) > 0) {return true;}
        else {return false;}
    }
}

bool uv_alarm(speedywagon::pillar_men_sensor* sensor){
    if (!connection_check(sensor)) {return false;}
    else {
        if (uv_light_heuristic(&sensor->data) > sensor->activity) {return true;}
        else {return false;}
    }
}



}  // namespace speedywagon
