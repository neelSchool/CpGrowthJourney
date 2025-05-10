// neelm1002's template - Feel free to use if you like it.
// Inspired by Competitive Programmer's Handbook
/*
Platform and Problem Link: https://atcoder.jp/contests/abc405/tasks/abc405_b
Difficulty: Easy
Date Solved: 10/05/25
Language: C++
Concepts Learned: DSA, Sortings, dont know what else really its just logic
Approach Overview: Naive way is to remove back element and check against req after sort but thats slow.
But you can also just count distinct nums see if after decrement any becomes 0 (no occurence)
and then print number of elements - index to get minimum operations.
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
 int n, m;
 cin >> n >> m;
 vi a(n);
 for (ll &e : a) cin >> e;
 vi fq(m+1,0);
 ll dist = 0;
 REPA(i,0,n,1) {
  if (a[i] >= 1 && a[i] <= m && fq[a[i]] == 0) {
   dist++;
  }
  if (a[i]>=1 && a[i] <= m) {
   fq[a[i]]++;
  }
 }
 if (dist < m) {
  cout << 0 << "\n";
  return 0;
 }
 REPD(i,n-1,0,1) {
  ll val = a[i];
  if (val >= 1 && val <= m) {
   fq[val]--;
   if (fq[val] == 0) {
    dist--;
   }
  }
  if (dist < m) {
   cout << n-i << "\n";
   return 0;
  }
 }
 return 0;
}
