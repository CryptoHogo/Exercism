#if !defined(DARTS_H)
#define DARTS_H

namespace darts {
    // distance(x,y) takes x and y and returns distance to center
    float distance(float x, float y);
    // score(x,y) takes x and y and calculates score. Uses distance(x,y)
    int score(float x, float y);
    
}  // namespace darts

#endif  // DARTS_H
