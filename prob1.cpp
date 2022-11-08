#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

void solve(ll n);

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0), cin.tie(0);
	
	ll n; cin >> n;
	solve(n);

	return 0;
}

void solve(ll n)
{
	unordered_map<ll, ll> m;
	//unordered_set<ll> s;
	for (ll i = 0; i < n; ++i)
	{
		ll num; cin >> num;
		m[num]++;
		//s.insert(num);
	}

	ll cnt = 0;
	for (auto it: m)
	{
		++cnt;
	}
	m.clear();
	cout << cnt << endl;
	/*
	cout << s.size() << endl;
	s.clear();
	*/
	return;
}
