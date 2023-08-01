#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int cardNum;
	cin >> cardNum;

	int* arr = new int[cardNum];
	for (int i = 0; i < cardNum; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + cardNum);

	int compareNum;
	cin >> compareNum;

	for (int i = 0; i < compareNum; i++) {
		int compare;
		cin >> compare;

		int result = upper_bound(arr, arr + cardNum, compare) - lower_bound(arr, arr + cardNum, compare);
		cout << result << ' ';
	}
	return 0;
}