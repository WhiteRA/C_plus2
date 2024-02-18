#include <iostream>
using namespace std;

int main() {
	int a[] = { 2, 7, 11, 15 };
	int sym = 9;
	for (int i = 0; i < sizeof(a) / sizeof(*a); i++)
	{
		for (int j = 0; j < sizeof(a) / sizeof(*a)-1; j++)
		{
			if (a[i] + a[j + 1] == sym) {
				cout << a[j] << " + " << a[j + 1] << endl;
			}
		}
	}
}