#include<iostream>
#include<vector>
using namespace std;


vector<int> num;
vector <string> friends;
vector<int>::iterator numi;
vector<string>::iterator friendsi;

int main() {
string p;
bool  HasCoolFriend = false;

for (int i = 0; i < 10; i++) {
int r = rand() % 51 + 50;
num.push_back(r);
}

num[3] = 77;

for (int i = 0; i < 10; ++i)
cout << num[i] << " ";

for (numi = num.begin(); numi != num.end(); ++numi) {
cout << *numi << endl;
}
cout << "enter 5 friends:" << endl;
for (int i = 0; i < 5; i++) {
cin >> p;
friends.push_back(p);
}
for (int i = 0; i < 5; i++)
cout << friends[i] << endl;

for (int i = 0; i < 5; i++)
if (friends[i] == "alejandro")
HasCoolFriend = true;

for (int i = 0; i < 5; ++i)
cout << friends[i] << " ";

if (HasCoolFriend == true)
cout << "you have cool friends!" << endl;
else
cout << "Find god" << endl;

friendsi = find(friends.begin(), friends.end(), "god");
if (friendsi != friends.end())
cout << "you foiudn ale" << endl;
else cout << "ale not found" << endl;
}
