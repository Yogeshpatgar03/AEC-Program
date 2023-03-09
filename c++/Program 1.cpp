/*
Agastya is currently standing at stair 00 and he wants to reach stair numbered XX.Agastya can climb either YY steps or 11 step in one move.
Find the minimum number of moves required by him to reach exactly the stair numbered XX.
Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of a single line of input containing two space separated integers XX 
and YY denoting the number of stairAgastya wants to reach and the number of stairs he can climb in one move.
Output Format
For each test case, output the minimum number of moves required by him to reach exactly the stair numbered XX.
Constraints
1≤T≤500
1≤X,Y≤100
*/
#include <iostream>
using namespace std;
int main() {
// your code goes here
int t,x,y,ans;
cout<<"enter the trials:";
cin>>t;
while(t--)
{
cout<<"enter the value of x and y:";
cin>>x>>y;
ans=x/y;
ans+=(x%y);
cout<<ans<<endl;
}
return 0;
}