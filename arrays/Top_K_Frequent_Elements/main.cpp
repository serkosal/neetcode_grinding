#include "cpp_helpers/helpers.hpp"

vector<int> topKFrequent(const vector<int>& nums, int k) {
    vector<int> res = {}; res.reserve(k);
    map<int, set<int>, std::greater<int>> nums_by_freq;

    // O(n * log n)
    map<int, int> num_to_freq;
    for (int num: nums) {
        int freq = ++num_to_freq[num];
        if (freq > 1)
            nums_by_freq[freq - 1].erase(num);
        nums_by_freq[freq].insert(num);
    }

    int i = 0;
    for (const auto& [freq, s] : nums_by_freq) {
        for (auto num: s ) {
            res.push_back(num);
            if (++i >= k) return res;
        }
    }

    return res;
}

int main() {

    vector<pair<vector<int>, int>> vecs = {
        {{1,2,2,3,3,3}, 2},
        {{7, 7}, 1},
        {{1, 2, 3, 4}, 5},
        {{}, 2}
    };

    for (const auto& [vec, k]: vecs) 
        println("{}", topKFrequent(vec, k));

    return 0;
}