#include "DynamicArray.h"

DynamicArray::DynamicArray() {

}
void DynamicArray::append_element(int element) {
	array = resize();
	array[top] = element;
}
int DynamicArray::get_element_at_index(int index) {
	return array[index];
}
int DynamicArray::size() {
	return top;
}
void DynamicArray::reset() {
	delete[] array;
	top = 0;
}