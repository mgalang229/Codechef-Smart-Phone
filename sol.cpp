#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<long long> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	auto GetLongMax = [&](long long x, long long y) {
		return (x > y ? x : y);
	};
	// create a 'temp' variable to store the value of 'n'
	int temp = n;
	long long maximum_revenue = LLONG_MIN;
	// sort the vector in non-decreasing order
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++) {
		// get the maximum revenue by getting the product of each price
		// of the smartphones and the number of phones are greater than
		// or equal to its price including its own price
		maximum_revenue = GetLongMax(maximum_revenue, a[i] * temp);
		// decrement the 'temp' variable after each calculation
		temp--;
	}
	cout << maximum_revenue << '\n';
}
