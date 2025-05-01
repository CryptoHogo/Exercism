#pragma once

#include <string>
#include <vector>

namespace speedywagon {

struct pillar_men_sensor {
    int activity{};
    std::string location{};
    std::vector<int> data{};
};

int uv_light_heuristic(std::vector<int>* data_array);
bool connection_check(pillar_men_sensor*);
int activity_counter(speedywagon::pillar_men_sensor*, int );
bool alarm_control(speedywagon::pillar_men_sensor*);
bool uv_alarm(speedywagon::pillar_men_sensor*);


}  // namespace speedywagon
