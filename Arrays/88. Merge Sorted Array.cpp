class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int ind1 = 0, ind2 = 0;
        
        vector<int> res;
        
        while(ind1 < m && ind2 < n){
            
            if(nums1[ind1] < nums2[ind2]){
                res.push_back(nums1[ind1]);
                ind1++;
            }
            else{
                res.push_back(nums2[ind2]);
                ind2++;
            }
        }
        while(ind1 < m){
            res.push_back(nums1[ind1]);
            ind1++;
        }
        while(ind2 < n){
            res.push_back(nums2[ind2]);
            ind2++;
        }
        for(int i = 0; i < res.size(); i++){
            nums1[i] = res[i];
        }
    }
};
