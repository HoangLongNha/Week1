#include <iostream>
using namespace std;
void towerofHaHoi(int n, char sour, char target, char auxi)
{
	if (n == 1)
	{
		cout << "Move disk " << n << " from " << sour << " to " << target << endl;
		return;
	}

	towerofHaHoi(n - 1, sour, auxi, target);
	cout << "Move disk " << n << " from " << sour << " to " << target << endl;
	towerofHaHoi(n - 1, sour, target, auxi);
}
int main()
{
	int n = 3;
	towerofHaHoi(n, 'A', 'B', 'C');
	return 0;
}