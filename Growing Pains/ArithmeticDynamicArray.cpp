#include "ArithmeticDynamicArray.h"

int* ArithmeticDynamicArray::resize() {
	int* tempArray = new int[top + 1 + resize_number];
	for (int i = 0; i < size(); i++) {
		tempArray[i] = array[i];
	}
	delete[] array;
	top++;
	return tempArray;
}

ArithmeticDynamicArray::ArithmeticDynamicArray(int resize_number) {
	top = -1;
	this->resize_number = resize_number;
}
void ArithmeticDynamicArray::append_element(int element) {
	array = resize();
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
}
