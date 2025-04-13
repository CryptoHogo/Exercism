#include "darts.h"
#include <cmath>

namespace darts {
    float distance(float x, float y)
    {
        float distance_to_center{};
        distance_to_center = sqrt(x*x + y*y);

        return distance_to_center;
    }

    int score(float x, float y)
    {
        float distance_to_center = darts::distance(x, y);
        int score{};
        if (distance_to_center <= 1.0f) 
        {
            score = 10;
        }
        else if (distance_to_center > 1.0f && distance_to_center <= 5.0f)
        {
            score = 5;
        }
        else if (distance_to_center > 5.0f && distance_to_center <= 10.0f)
        {
            score = 1;
        }
        else {score = 0;}

        return score;
    }
}  // namespace darts
