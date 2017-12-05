
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

struct fridge {
	string aty;
	string firma;
	int nomer;
	char inicial;
	int baga;
};
void _tmain()
{
	int san;
	int nomer1;
	const int n = 2;
	int akwa;
	fridge aty[n];
	fridge inicial[n];
	fridge nomer[n];
	fridge firma[n];
	fridge baga[n];
	for (int i = 0; i< n; i++) {
		cout << "Aty : ";
		cin >> aty[i].aty;
		cout << "Firma :";
		cin >> firma[i].firma;
		cout << "Sany : ";
		cin >> nomer[i].nomer;
		cout << "Baga :";
		cin >> baga[i].baga;
	}
	cout << "Kanwa akwan bar : ";
	cin >> akwa;
	for (int i = 0; i<n; i++) {
		if (akwa > baga[i].baga) {
			cout << " Aty : " << aty[i].aty;
			cout << "Firma : " << firma[i].firma;
			cout << "Sany : " << nomer[i].nomer;

		}
	}
	getch();
}
