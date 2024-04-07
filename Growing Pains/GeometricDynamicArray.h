#pragma once
class GeometricDynamicArray
{
private:
	int top;
	int resize_number;
	int* array = new int[1];
	int* resize();
	int array_size;
public:
	GeometricDynamicArray();
	void append_element(int element);
	int get_element_at_index(int index);
	int size();
	void reset();
};

