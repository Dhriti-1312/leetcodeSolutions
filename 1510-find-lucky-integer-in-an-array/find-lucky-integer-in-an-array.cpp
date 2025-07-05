class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ans = -1;
        unordered_map<int,int> m;
        
        for(int i : arr){
            m[i]++;
        }
        for(auto const& i : m){
            if(i.first==i.second){
                ans = max(ans,i.first);
            }
        }
        return ans;
    }

};