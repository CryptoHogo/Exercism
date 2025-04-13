#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    int size = student_scores.size();
    std::vector<int> new_scores{};
    for (int i = 0; i < size; i++)
        {
            new_scores.push_back(static_cast<int>(student_scores[i]));
        }
    return new_scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    int i{0};
    int failed_students{0};
    int size = student_scores.size();
    while (i < size)
        {
            if (student_scores[i] <= 40)
            {
                failed_students++;
            }
            i++;
            
        }
    return failed_students;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    int increment = (highest_score - 40) / 4;
    std::array<int,4> grades {};
    int i{0};
    while (i < 4) 
        {
            grades[i] = (41 + (i * increment));
            i++;
        }
    return grades;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    int size = student_scores.size();
    int i{0};
    std::vector<std::string> ranked{};
    while (i < size)
        {
            ranked.emplace_back(std::to_string(i+1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]));
            i++;
        }
    return ranked;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    int size = student_scores.size();
    int i{0};
    while (i < size) 
        {
            if (student_scores[i] == 100)
            {
                return student_names[i];
            }
            i++;
        }
    return "";
}
