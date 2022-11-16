class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans,temp=nums;
        int num,index1,index2;
        for(int i = 0; i < nums.size(); i++){
            auto it=find(temp.begin()+i+1, temp.end(), target-nums[i]);
                if(it != temp.end()){
                    num = *it;
                    index1=i;
                    index2=distance(temp.begin(),it);
                    break;
                }
        }
        ans.push_back(index1);
        ans.push_back(index2);
        return ans;
    }
};