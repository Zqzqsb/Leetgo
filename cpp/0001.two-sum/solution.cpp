// Created by ZQ at 2024/09/02 20:14
// leetgo: 1.4.8
// https://leetcode.cn/problems/two-sum/

#include <bits/stdc++.h>
#include "LC_IO.h"
using namespace std;

// @lc code=begin

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		for (int i = 0 ; i < nums.size() ; i++)
		{
			for (int j = i + 1 ; j < nums.size() ; j++)
			{
				if (nums[i] + nums[j] == target)
					return {i , j};	
			}
		}
		return {0 , 0};
    }
};

// @lc code=end

int main() {
	ios_base::sync_with_stdio(false);
	stringstream out_stream;

	vector<int> nums;
	LeetCodeIO::scan(cin, nums);
	int target;
	LeetCodeIO::scan(cin, target);

	Solution *obj = new Solution();
	auto res = obj->twoSum(nums, target);
	LeetCodeIO::print(out_stream, res);
	cout << "\noutput: " << out_stream.rdbuf() << endl;

	delete obj;
	return 0;
}
