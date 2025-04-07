#include <iostream>
#include <vector>
using namespace std;
int find_smallest(vector <int> &vec) {
	int smaller_index = 0;
	int smaller_item = vec[0];
	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] <= smaller_item) {
			smaller_item = vec[i];
			smaller_index = i;
		}
	}
	return smaller_index;
}
vector<int> sort_vector(vector <int>& vec) {
	vector<int> vec1;
	int len = vec.size();
	while (!vec.empty()) {
		int smallest = find_smallest(vec);
		vec1.push_back(vec[find_smallest(vec)]);
		vec.erase(vec.begin() + smallest);
	}
	return vec1;
}
int main() {
	vector <int> vec = { 1,9,8,5,6,7,1,3 };
	vector <int> vec1 = sort_vector(vec);
	for (int i : vec1) {
		cout << i<<" ";
	}
}