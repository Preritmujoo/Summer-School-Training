class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& numbers) {
        int a= 0, b = 0;
        for(int number : numbers){
            if(number){
                b++;
            }else{
                a = max(a, b);
                b= 0;
            }
        }
        return max(a, b);
    }
};
