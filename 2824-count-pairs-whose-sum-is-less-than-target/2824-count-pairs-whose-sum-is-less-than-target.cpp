class Solution {
public:
//     int countPairs(vector<int>& nums, int target) {
//         //brute force
//         int count=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             for(int j=i+1;j<nums.size();j++)
//             {
//                 if(nums[i]+nums[j]<target && i<j)
//                 {
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };

int countPairs(vector<int>& nums, int target) {     
    sort( nums.begin() , nums.end()); 
       int i =0 , j = nums.size()-1 ;
       int cnt =0 ; 
       while( i < j)
       { 
           if( nums[i]+ nums[j] < target)
           {
               cnt = cnt + (j-i) ; 
               i++;
           }
           else
           {
               j--;
           } 
       }
       return cnt ;
    }
};