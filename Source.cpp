#include<iostream>
#include<vector>
using namespace std;

class Vector {
	int size;
	vector<int>arr;
public:

	Vector() : size(0), arr(0) {}

	Vector(int size, int elem) {
		this->size = size;
		this->arr.push_back(elem);
	}

	void sortVector() {
		for (int i = 0; i < (size - 1); i++)
		{
			for (int j = 0; j < (size - j - 1); j++) {

				if (arr[j] > arr[j + 1]) {

					int tmp;
					arr[j] = tmp;
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
			}
		}
	}
};

int main() {

}