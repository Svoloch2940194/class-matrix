#pragma once
#include<iostream>
#include<vector>

using namespace std;

typedef long long int ll;
typedef unsigned long long ull;
//typedef __int128 vll;
typedef long double ld;

#define fr(i,m,n) for(ll i=m;i<n;++i)
#define pa pair
#define qe queue
#define ve vector
#define pb emplace_back
#define make_uniq(a) a.resize(unique(begin(a),end(a))-begin(a))
#define all(a) begin(a),end(a)
#define rall(a) rbegin(a),rend(a)
#define ACspeed
#define re return

#define endl "\n"
#define yeah cout << "YES\n"
#define nah cout << "NO\n"
#define INF 1e18+9

template <typename type>

class matrix
{
	ll n;
	ll m;
	ve<ve<type>> ma;
public:

	matrix(ll n1, ll m1)
	{
		n = n1;
		m = m1;
		ma.resize(n, ve<type>(m, 0));
	}

	void print()
	{

		ll n = ma.size();
		ll m = ma[0].size();

		fr(i, 0, n)
		{
			fr(j, 0, m) cout << ma[i][j] << " ";
			cout << endl;
		}
	}

	matrix operator+ (matrix a)
	{
		if (n == a.n && m == a.m)
		{
			matrix<type> ans(n, m);
			fr(i, 0, n)
				fr(j, 0, m)
				ans.ma[i][j] = ma[i][j] + a.ma[i][j];
			re ans;
		}
		else { cout << "You can`t do this" << endl; re; }
	}

	matrix operator- (matrix a)
	{
		if (this->n == a.n && this->m == a.m)
		{
			matrix<type> ans(n, m);
			fr(i, 0, n)
				fr(j, 0, m)
				ans.ma[i][j] = ma[i][j] - a.ma[i][j];
			re ans;
		}
		else { cout << "You can`t do this" << endl; re; }
	}

	matrix operator* (ll b)
	{
		matrix<type> ans(n, m);
		fr(i, 0, n)
			fr(j, 0, m)
			ans.ma[i][j] = ma[i][j] * b;
		re ans;
	}

	matrix operator*(matrix a)
	{
		if (this->m == a.n)
		{
			matrix<type> ans(n, a.m);
			fr(i, 0, n)
			{
				fr(j, 0, a.m)
				{
					ll s = 0;
					fr(k, 0, m)
						s += ma[i][k] * a.ma[k][j];
					ans.ma[i][j] = s;
				}
			}
			re ans;
		}
		else { cout << "You can`t do this" << endl; re; }
	}

	matrix operator+= (matrix a)
	{
		if (n == a.n && m == a.m)
		{
			fr(i, 0, n)
				fr(j, 0, m)
					ma[i][j] += a.ma[i][j];
			re* this;
		}
		else { cout << "You can`t do this" << endl; re; }
	}

	matrix operator-= (matrix a)
	{
		if (this->n == a.n && this->m == a.m)
 
		{
			fr(i, 0, n)
				fr(j, 0, m)
				ma[i][j] -= a.ma[i][j];
			re* this;
		}
		else { cout << "You can`t do this" << endl; re; }
	}

	matrix operator*= (ll b)
	{
		fr(i, 0, n)
			fr(j, 0, m)
				ma[i][j] *= b;
		re* this;
	}

	bool operator== (matrix a)
	{
		fr(i, 0, n)
			fr(j, 0, m)
			if (ma[i][j] != a.ma[i][j]) re false;
		re true;
	}

	ve<type>& operator[](const ll i)
	{
		re ma[i];
	}

	ll det()
	{
		ll ans = 0;

		re ans;
	}

	
};

template <typename type>

istream& operator>> (istream& cin, ve<type>& a)
{
	fr(i, 0, a.size())
	{
		cin >> a[i];
	}
}

