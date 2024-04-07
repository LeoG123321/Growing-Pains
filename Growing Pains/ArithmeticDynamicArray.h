#pragma once
class ArithmeticDynamicArray
{
private:
	int top;
	int resize_number;
	int* array = new int[0];
	int* resize();
	int array_size;
public:
	ArithmeticDynamicArray(int resize_number);
	void append_element(int element);
	int get_element_at_index(int index);
	int size();
	void reset();
};

