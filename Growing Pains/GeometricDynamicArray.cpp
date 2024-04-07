#include "GeometricDynamicArray.h"

int* GeometricDynamicArray::resize() {
	if (size() == array_size) {
		int* tempArray = new int[size() + resize_number];
		for (int i = 0; i < size(); i++) {
			tempArray[i] = array[i];
		}
		delete[] array;
		array_size += resize_number;
		resize_number *= 2;
		return tempArray;
	}
	return array;
}

GeometricDynamicArray::GeometricDynamicArray() {
	top = -1;
	resize_number = 1;
	array_size = 1;
}
void GeometricDynamicArray::append_element(int element) {
	array = resize();
	top++;
	array[top] = element;
}
int GeometricDynamicArray::get_element_at_index(int index) {
	return array[index];
}
int GeometricDynamicArray::size() {
	return top + 1;
}
void GeometricDynamicArray::reset() {
	top = -1;
	int* tempArray = new int[1];
	delete[] array;
	array = tempArray;
	array_size = 1;
	resize_number = 1;
}