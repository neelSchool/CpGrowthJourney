// neelm1002's template - Feel free to use if you like it.
// Inspired by Competitive Programmer's Handbook
/*
Platform and Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FOURTICKETS
Difficulty: Easy
Date Solved: 11/05/2025
Language: C++
Concepts Learned: Programming Basics
Approach Overview: Intuition
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
typedef vector<ll> vi;
typedef vector<vector<ll>> vii;
typedef pair<ll,ll> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define EB emplace_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define REPA(x,a,b,c) for (ll x = (a); x < (b); x+=(c))
#define REPD(x,a,b,c) for (ll x = (a); x >= (b); x-=(c))
void yes() {
 cout << "Yes" << "\n";
}
void no() {
 cout << "No" << "\n";
}
void fr() {
 ios::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
}
int main() {
 fr();
 // freopen("input.txt", "r", stdin);
 // freopen("output.txt", "w", stdout);
 int t;
 cin >> t;
 while (t--) {
  int x;
  cin >> x;
  if (x <= 250) {
     yes();
  } else {
      no();
  }
 }
}
