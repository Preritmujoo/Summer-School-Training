#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maximumGap(vector<int>& nums) {
        int maxx = 0;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i + 1] - nums[i] > maxx) {
                maxx = nums[i + 1] - nums[i];
            }
        }
        return maxx;
    }

int main(){
    vector<int> nums;
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    
    cout<<maximumGap(nums)<<endl;
    return 0;
}