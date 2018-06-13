#include <iostream>
using namespace std;

struct ListNode {
	int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {};  //注意链表给定的构造方式
};

class Solution {
private:
	ListNode *ans;
public:
	Solution() {
		ans = NULL;
	}
	void setAns(ListNode* p) {
		ans = p;
	}
	ListNode* getAns() {
		return ans;
	}
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(0), *it, *p = l1, *q = l2;
		if (p == NULL && q) { setAns(q); return q; }
		if (q == NULL && p) { setAns(p); return p; }
        if (p == NULL && q == NULL) return NULL;
		it = head;
		while (1) {
			if (p->val < q->val) {
				it->next = new ListNode(p->val);
				it = it->next;
				if (p->next)
					p = p->next;
				else {
					it->next = new ListNode(0);
					it->next = q;
					break;
				}
			}
			else
				if (q->val < p->val) {
					it->next = new ListNode(q->val);
					it = it->next;
					if (q->next)
						q = q->next;
					else {
						it->next = new ListNode(0);
						it->next = p;
						break;
					}
				}
				else {
					it->next = new ListNode(p->val);
					it = it->next;
                    if (p->next)
						p = p->next;
					else {
						it->next = new ListNode(0);
						it->next = q;
						break;
					}
					it->next = new ListNode(q->val);
					it = it->next;
					if (q->next)
						q = q->next;
					else {
						it->next = new ListNode(0);
						it->next = p;
						break;
					}
				}
		}
        if (head->next) {
			setAns(head->next);
			return head->next;
		}			
		else
			return NULL;
    }
    friend ostream &operator<<(ostream &output, const Solution s) {   //复习重载运算符
		ListNode *p = s.ans;
		output << "[";
		while (p->next) {
			output << p->val << ",";
			p = p->next;
		}
		output << p->val << "]\n";
		return output;
	}
};

ostream &operator<<(ostream &output, const ListNode *p) {   //重载运算符，在类的外面
	output << "[";
	while (p->next) {
		output << p->val << ",";
		p = p->next;
	}
	output << p->val << "]\n";
	return output;
}

int main() {
	int n1, n2, x;
	cin >> n1 >> n2;
	ListNode *l1 = new ListNode(0);
	ListNode *l2 = new ListNode(0);
	ListNode *p = l1;
	ListNode *q = l2;
	for (int i=0; i<n1; i++) {
		cin >> x;
		p->next = new ListNode(x);
		p = p->next;
	}
	for (int i=0; i<n2; i++) {
		cin >> x;
		q->next = new ListNode(x);
		q = q->next;
	}
	if (l1->next) l1 = l1->next; else l1 = NULL;
	if (l2->next) l2 = l2->next; else l2 = NULL;
	Solution s;
	cout << s.mergeTwoLists(l1, l2);
	cout << s;
	return 0;
}
