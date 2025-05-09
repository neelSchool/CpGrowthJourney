// neelm1002's template - Feel free to use if you like it.
// Inspired by Competitive Programmer's Handbook
/*
Platform and Problem Link: https://atcoder.jp/contests/abc169/tasks/abc169_b
Difficulty: Easy
Date Solved: 09/05/2025
Language: C++
Concepts Learned: Overflow, Number Theory, Limits
Approach Overview: Solve edge cases (0) and add validation checks and tests. Simple logic.
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
 ll n;
 cin >> n;
 vi a(n);
 const ll lim = 1000000000000000000LL;
 ll prod = 1;
 for (ll i = 0; i < n; ++i) {
  cin >> a[i];
  if (a[i] == 0) {
   cout << 0 << "\n";
   return 0;
  }
 }
 for (ll i = 0; i < n; ++i) {
  if (prod > lim/a[i]) {
   cout << -1 << "\n";
   return 0;
  }
  prod*=a[i];
 }
 cout << prod << "\n";
 return 0;
}
