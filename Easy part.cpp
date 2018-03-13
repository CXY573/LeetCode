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

4. Longest Common Prefix
class Solution 
{
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string result = "";
        for(int idx=0; strs.size()>0;result+=strs[0][idx],idx++)
            for(int i=0;i<strs.size();i++)
                if(idx>strs[0].size()||strs[i][idx]!=strs[i+1][idx])
                    return result;
        return result;
    }
};

5.Implement strStr()

class Solution 
{
public: 
    int strStr(string haystack, string needle) 
    {
        int m = haystack.length();
        int n = needle.length();
        for(int i=0;i<m-n+1;i++)
        {
            int j=0;
            for(;j<n;j++)
            {
                if(haystack[i+j]!=needle[j])
                    break;
            }
            if (j == n)
                return i;
        }
        return -1;
    }
};
