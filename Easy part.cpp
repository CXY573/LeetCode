1. Two sum:

class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int>hash;
        vector<int>result;
        for (int i = 0;i<nums.size(); i++)
        {
            int Findnumber = target - nums[i];
            if (hash.find(Findnumber) != hash.end())
            {
                result.push_back(hash[Findnumber]);
                result.push_back(i);
                return result;
            }
            hash[nums[i]] = i;
        }
        return result;
    }
};

2. Reverse Integer:

class Solution 
{
public:
    int reverse(int x)
    {
        long rev = 0;
        while(x!=0)
        {
            rev = rev*10 + x%10;
            x = x/10;
            if(rev>2147483647 || rev < -2147483648)
                return 0;
        }
        return rev;
    }
    
};

3. Palindrome Number:

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0|| (x!=0 &&x%10==0)) return false;
        int sum=0;
        while(x>sum)
        {
            sum = sum*10+x%10;
            x = x/10;
        }
        return (x==sum)||(x==sum/10);
    }
};

