class DynamicArray
{
private:
	int top;
	int *array;
	int* resize() {
		int* tempArray = new int[top + 1];
		top++;
		for (int i = 0; i < size(); i++) {
			tempArray[i] = array[i];
		}
		delete[] array;
		return tempArray;
	}
public:
	DynamicArray();
	void append_element(int element);
	int get_element_at_index(int index);
	int size();
	void reset();
};

