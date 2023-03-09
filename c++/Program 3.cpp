/*
You will be given an array of N integers and you have to print the integers in the reverse order.
Input Format
The first line of the input contains N ,where N  is the number of integers. The next line contains  N space-separated integers.
Constraints
1≤N≤1000
1≤A[i]≤10000 where A[i] is the ith integer in the array.
*/
#include <iostream>
using namespace std;
int main() {
cout<<"enter the size of an array:";
int N;
cin >> N; 
int arr[N];
cout<<"enter the elements of an array:";
for(int i=0;i<N;i++) {
cin >> arr[i]; 
}
cout<<"The elements in a reverse order of an array is:";
for(int i=N-1;i>=0;i--) {
cout << arr[i] << " "; }
return 0;
}