//https://www.youtube.com/watch?v=u3A64HQq_Dw
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n = nums.size();
        
        int l = 0, r = nums.size() - 1;
        
        vector<int> res(n);
        
        int ind = n - 1;
        
        while(l <= r){
            
            if(abs(nums[l]) > abs(nums[r])){
                res[ind] = nums[l]*nums[l];
                ind--;
                l++;
            }
            else{
                res[ind] = nums[r]*nums[r];
                ind--;
                r--;
            }
        }
        return res;
    }
};
