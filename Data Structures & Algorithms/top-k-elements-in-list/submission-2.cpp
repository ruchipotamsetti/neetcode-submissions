class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>freq;
        for(int i: nums){
            freq[i]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
        for(auto i:freq){
            pq.push({i.second, i.first});
            if(pq.size()>k)
                pq.pop();
        }

        vector<int>results;
        while(k!=0){
            pair p = pq.top();
            pq.pop();
            results.push_back(p.second);
            k--;
        }

        return results;
    }
};
