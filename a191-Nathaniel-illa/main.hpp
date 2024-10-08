#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void fillVector(vector<int>& array, int size);
void printVector(const vector<int>& array);
int countSymmetricPairs(const std::vector<int>& array, int start, int end);

void fillVector(vector<int>& array, int size) {
    srand(static_cast<unsigned>(time(0)));
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 10; // Fill with random integers between 0 and 9
    }
}

void printVector(const vector<int>& array) {
    for (int i : array) 
        cout << i << " ";
    cout << endl;
}

int countSymmetricPairs(const std::vector<int>& array, int start, int end) {
    // Base case: If start index is greater than or equal to end index, return 0
    if (start >= end) {
        return 0;
    }

    // Check the current pair
    int count = (array[start] == array[end]) ? 1 : 0;

    // Recursive case: Check the next inner pair
    return count + countSymmetricPairs(array, start + 1, end - 1);
}

#endif // MAIN_HPP