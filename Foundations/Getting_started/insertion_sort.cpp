#include <iostream>
#include <vector>
using namespace std;

//insertion sort algorithm https://www.youtube.com/watch?v=OGzPmgsI-pQ
/*
	array = [5, 2, 4, 6, 1, 3]

	for j from 2 to array.lenght
		key = array[j]
		//Insert A[j] into the sorted sequence A[1...j-1]
		i = j -1
		while i > 0 and array[i] > key
			array[i+1] = array[i]
			i = i -1
		array[i+1] = key
*/

vector<int> insertion_sort(vector<int> numbers) {
	for(int j = 1; j < numbers.size(); j++){
		int key = numbers[j];
		int i = j - 1;
		while(i >= 0 && numbers[i] > key) {
			numbers[i+1] = numbers[i];
			i --;
		}
		numbers[i+1] = key;
	}

	return numbers;
}

int main() {
	vector<int> numbers = {5, 2, 4, 6, 1, 3};
	numbers = insertion_sort(numbers);
	for(int i = 0; i < numbers.size(); i++){
		cout << numbers[i] << " ";
	}
	cout << endl;
	return 0;
}