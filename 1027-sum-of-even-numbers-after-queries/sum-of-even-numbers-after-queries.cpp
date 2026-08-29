class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& q) {
        int se = 0 ;
        for(int x : nums){
            se += ((x%2)==0)? x : 0 ;
        }

        vector<int> result;

        for(int i = 0 ; i< q.size(); i++){
            int val = q[i][0];
            int idx = q[i][1];
            int n = nums[idx];

            if(n%2 == 0){
                if(val%2 == 0){
                    se= se + val;
                    result.push_back(se);
                }else{
                    se = se-n;
                    result.push_back(se);
                }

                nums[idx]+=val;
            }else{
                if(val%2 != 0){
                    se = se+n+val;
                    result.push_back(se);
                }else{
                    result.push_back(se);
                }
                nums[idx]+=val;
            }
        }

        return result;
    }
};