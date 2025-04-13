#include "allergies.h"

namespace allergies {

    allergy_test::allergy_test(int score) : allergy_score(score)
    {
        create_allergy_list();
    }

    bool allergy_test::is_allergic_to(std::string allergen)
    {
        return list_of_allergies.find(allergen) != list_of_allergies.end();
    }

    std::unordered_set<std::string> allergy_test::get_allergies()
    {
        return list_of_allergies;
    }

    void allergy_test::create_allergy_list()
    {
        for (size_t i = 0; i < list_of_allergens.size(); ++i)
        {
            if (allergy_score & (1 << i))
            {
                list_of_allergies.emplace(list_of_allergens[i]);
            }
        }
    }

} // namespace allergies
