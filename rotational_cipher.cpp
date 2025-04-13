#include "rotational_cipher.h"

namespace rotational_cipher {
    std::string rotate(std::string plaintext, int key)
    {
        using namespace std;
        string ciphertext{};

        for (char c : plaintext)
            {
                if (isupper(c))
                {
                    ciphertext += 'A' + (c - 'A' + key) % 26;
                }
                else if (islower(c))
                {
                    ciphertext += 'a' + (c - 'a' + key) % 26;
                }
                else
                {
                    ciphertext += c;
                }
            }
        return ciphertext;
    }

}  // namespace rotational_cipher
