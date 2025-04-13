#include "high_scores.h"

#include <algorithm>

namespace arcade {

std::vector<int> HighScores::list_scores() {
    // Return all scores for this session.
    return HighScores::scores;
}

int HighScores::latest_score() {
    // Return the latest score for this session.
    return HighScores::scores.back();
}

int HighScores::personal_best() {
    // Return the highest score for this session.
    int highest_score{0};
    for (std::vector<int>::iterator it = HighScores::scores.begin(); it != HighScores::scores.end(); ++it)
        {
            if (*it > highest_score)
            {
                highest_score = *it;
            }
        }
    return highest_score;
}

std::vector<int> HighScores::top_three() {
    // Return the top 3 scores for this session in descending order.
    std::vector<int> temp = HighScores::scores;
    std::vector<int> topScores{};
    std::sort(temp.begin(), temp.end());
    int size = temp.size();
    if (size < 4) {topScores = temp;}
    else
    {
        topScores.assign(temp.end()-3, temp.end());
    }
    
    std::reverse(topScores.begin(), topScores.end());
    return topScores;
}

}  // namespace arcade
