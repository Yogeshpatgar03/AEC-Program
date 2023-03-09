/*
Chetan is playing a videogame, and is getting close to the end. He decides to finish the rest of the game in a single session.
There are X levels remaining in the game, and each level takes Chetan Y minutes to complete. To protect against eye strain, Chetan also decides that every time he completes 3 levels, he will take a Z minute break from playing. Note that there is no need to take this break if the game has been completed.
How much time (in minutes) will it take Chetan to complete the game?
Input Format
    • The first line of input will contain a single integer T, denoting the number of test cases.
    • The first and only line of input will contain three space-separated integers X, Y, and Z.
Output Format
For each test case, output on a new line the answer — the length of Chetan’s gaming session.
*/
#include <iostream>
using namespace std;
int main() {
int T;
cout<<"enter the trails:";
cin >> T;
while(T--) {
int X, Y, Z;
cout<<"enter the elements of input X, Y, Z:";
cin >> X >> Y >> Z; 
int total_time = X * Y; 
int breaks = X / 3; 
int break_time = breaks * Z; 
int session_time = total_time + break_time; 
if(X % 3 == 0) {
session_time -= Z; 
}
cout<<"Length of Chetan's gaming session is:";
cout << session_time << endl;
}
return 0;
}