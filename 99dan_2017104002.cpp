#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i < 9; i++) {
		for (int j = 1; j < 10; j++) {

			cout << i * j;

			if (i * j < 10) {
				cout << "   ";
			}

			else {
				cout << "  ";
			}
		}

		cout << endl;
	}

    return 0;
}