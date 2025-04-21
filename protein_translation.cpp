#include "protein_translation.h"

namespace protein_translation {
    std::vector<std::string> proteins(std::string codons)
    {
        std::vector<std::string> output{};
        int size = codons.size();
        for (int i = 0; i < size; i += 3)
        {
            std::string codons_sub = codons.substr(i,3);
            if (codons_sub == "AUG") {output.emplace_back("Methionine");}
            else if (codons_sub == "UUU" || codons_sub == "UUC") {output.emplace_back("Phenylalanine");}
            else if (codons_sub == "UUA" || codons_sub == "UUG") {output.emplace_back("Leucine");}
            else if (codons_sub == "UCU" || codons_sub == "UCC" || codons_sub == "UCA" || codons_sub == "UCG") {output.emplace_back("Serine");}
            else if (codons_sub == "UAU" || codons_sub == "UAC") {output.emplace_back("Tyrosine");}
            else if (codons_sub == "UGU" || codons_sub == "UGC") {output.emplace_back("Cysteine");}
            else if (codons_sub == "UGG") {output.emplace_back("Tryptophan");}
            else {return output;}
        }
        return output;  
    }

}  // namespace protein_translation
