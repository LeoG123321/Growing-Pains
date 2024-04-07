#include "ArithmeticDynamicArray.h"

int* ArithmeticDynamicArray::resize() {
	if (size() == array_size) {
		int* tempArray = new int[size() + resize_number];
		for (int i = 0; i < size(); i++) {
			tempArray[i] = array[i];
		}
		delete[] array;
		array_size += resize_number;
		return tempArray;
	}
	return array;
}

ArithmeticDynamicArray::ArithmeticDynamicArray(int resize_number) {
	top = -1;
	this->resize_number = resize_number;
	array_size = 0;
}
void ArithmeticDynamicArray::append_element(int element) {
	array = resize();
	top++;
	array[top] = element;
}
int ArithmeticDynamicArray::get_element_at_index(int index) {
	return array[index];
}
int ArithmeticDynamicArray::size() {
	return top + 1;
}
void ArithmeticDynamicArray::reset() {
	top = -1;
	int* tempArray = new int[0];
	delete[] array;
	array = tempArray;
	array_size = 0;
}
