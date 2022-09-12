// Interesting Subarray
/*Problem
You are given an array AA of length NN.

The interesting value of a subarray is defined as the product of the maximum and minimum elements of the subarray.

Find the minimum and maximum interesting value over all subarrays for the given array.

Note: A subarray is obtained by deletion of several (possibly zero) elements from the beginning of the array and several (possibly zero) elements from the end of the array.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
The first line of each test case contains an integer NN - the length of the array AA.
The second line of each test case contains NN space-separated integers A_1,A_2,\ldots,A_NA 
1
​
 ,A 
2
​
 ,…,A 
N
​
 .
Output Format
For each test case, output two space-separated integers on a new line the minimum and maximum interesting value over all subarrays for the given array.

Constraints
1 \leq T \leq 1001≤T≤100
1 \leq N \leq 10^51≤N≤10 
5
 
-10^9 \leq A_i \leq 10^9−10 
9
 ≤A 
i
​
 ≤10 
9
 
The sum of NN over all test cases won't exceed 3 \cdot 10^53⋅10 
5
 .*/

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
	    ll n;
	    cin>>n;
	    
	    vector<ll> ar(n);
	    for(int i = 0; i< n; i++)
	    {
	        cin>>ar[i];
	    }
	    
	    int foz = 0, loz = n - 1;
	    
	    
	    ll maxp = -1;
	    ll minp = LLONG_MAX;
	    ll maxn = LLONG_MIN;
	    ll minn = 0;
	   
	    for(int i = foz; i<= loz; i++)
	    {
	        if(ar[i]< 0)
	        {
	           minn = min(minn, ar[i]);
	           maxn = max(maxn, ar[i]);
	        }
	        else
	        {
	            minp = min(minp, ar[i]);
	            maxp = max(maxp, ar[i]);
	        }
	    }
	    
	    ll minimum, maximum;
	    
	    // both negative and positive elements present 
	    if(minn < 0 && maxp > 0)
	    {
	        minimum = minn * maxp;
	        maximum = (minn * -1 > maxp)? (minn * -1) * (minn * -1): maxp * maxp;  
	    }
	    else if(minn< 0 && maxp < 0) // only negative elements present
	    {
	        minimum = maxn * maxn;
	        maximum = minn * minn;
	    }
	    else
	    {
	        minimum = minp * minp;
	        maximum = maxp * maxp;
	    }
	    cout<<minimum<<" "<<maximum<<endl;
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
