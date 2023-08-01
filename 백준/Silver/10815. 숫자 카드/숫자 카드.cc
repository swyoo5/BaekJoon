#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
	int cardNum;
	cin >> cardNum;

	vector<int> card;

	for (int i = 0; i < cardNum; i++) {
		int num;
		cin >> num;

		card.push_back(num);
	}

	sort(card.begin(), card.end());

	int compNum;
	cin >> compNum;

	for (int i = 0; i < compNum; i++) {
		int key;
		cin >> key;

		if (binary_search(card.begin(), card.end(), key)) {
			cout << "1 ";
		}
		else {
			cout << "0 ";
		}
	}
	cout << endl;
	return 0;
}