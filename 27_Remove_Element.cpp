#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
		int i = 0;
		int n = nums.size();
		while (i < n)
		{
			if (nums[i] != val)
				i++;
			else
			{
				n--;
				nums[i] = nums[n];
			}
		}
		return n;
    }
};

int main(){
	vector <int> a;
	int n, b;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		a.push_back(x);
	}
	cin >> b;
	Solution s;
	cout << s.removeElement(a, b) << endl;
	return 0;
}
