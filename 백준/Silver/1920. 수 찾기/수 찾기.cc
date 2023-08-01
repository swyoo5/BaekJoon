#include <iostream>
#include <algorithm>

using namespace std;

int binarySearch(const int a[], int n, int key);

int main(void)
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    
	int inputNum;
	cin >> inputNum;

	int* arr = new int[inputNum];
	for (int i = 0; i < inputNum; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + inputNum);

	int compNum;
	cin >> compNum;

	for (int i = 0; i < compNum; i++) {
		int comp;
		cin >> comp;

		if (binarySearch(arr, inputNum, comp) >= 0) printf("1\n");
		else printf("0\n");
	}

	return 0;
}

int binarySearch(const int a[], int n, int key)
{
	int left = 0, right = n - 1;

	do {
		int center = (left + right) / 2;
		if (a[center] == key) return center;
		else if (a[center] < key) left = center + 1;
		else right = center - 1;
	} while (left <= right);

	return -1;
}