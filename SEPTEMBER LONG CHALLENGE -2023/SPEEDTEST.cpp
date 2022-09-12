// Speed Limit Test
/*
Problem
Alice is driving from her home to her office which is AA kilometers away and will take her XX hours to reach.
Bob is driving from his home to his office which is BB kilometers away and will take him YY hours to reach.

Determine who is driving faster, else, if they are both driving at the same speed print EQUAL.

Input Format
The first line will contain TT, the number of test cases. Then the test cases follow.
Each test case consists of a single line of input, containing four integers A,X,B,A,X,B, and YY, the distances and and the times taken by Alice and Bob respectively.
Output Format
For each test case, if Alice is faster, print ALICE. Else if Bob is faster, print BOB. If both are equal, print EQUAL.

You may print each character of the string in uppercase or lowercase (for example, the strings equal, equAL, EquAl, and EQUAL will all be treated as identical).

Constraints
1 \leq T \leq 10001≤T≤1000
1 \leq A,X,B,Y \leq 10001≤A,X,B,Y≤1000
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
	    int a, x, b, y;
	    cin>>a>>x>>b>>y;
	    
	    float speedx = (float)a/ (float)x;
	    float speedy = (float)b/ (float)y;
	    
	    if(speedx> speedy)
	    {
	        cout<<"Alice";
	    }
	    else if(speedy> speedx)
	    {
	        cout<<"Bob";
	    }
	    else
	    {
	        cout<<"Equal";
	    }
	    cout<<endl;
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
