#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		int l = nums.size();
		vector<int> ans;
		while (ans.size() > 0) ans.pop_back();
		for (int i = 0; i < l - 1; i++)
			for (int j = i + 1; j < l; j++)
			{
				if (nums[i] + nums[j] == target)
				{
					ans.push_back(i);
					ans.push_back(j);
					return ans;
				}
			}
	}
};
int main()
{
	int n, x, t;
	while (cin >> n && n)
	{
		cin >> t;
		vector<int> a, ans;
		Solution s;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			a.push_back(x);
		}
		ans = s.twoSum(a, t);
		cout << ans[0] << ans[1];
	}
	return 0;
}
