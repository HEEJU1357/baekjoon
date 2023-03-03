#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


bool compare(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	else {
		return a.length() < b.length();
	}
}

int main() {

	int n;
	string word;
	vector<string> v;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> word;
		v.push_back(word);
	}

	sort(v.begin(), v.end(), compare);
	v.erase(unique(v.begin(), v.end()), v.end());


	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}


}