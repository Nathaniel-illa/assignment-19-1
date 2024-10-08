#include "main.hpp"


int main()
{
	int count = 0;
	const int size = 10;
	vector<int> array(size);
	fillVector(array, size);
	printVector(array);
	count = countSymmetricPairs(array, 0, array.size() - 1);
	cout << "The number of symmetric pairs is: " << count << endl;
}
