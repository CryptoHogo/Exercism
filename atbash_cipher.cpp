#include "atbash_cipher.h"
#include <vector>
#include <string>

namespace atbash_cipher {
    using namespace std;
    vector<char> tebahpla(const string input)
    {
        vector<char> tebahpla{};
        int length = input.length();
        for (int i = length - 1; i >= 0; i--)
            {
                tebahpla.push_back(input[i]);
            }
        return tebahpla;
    }

    string encode(string plaintext)
    {
        string ciphertext{};
        int length = plaintext.length();
        vector<char> tebahpla = atbash_cipher::tebahpla(atbash_cipher::alphabet);
        int factor_of_5_checker{0};
        for (int i = 0; i < length; i++)
            {
                if (factor_of_5_checker % 5 == 0 && factor_of_5_checker > 0)
                {
                    ciphertext += ' ';
                    factor_of_5_checker = 0;
                }
                if (plaintext[i] >= 48 && plaintext[i] <= 57) {ciphertext += static_cast<char>(plaintext[i]);}
                else if (plaintext[i] >= 65 && plaintext[i] <= 90)
                {
                    char current = plaintext[i] + 32;
                    ciphertext += tebahpla[(current - 'a')];
                }
                else if (plaintext[i] >= 97 && plaintext[i] <= 122) {ciphertext += tebahpla[(plaintext[i] - 'a')];}
                
                else {continue;}
                factor_of_5_checker++;
            }
        if (ciphertext[ciphertext.length()-1] == ' ')
        {
            ciphertext.pop_back();
            return ciphertext;
        }
        else {return ciphertext;}
    }

    string decode(string ciphertext)
    {
        string plaintext{};
        int length = ciphertext.length();
        vector<char> alphabet = atbash_cipher::tebahpla(atbash_cipher::alphabet);
        for (int i = 0; i < length; i++)
            {
                if (ciphertext[i] == ' ') {continue;}
                else if (ciphertext[i] >= 48 && ciphertext[i] <= 57)
                {
                    plaintext += static_cast<char>(ciphertext[i]);
                }
                else if (ciphertext[i] >= 97 && ciphertext[i] <= 122) 
                {
                    plaintext += alphabet[(ciphertext[i] - 'a')];
                }
                else {continue;}
            }

        return plaintext;
    }
}  // namespace atbash_cipher
