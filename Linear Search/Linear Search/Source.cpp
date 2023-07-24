using namespace std;
#include<iostream>
int LSearch(int arr[], int size, int num)
{
	for (int i = 0; i < size; i++)
	{
		if (num == arr[i])
		{
			return i;
		}
	}

	return -1;
}
int main()
{
	int x;
	int array[] = { 70,15,30,6 };
	int n = sizeof(array) / sizeof(array[0]);
	cout << "original Array: [";
	for (int i = 0; i < n; i++) {
		cout << array[i] << " ";
	}
	cout << "]\n\n";
	cout << "Enter your number\n";
	cin >> x;
	int Final = LSearch(array, n, x);
	if (Final == -1)
		cout << "This number is not exist\n";
	else
		cout << "Found in index " << Final + 1 << "\n";
}