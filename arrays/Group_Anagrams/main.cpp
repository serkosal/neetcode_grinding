#include "cpp_helpers/helpers.hpp"

vector<vector<string>> groupAnagrams(const vector<string>& strs) {
    vector<vector<string>> res = {};

    unordered_map<string, vector<string>> groups;

    for (const auto& str : strs) {

        string sorted = str;
        std::sort(sorted.begin(), sorted.end());

        groups[sorted].push_back(str);
    }

    for (const auto& [_, group] : groups)
        res.push_back(group);

    return res;
}


int main() {

    vector<vector<string>> strs = {
        {"act","pots","tops","cat","stop","hat"},
        {"x"},
        {""},
    };

    for (const auto& str: strs) 
        println("{}", groupAnagrams(str));

    return 0;
}