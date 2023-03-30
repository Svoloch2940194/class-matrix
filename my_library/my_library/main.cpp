#include "header.h"

const ll n = 2, m = 5;
const ll n1 = 5, m1 = 2;

int main()
{
	matrix<ll> A(n, m);
	matrix<ll> A1(n1, m1);

	fr(i, 0, A.size_string())
		fr(j, 0, A.size_column()) cin >> A[i][j];

	fr(i, 0, A1.size_string())
		fr(j, 0, A1.size_column()) cin >> A1[i][j];

	//matrix<ll> B = A + A1;
	matrix<ll> C = A * A1;
	/*
	fr(i, 0, B.size_string())
	{
		fr(j, 0, B.size_column()) cout << B[i][j] << " ";
		cout << endl;
	}
	*/
	fr(i, 0, C.size_string())
	{
		fr(j, 0, C.size_column()) cout << C[i][j] << " ";
		cout << endl;
	}

}