#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target = 0;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int i=0;
        for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k = nums.size()-1;
            while(j<k){
            int sum = nums[i]+nums[j]+nums[k];
            if(sum==0){
                vector<int> a;
                a.push_back(nums[i]);
                a.push_back(nums[j]);
                a.push_back(nums[k]);
                ans.push_back(a);
                while(j<k && nums[j]==nums[j+1]) j++;
                while(j<k && nums[k]==nums[k-1]) k--;
                j++; k--;
            }
            else if (sum>0){
                k--;
            }
            else {
                j++;
            }
            }
        }
        return ans;
    }
};