#include <iostream>
using namespace std;

int inSize(int size) {
	cout << "¬вед≥ть розм≥р масива: ";
	cin >> size;
	return size;
}

int* newArray(int size) {
	int* array = new int[size];
	return array;
}

void initArray(int* array, int size) {
	cout << "¬вед≥ть значенн€ дл€ масива: ";
	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}
}

int findMaxElement(int size, int* array) {
	int count = array[0];
	for (int i = 0; i < size; i++) {
		if (array[i] > count) {
			count = array[i];
		}
	}
	return count;
}

int findMinElement(int size, int* array) {
	int count = array[0];
	for (int i = 0; i < size; i++) {
		if (array[i] < count) {
			count = array[i];
		}
	}
	return count;
}

int main() {
	setlocale(LC_ALL, "rus");
	int Size = 0, choise = 0;
	while (true) {
		Size = inSize(Size);
		int* Array = newArray(Size);
		initArray(Array, Size);
		int (*findElement[2])(int, int*) = { findMinElement, findMaxElement };
	}
}