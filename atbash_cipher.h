#if !defined(ATBASH_CIPHER_H)
#define ATBASH_CIPHER_H
#include <string>
#include <vector>

namespace atbash_cipher {
    using namespace std;
    const string alphabet("abcdefghijklmnopqrstuvwxyz");
    const string tebahpla_string("zyxwvutsrqponmlkjihgfedcba");
//    const vector<char> alphabet_vect('a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z');
//    vector<char> tebahpla(const vector<char> input);
    vector<char> tebahpla(const string input);
    string encode(string plaintext);
    string decode(string cipher);

}  // namespace atbash_cipher

#endif  // ATBASH_CIPHER_H
