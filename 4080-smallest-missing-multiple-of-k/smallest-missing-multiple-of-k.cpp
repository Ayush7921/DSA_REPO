class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int> mp ;
        for(int x : nums){
            mp[x]=1;
        }
        int m = *max_element(nums.begin(),nums.end());
        int i;
        for(i =1 ; i*k<=m ; i++){
            if(!mp.contains(i*k)){
                return i*k;
            }
        }
        return i*k;
    }
};