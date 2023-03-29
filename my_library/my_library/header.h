#pragma once
#include<iostream>
#include "matrix.h"

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