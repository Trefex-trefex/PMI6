
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
	/*cout << "��������� �������� ������� Q "
		<< Q[Q.length() / 2 - 1] << ' '
		<< Q[Q.length() / 2] << endl;
	for (int i = 0; i < Q.length(); ++i)
		Q[i] = Q.length() - 1 - i;
	cout << "��������� Q " << Q;
	cout << "��������� �������� ������� Q "
		<< Q[Q.length() / 2 - 1] << ' '
		<< Q[Q.length() / 2] << endl;
	for (int i = 0; i < E.length(); ++i)
		E[i] = i;
	cout << "��������� E " << E;
	W = Q + 15;
	cout << "��������� W " << W;
	P = W + R;
	cout << "��������� P " << P;
	E += P;
	cout << "��������� E " << E;
	cout << "��������� �������� ������� P "
		<< P[P.length() / 2 - 1] << ' '
		<< P[P.length() / 2] << endl;
	Array Z(15);
	try {
		Z += Q;
		cout << "��������� Z " << Z;
	}
	catch (int) {
		23
			cout << "������� ����� ������ �����" << endl;
	}*/
}