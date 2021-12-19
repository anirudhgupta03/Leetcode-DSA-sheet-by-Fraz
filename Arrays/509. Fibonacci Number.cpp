class Solution {
public:
    int fib(int n) {
        
        if(n == 0) return 0;
        if(n == 1) return 1;
        
        int ele1 = 0, ele2 = 1;
        
        for(int i = 2; i <= n; i++){
            
            int sum = ele1 + ele2;
            ele1 = ele2;
            ele2 = sum;
        }
        return ele2;
    }
};
