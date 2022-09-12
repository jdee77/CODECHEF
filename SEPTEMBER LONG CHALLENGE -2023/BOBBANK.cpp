//Bob at the Bank
/*

Bob has an account in the Bobby Bank. His current account balance is WW rupees.

Each month, the office in which Bob works deposits a fixed amount of XX rupees to his account.
YY rupees is deducted from Bob's account each month as bank charges.

Find his final account balance after ZZ months. Note that the account balance can be negative as well.

Input Format
The first line will contain TT, the number of test cases. Then the test cases follow.
Each test case consists of a single line of input, containing four integers W,X,Y,W,X,Y, and ZZ — the initial amount, the amount deposited per month, the amount deducted per month, and the number of months.
Output Format
For each test case, output in a single line the final balance in Bob's account after ZZ months.

*/

#include <bits/stdc++.h>
using namespace std;
#define m1 1000000007
#define ll long long
#define vi vector<int>
#define mid(l, r) (l + (r - l) / 2)
#define loop(i, a, b) for(int i = (a); i<= (b); i++)
#define loopneg(i, a, b) for(int i = (a); i>= (b); i--)
#define arint(n) int ar[n]

void input(vector<int> ar, int n);
void output(vector<int> ar);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ll t;
	cin>>t;
	while(t--)
	{
	    int w, x, y, z;
	    cin>>w>>x>>y>>z;
	    
	    int final = w + (x - y) * z;
	    cout<<final<<endl;
	}
	return 0;
}


void input(vector<int> ar, int n)
{
    int ele;
    for(int i = 0; i< n; i++)
    {
        cin>>ele;
        ar.push_back(ele);
    }
}
void output(vector<int> ar)
{
    for(auto ele: ar)
        cout<<ele<<" ";
    cout<<endl;
}
