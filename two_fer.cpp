#include "two_fer.h"

namespace two_fer {
using std::string; // Might as well use the using directive when I can or I'll get rusty in using it
    
string two_fer() {
     return "One for you, one for me.";
}
string two_fer(const string name) { // Overloading function and calling const so as to not change name
    return "One for " + name + ", one for me."; // Although cout would require << to combine name with string, here we make a new string using +
}
    

}  // namespace two_fer
