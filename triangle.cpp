#include "triangle.h"
#include <stdexcept>
	

namespace triangle {
// triangle_equality checks the triangle inequality. Could be rewritten as is_a_triangle. Could incorporate checking for (0,0,0) and negative values here.
bool triangle_equality(float a, float b, float c) {
    if (a + b >= c && b + c >= a && a + c >= b){return true;}
    return false;
}

flavor kind(float a, float b, float c) {
    if (!triangle_equality(a, b, c)) {throw std::domain_error("Not a triangle.");} // std::domain_error required by exercise. Comes from <stdexcept>.
    if (a == 0 && b == 0 && c == 0) {throw std::domain_error("Is a point.");} // std::domain_error requires an error message.
    if (a == b && b == c) {return flavor::equilateral;}
    else if (a == b || a == c || b == c) {return flavor::isosceles;}
    return flavor::scalene; // No need to consider other cases as all possible triangles and non-triangles will have been covered by now.
}

}  // namespace triangle
