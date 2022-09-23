//***************************************Template Begins*******************************************//
// #include <bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<utility>
#include<set>
#include<unordered_set>
#include<list>
#include<iterator>
#include<deque>
#include<queue>
#include<stack>
#include<set>
#include<bitset>
#include<random>
#include<map>
#include<unordered_map>
#include<stdio.h>
#include<complex>
#include<math.h>
#include<cstring>
#include<chrono>
#include<string>
#include<climits>

using namespace std;

//#pragma GCC optimize("Ofast")
//#pragma GCC optimization("unroll-loops, no-stack-protector")
//#pragma GCC target("avx,avx2,fma")

typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vi;
typedef vector<pii> vpii;
typedef vector<vi> vii;

#define pb push_back
#define mp make_pair
#define ff first 
#define ss second 
#define lb lower_bound
#define ub upper_bound

#define endl "\n"
#define all(v) v.begin(), v.end()
#define sum(v) accumulate(all(v), 0LL)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define pop_count(n) __builtin_popcount(n)

#define rep(i, a, n) for (int i = a; i < n; i++)
#define rev(i, a, n) for (int i = n - 1; i >= a; i--)
#define vin(v) for(auto &it:v) cin>>it;
#define vin_1(v) rep(i,1,v.size())cin>>v[i];
#define vout(v) rep(i,0,v.size())cout<<v[i]<<' ';cout<<'\n';
#define vout_1(v) rep(i,1,v.size())cout<<v[i]<<' ';cout<<'\n';
#define yes cout<<"YES"<<'\n'
#define no  cout<<"NO"<<'\n'

#define INF 10000000000000007
const ll mod = 1000000007;

//***************************************Template Ends********************************************//

void solve()
{
    // your code goes here
    return;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    cout.precision(30);
    cout.setf(ios::fixed);
    auto ti_start = std::chrono::high_resolution_clock::now();
    ll t;
    t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    auto ti_end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<float> duration = ti_end - ti_start;
    #ifndef ONLINE_JUDGE
    cout << endl;
    printf("[%0.3fms]",duration.count() * 1000.0f);
    #endif
    return 0;
}