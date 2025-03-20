#include <iostream>
using namespace std;
bool isSorted(int a[], int n)
{
	if (n == 1 || n == 0)
		return true;
	if (a[0] > a[1])
		return false;
	return isSorted(a + 1, n - 1);
}
int main()
{
	int a[] = { 1,2,3,4,5 };
	int n = sizeof(a) / sizeof(a[0]);
	
	if (isSorted(a, n))
		cout << "The array is sorted" << endl;
	else
		cout << "The array is not sorted" << endl;

	return 0;
}