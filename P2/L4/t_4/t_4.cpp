#include <iostream>
using namespace std;

int main() {
	int a[] = { -100,-50, -5, 1, 10, 15 };
	int size = sizeof(a) / sizeof(*a);
	int buf = 0;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (abs(a[j]) > abs(a[j + 1])) {
				buf = a[j];
				a[j] = a[j + 1];
				a[j + 1] = buf;
			}
		}
	}

	for (int i = 0; i < size; ++i) {
		cout << a[i] << " ";
	}
}
