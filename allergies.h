#if !defined(ALLERGIES_H)
#define ALLERGIES_H
#include <string>
#include <unordered_set>
#include <vector>

namespace allergies {
    class allergy_test {
    public:
        allergy_test(int score);
        bool is_allergic_to(std::string allergen);
        std::unordered_set<std::string> get_allergies();

    private:
        void create_allergy_list();
        std::unordered_set<std::string> list_of_allergies;
        unsigned allergy_score{};
        const std::vector<std::string> list_of_allergens {
            "eggs", "peanuts", "shellfish", "strawberries",
            "tomatoes", "chocolate", "pollen", "cats"
        };
    };
} // namespace allergies

#endif  // ALLERGIES_H
