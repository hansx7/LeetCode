#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
		if (nums.size() == 0)
			return 0;
        int now = nums[0];
        int j = 0;
        for (int i=1; i<nums.size(); i++) {
			if (nums[i] != now) {
				j++;
				now = nums[j] = nums[i];
			}
		}
		return j+1;
    }
};

ostream &operator<<(ostream &output, const vector<int> &v) {
	if (v.size() == 0) return output;
	for (int i=0; i<v.size()-1; i++) {
		output << v[i] << " ";
	}
	output << v[v.size()-1] << endl;
	return output;
}

int main() {
	vector<int> a;
	int n;
	cin >> n;
	while (n--) {
		int x;
		cin >> x;
		a.push_back(x);
	}
	Solution s;
	cout << s.removeDuplicates(a) << endl;
	cout << a;
	return 0;
}
