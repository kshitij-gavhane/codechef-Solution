#include <bits/stdc++.h>
using namespace std;

void inputv(vector<int> &ar, int n);
void outputv(vector<int> ar);

long long calc(long long a, long long b, long long c)
{
    long long res = abs(a-b) + abs(b-c) + abs(c-a);
    return res;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long t;
	cin>>t;
	while(t--)
	{
	    long long n, ele,mid, i, mx = 0;
        cin>>n;
        vector<int> ar;
        inputv(ar, n);
        sort(ar.begin(), ar.end());

        for(int i = 1; i< n-1; i++)
        {
            mx = max(calc(ar[0], ar[i], ar[n-1]), mx);
        }
        cout<<mx<<endl;        
	}
	return 0;
}


void inputv(vector<int> &ar, int n)
{
    int ele;
    for(int i = 0; i< n; i++)
    {
        cin>>ele;
        ar.push_back(ele);
    }
}