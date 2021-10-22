class Solution {
public:
    string frequencySort(string s) {
        map<char,int> m;
        vector<pair<int,char>> m2;
        
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        
        for(auto it=m.begin();it!=m.end();it++){
            // cout<<it->second<<" ";
            m2.push_back({it->second,it->first});
        }
        
        sort(m2.begin(),m2.end(),greater<pair<int,char>>());
        string ans;
        
        for(int i=0;i<m2.size();i++){
            // cout<<m2[i].second<<" ";
            int n=m2[i].first;
            for(int j=0;j<n;j++){
                ans+=m2[i].second;
            }
        }
        
        return ans;
        
    }
};