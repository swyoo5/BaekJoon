#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int m, n;
	cin >> m >> n;

	vector<string> listen, see;
	for (int i = 0; i < m; i++) {
		string s;
		cin >> s;
		listen.push_back(s);
	}
	sort(listen.begin(), listen.end());

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (binary_search(listen.begin(), listen.end(), s)) {
			see.push_back(s);
		}
	}
    
    sort(see.begin(), see.end());
    
	cout << see.size() << endl;
	for (auto s : see) {
		cout << s << endl;
	}
	return 0;
}