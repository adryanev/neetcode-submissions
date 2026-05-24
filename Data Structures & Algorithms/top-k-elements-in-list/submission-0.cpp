class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> freq;
        for (int n : nums) freq[n]++;

        // min-heap ordered by frequency
        using Pair = std::pair<int, int>;  // {count, num}
        std::priority_queue<Pair, std::vector<Pair>, std::greater<Pair>> minHeap;

        for (auto& [num, count] : freq) {
            minHeap.push({count, num});
            if (minHeap.size() > (size_t)k) minHeap.pop();  // evict least frequent
        }

        std::vector<int> result;
        while (!minHeap.empty()) {
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return result;
    }
};
