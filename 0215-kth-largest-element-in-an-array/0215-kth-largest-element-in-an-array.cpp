class Solution {
public:
//     int findKthLargest(vector<int>& nums, int k) {
//         sort(nums.begin(),nums.end(),greater<int>());
//         return nums[k-1];
//     }
// };
        int findKthLargest(vector<int>& nums, int k) {
         priority_queue<int,vector<int>,greater<>> pq;
            for(auto x: nums)
            {
                pq.push(x);
            }
            for(auto x: nums){
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
    return pq.top();
    }
};