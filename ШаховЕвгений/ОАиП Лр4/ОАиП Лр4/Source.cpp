#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	int C, sum, a;
	sum = 0;

	cout << "������� 1:\n";

	cout << "����� �������: ";
	cin >> a;

	int *arr = new int[a]; //������������� �������

		for (int i = 0; i < a; i++) {
			cout << "[" << i + 1 << "]" << ": ";
			cin >> arr[i];
		}

	cout << "����� C: ";
	cin >> C;

	for (int i = 0; i < a; i++) {
		if (arr[i] < 0) {
			sum = sum + arr[i];
		}
	}

	delete[] arr; //�������� �������

	cout << "\n����� ������������� �����: " << sum;

	if (sum == C)
		cout << "\n����� ����� C";
	else {
		if (sum > C)
			cout << "\n����� ������ C";
		else
			cout << "\n����� ������ C";
	}



	cout << "\n������� 2:\n";
	int u = 0, i = 0;
	int arra[5][5];

	for (int u = 0; u < 5; u++) {

		for (int i = 0; i < 5; i++) {
			cout << "[" << u + 1 << "." << i + 1 << "]" << ": ";
			cin >> arra[u][i];
		}
		cout << "\n";
	}


	for (int u = 0; u < 5; u++) {

		for (int i = 0; i < 5; i++) {
			if (i < u)
				arra[u][i] = 0;
		}
		cout << "\n";
	}


	for (int u = 0; u < 5; u++) {

		for (int i = 0; i < 5; i++) {
			cout << arra[u][i] << " ";
		}
		cout << "\n";

	}

	return 0;
}