#include "header.h"

const ll n = 2, m = 2;

int main()
{
	matrix<ll> A(n, m);

	//A.print();

	fr(i, 0, n)
		fr(j, 0, m) cin >> A[i][j];
	A.print();
}