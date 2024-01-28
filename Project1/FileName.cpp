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


int main() {
	setlocale(LC_ALL, "rus");
	int Size = 0, choise = 0;
	while (true) {
		Size = inSize(Size);
		int* Array = newArray(Size);
	}
}