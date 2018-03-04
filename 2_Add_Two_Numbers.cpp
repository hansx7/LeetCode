#include<bits/stdc++.h>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		int a[1000], b[1000], c[1000], ii = 0, jj = 0, i = 0, j = 0, k = 0, z;
		while (l1->next)
		{
			a[i] = l1->val;
			l1 = l1->next;
			i++;
		}
		a[i] = l1->val;
		while (l2->next)
		{
			b[j] = l2->val;
			l2 = l2->next;
			j++;
		}
		b[j] = l2->val;
		for (int ii = 0; ii <= i; ii++) cout << a[ii]; cout << endl;
		for (int ii = 0; ii <= j; ii++) cout << b[ii]; cout << endl;
		z = 0;
		while (ii <= i && jj <= j)
		{
			c[k] = z + a[ii] + b[jj];
			z = c[k] / 10;
			c[k] = c[k] % 10;
			k++;
			ii++;
			jj++;
		}
		while (i >= ii)
		{
			c[k] = z + a[ii];
			z = c[k] / 10;
			c[k] = c[k] % 10;
			k++;
			ii++;
		}
		while (j >= jj)
		{
			c[k] = z + b[jj];
			z = c[k] / 10;
			c[k] = c[k] % 10;
			k++;
			jj++;
		}
		if (z>0) 
		{ 
			c[k] = z; 
			k++; 
		}
		ListNode *ans = new ListNode(c[0]);
		ListNode *p = ans;
		for (i = 1; i<k; i++)
		{
			p->next = new ListNode(c[i]);
			p = p->next;
		}
		return ans;
	}
};

int main()
{
	while (1)
	{
		Solution s;
		int c;
		ListNode *l1 = new ListNode(0);
		ListNode *p = l1;
		cin >> c;
		while (c>0)
		{
			p->next = new ListNode(c % 10);
			c /= 10;
			p = p->next;
		}
		if (c>0)
			l1 = l1->next;
		ListNode *l2 = new ListNode(0);
		p = l2;
		cin >> c;
		while (c>0)
		{
			p->next = new ListNode(c % 10);
			c /= 10;
			p = p->next;
		}
		if (c>0)
			l2 = l2->next;
		p = s.addTwoNumbers(l1, l2);

		while (p->val == 0)
		{
			p = p->next;
		}
		while (p->next)
		{
			cout << p->val;
			p = p->next;
		}
		cout << p->val << endl;	
	}
	return 0;
}
