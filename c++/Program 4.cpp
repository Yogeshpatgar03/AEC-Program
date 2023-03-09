/*
Bhuvan has a string S with him. Bhuvan is happy if the string contains a contiguous substring of length strictly greater than 2 in which all its characters are vowels.
Determine whether Bhuvan is happy or not.
Note that, in English alphabet, vowels are a, e, i, o, and u.
Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, a string S.
Output Format
For each test case, if Bhuvan is happy, print HAPPY else print SAD.
You may print each character of the string in uppercase or lowercase (for example, the strings
*/
#include <iostream>
#include<string>
using namespace std;
int main() 
{
int t;
cout<<"enter the trials:";
cin>>t;
while(t--)
{
string s;
cout<<"Enter the string:";
cin>>s;
int j,i;
int l=1;
for(j=0;j<s.length()-3;j++)
{
l=1;
for(i=j;i<j+3;i++)
{
if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && 
s[i]!='u')
{
l=0;
}
}
if(l==1)
{
cout<<"Agastya is HAPPY"<<endl;break;}
}
if(l==0)
cout<<"Agastya is SAD"<<endl;
}
return 0;
}