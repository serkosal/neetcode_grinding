#include "cpp_helpers/helpers.hpp"

const string OPENINGS = "([{";
const string CLOSINGS = ")]}";
const unordered_map<char, char> BRACKETS_MAP = {
    {')', '('},
    {']', '['},
    {'}', '{'}
};

bool isValid(const string& s) {
    stack<char> openings;
    
    for (char ch : s) {
        if (OPENINGS.contains(ch)) 
            openings.push(ch);
        
        if (CLOSINGS.contains(ch)) {
            if (openings.empty() 
             || openings.top() != BRACKETS_MAP.at(ch)
            )   return false;
            
            openings.pop();
        }
    }

    return openings.empty();
}

int main() {

    for (const auto& str : vector<string> {
        // "([{}])",
        // "[(])",
        // "([{}]",
        "]"
    }) println("{}", isValid(str));

    return 0;
}