class Solution {
public:
    vector<int> findOriginalArray(vector<int>& a) {
        sort(a.begin(), a.end());
        vector<int> ret;
        list<int> q;
        for (int x : a) {
            if (!q.empty() && x == q.front()) {
                q.pop_front();
            } else {
                ret.push_back(x);
                q.push_back(x * 2);
            }
        }
        if (q.size() != 0) {
            return {};
        }
        return ret;
    }
};