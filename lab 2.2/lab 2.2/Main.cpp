
#include "Header.h"
#include <iostream>



int main() {
	Array A, B(5, 3), C(B);

	/*for (int i = 0; i < B.size(); i++) {
		cout << B[i];
	}*/
	cin >> B;
	try {
		B.insert(7, 3);
		cout << B;
		B.del(3);
	}
	catch (int) {
		cout << "error";
	}
	cout << B;

	/*cout << "Q " << Q;
	cout << "P " << P;
	cout << "W " << W;
	cout << "E " << E;
	cout << "R " << R;*/
	/*cout << "срединные элементы массива Q "
		<< Q[Q.length() / 2 - 1] << ' '
		<< Q[Q.length() / 2] << endl;
	for (int i = 0; i < Q.length(); ++i)
		Q[i] = Q.length() - 1 - i;
	cout << "изменённый Q " << Q;
	cout << "срединные элементы массива Q "
		<< Q[Q.length() / 2 - 1] << ' '
		<< Q[Q.length() / 2] << endl;
	for (int i = 0; i < E.length(); ++i)
		E[i] = i;
	cout << "изменённый E " << E;
	W = Q + 15;
	cout << "изменённый W " << W;
	P = W + R;
	cout << "изменённый P " << P;
	E += P;
	cout << "изменённый E " << E;
	cout << "срединные элементы массива P "
		<< P[P.length() / 2 - 1] << ' '
		<< P[P.length() / 2] << endl;
	Array Z(15);
	try {
		Z += Q;
		cout << "изменённый Z " << Z;
	}
	catch (int) {
		23
			cout << "Массивы имеют разную длину" << endl;
	}*/
}