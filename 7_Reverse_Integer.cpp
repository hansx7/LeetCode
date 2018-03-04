#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long ans=0;
        bool flag=0;
        if (x<0) 
		{
			x=-x;
			flag=1;
		}
        while (x%10==0)
        {
        	x/=10;
        	if (x==0)
			{
				ans=0;
				break;
			}
        }
        while (x>0)
        {
        	ans=ans*10+x%10;
        	x/=10;
        }
        if (ans>2147483647 || ans<-2147483648) ans=0;
        if (flag) return -ans; else return ans;
    }
};

int main()
{
	long a;
	while (cin>>a)
	{
		Solution s;
		cout<<s.reverse(a)<<endl;
	}
	return 0;
}
