// neelm1002's template - Feel free to use if you like it.
// Inspired by Competitive Programmer's Handbook
/*
Platform and Problem Link: https://a...content-available-to-author-only...r.jp/contests/abc406/tasks/abc406_b
Difficulty: Easy
Date Solved: 17/05/2025
Language: C++
Concepts Learned: Programming Basics
Approach Overview: First attempt of multiplying and checking each iteration failed due to overflow. So, we actually precompute max 10^k -1 value and then periodically check to avoid overflow.
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
void ok(bool condition) {
 cout << (condition ? "Yes\n" : "No\n");
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
 ll n, k;
 cin >> n >> k;
 vi a(n);
 for (ll &e : a) cin >> e;
 ll ans = 1, mv = 1;
 for (int i = 1; i <= k; ++i) {
  mv*=10;
 }
 --mv;
 for (ll &e : a) {
   if (ans>(mv/e)) {
    ans = 1;
   } else {
     ans*=e;
   }
 }
  cout << ans << "\n";
}
