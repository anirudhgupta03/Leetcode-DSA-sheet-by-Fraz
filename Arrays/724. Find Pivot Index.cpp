class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int> left(n,0), right(n,0);
        
        left[0] = nums[0];
        right[n-1] = nums[n-1];
        
        for(int i = 1; i < n; i++){
            left[i] = nums[i] + left[i-1];
        }
        for(int i = n - 2; i >= 0; i--){
            right[i] = nums[i] + right[i+1];
        }
        
        int pivot = -1;
        
        for(int i = 1; i < n - 1; i++){
            if(left[i-1] == right[i+1]){
                pivot = i;
                break;
            }
        }
        if(right[1] == 0) pivot = 0;
        else if(left[n-2] == 0 && pivot == -1) pivot = n-1;
        return pivot;
    }
};
