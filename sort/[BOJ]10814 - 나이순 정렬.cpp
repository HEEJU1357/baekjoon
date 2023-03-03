#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {

	return a.first < b.first;

}


int main() {
	int n;
	vector<pair<int, string>> v;
	pair<int, string> arr;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr.first >> arr.second;
		v.push_back(arr);
	}

	stable_sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}
}