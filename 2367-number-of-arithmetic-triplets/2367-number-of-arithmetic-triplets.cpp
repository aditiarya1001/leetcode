class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count =0;

        set<int>s(nums.begin(),nums.end());

        for(int i=0;i<s.size();i++)
        {
            //given
            // nums[j] - nums[i] == diff, and
            // nums[k] - nums[j] == diff
            //add these two equation: 
            //nums[i]-2*diff= nums[k]
            if(s.find(nums[i]-diff)!=s.end()  && s.find(nums[i]-2*diff)!=s.end())
            // SET .END HONE SE PEHLE (nums[i]-diff) YE VALUE SET MEIN MILI YA NAHI            
            {
                count++;
            }
        }   
        return count;   
    }
};

