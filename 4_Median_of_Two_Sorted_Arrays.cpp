#include<bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
	int l1 = nums1.size(), l2 = nums2.size();
	double m1, m2;
	if (l1 % 2 == 0)
		m1 = (nums1[l1 / 2 - 1] + nums1[l1 / 2]) / 2.0;
	else
		m1 = nums1[l1 / 2];
	if (l2 % 2 == 0)
		m2 = (nums2[l2 / 2 - 1] + nums2[l2 / 2]) / 2.0;
	else
		m2 = nums2[l2 / 2];
	if (l1 == 0) return m2;
	if (l2 == 0) return m1;
	if (m1 < m2)
		return findMedianSortedArrays()
	return 2.0;
}

int main()
{
	vector<int> a, b;
	int m, n, x;
	cin >> m >> n;
	for (int i = 0; i < m; i++)
	{
		cin >> x;
		a.push_back(x);
	}
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		b.push_back(x);
	}
	cout << findMedianSortedArrays(a, b) << endl;
	return 0;
}