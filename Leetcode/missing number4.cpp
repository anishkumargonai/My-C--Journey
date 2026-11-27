class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int n = nums.size();
    vector<bool>flag(n+1,false);
    for(int i=0;i<n;i++){
        flag[nums[i]]=true;
    }
    for (int i=0;i<=n;i++){
        if(flag[i]== false ) return i;
    }
    return n;
    }
};
