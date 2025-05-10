// neelm1002's template - Feel free to use if you like it.
// Inspired by Competitive Programmer's Handbook
/*
Platform and Problem Link: https://atcoder.jp/contests/abc405/tasks/abc405_c
Difficulty: Easy
Date Solved: 10/05/25
Language: C++
Concepts Learned: Number Theory, Maths, Combinatorics also maybe
Approach Overview: Very intuitive after doing on paper:
Basically, sum of all combinations of multiplications for a vector is equal to
a1 * sum(a2 to an) + a2 * sum(a3 to an) and so on
so we calculate sum of all elements at the start.
then we iterate through the vector decrementing by the current value
then we sum the multiplications into ans
example case:
a = 2,3,4
ans should be 26 (2*3) + (2*4) + (3*4)
but we can also calculate as (2(3+4) = 14 + 3(4) = 12) = 26 so same answer.
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
 for (ll &e : a) cin >> e;
 ll sum = 0, ans = 0;
 REPA(i,0,n,1) {
  sum += a[i];
 }
 REPA(i,0,n,1) {
  sum -= a[i];
  ans += a[i] * sum;
 }
 cout << ans;
}
