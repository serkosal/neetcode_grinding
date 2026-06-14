#include "cpp_helpers/helpers.hpp"

bool isPalindrome(const string& s) {
    for  (
        auto l = s.begin(), r = s.end() - 1; 
        l < r;
        ++l, --r
    ) {
        while (l < s.end()   && !isalnum(*l)) ++l;
        while (r > s.begin() && !isalnum(*r) ) --r;
        if (l >= r) return true;
        if (tolower(*l) != tolower(*r)) return false;
    }

    return true; 
}

int main() {

    println("{}", isPalindrome("Was it a car or a cat I saw?"));

    return 0;
}