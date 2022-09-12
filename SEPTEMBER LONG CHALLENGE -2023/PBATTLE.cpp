/*P
okemon Battles
Problem Code: PBATTLE
Contest Code: SEP221
Difficulty Rating:1739
Problem
There are NN Pokemon trainers numbered from 11 to NN. Each trainer has one Pokemon. All the trainers have arrived to participate in a contest.
There are two battle arenas, one in ground and other in water. Each Pokemon may have different power in both the arenas.
When two Pokemon fight in an arena, the Pokemon having higher power in that arena wins. It is guaranteed that all Pokemon have distinct powers in the same arena to avoid any ties.

The strength of a Pokemon trainer is determined to be the number of other Pokemon his Pokemon can defeat in at least one arena.

It is known that only the Pokemon trainers with the highest strength will qualify for the next round (multiple trainers may have the same strength). Find the number of Pokemon trainers who will qualify for the next round.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of three lines of input.
The first line of each test case contains a single integer NN, denoting the number of Pokemon trainers.
The second line will contain NN space-separated integers, A_{1},A_{2},\ldots,A_{N}A 
1
​
 ,A 
2
​
 ,…,A 
N
​
 , where A_{i}A 
i
​
  denotes the power of the Pokemon of i^{th}i 
th
  trainer in the ground arena.
The third line will contain NN space-separated integers, B_{1},B_{2},\ldots,B_{N}B 
1
​
 ,B 
2
​
 ,…,B 
N
​
 , where B_{i}B 
i
​
  denotes the power of the Pokemon of i^{th}i 
th
  trainer in the water arena.
Output Format
For each test case, output on a new line the number Pokemon trainers who will qualify for the next round.

Constraints*/

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

bool compare(vector<ll> a1, vector<ll> a2)
{
    return a1[1]> a2[1];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n, temp;
	    cin>>n;
	    
	    vector<vector<ll>> ar(n);
	    for(int i = 0; i< n; i++)
	    {
	        ar[i].push_back(i);
	        cin>> temp;
	        ar[i].push_back(temp);
	    }
	    for(int i = 0; i< n; i++)
	    {
	        cin>>temp;
	        ar[i].push_back(temp);
	    } 
	    
	    unordered_map<ll, set<ll>> res(n);
	    
	    sort(ar.begin(), ar.end(), compare);
	    
	    ll count = 1;
	    ll max_untillnow = ar[0][2];
	    
	    for(int i = 1; i< n; i++)
	    {
	        if(ar[i][2]> max_untillnow)
	        {
	            count++;
	            max_untillnow = ar[i][2];
	        }
	    }
	    
	    cout<<count<<endl;
	    
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
