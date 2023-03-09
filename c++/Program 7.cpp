#include <iostream>
#include <algorithm>
/*
Dhruv is very fond of horses. He enjoys watching them race. As expected, he has a stable full of horses. He, along with his friends, goes to his stable during the weekends to watch a few of these horses race. Agastya wants his friends to enjoy the race and so he wants the race to be close. This can happen only if the horses are comparable on their skill i.e. the difference in their skills is less.
There are N horses in the stable. The skill of the horse i is represented by an integer S[i]. Dhruv needs to pick 2 horses for the race such that the difference in their skills is minimum. This way, he would be able to host a very interesting race. Your task is to help him do this and report the minimum difference that is possible between 2 horses in the race.
Input:
First line of the input file contains a single integer T, the number of test cases.
Every test case starts with a line containing the integer N.
The next line contains N space separated integers where the i-th integer is S[i].
Output:
For each test case, output a single line containing the minimum difference that is possible.
*/
#include <climits>
using namespace std;
int main() {
int T;
cout<<"enter the test cases:";
cin >> T; 
while(T--) {
int N;
cout<<"enter the total no. of horses:";
cin >> N;
int S[N];
cout<<"enter the skills for each horses:";
for(int i=0;i<N;i++) {
cin >> S[i]; 
}
sort(S, S+N); 
int min_diff = INT_MAX; 
for(int i=1;i<N;i++) {
int diff = S[i] - S[i-1]; 
if(diff < min_diff) {
min_diff = diff; 
}
}
cout<<"Thed most skilled horses is at"<<" "<<min_diff<<" "<<"posistion";
cout << endl; 
}
return 0;
}
