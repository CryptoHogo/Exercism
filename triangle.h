#pragma once

namespace triangle {

enum class flavor {
    equilateral,
    isosceles,
    scalene
};

bool triangle_equality(float, float, float);
flavor kind(float, float, float);


}  // namespace triangle
