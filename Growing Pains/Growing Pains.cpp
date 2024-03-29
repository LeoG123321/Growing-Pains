/*
    Leonardo Gonzalez   2/20/2024
    
    Week 6              Growing Pains
*/

#include <iostream>
#include <cassert>
#include "DynamicArray.h"

using namespace std;

int main()
{
    DynamicArray array;

    cout << "Begin Testing..." << endl;
    array.append_element(10);
    assert(array.size() == 1);
    assert(array.get_element_at_index(0) == 10);

    array.append_element(5);
    assert(array.size() == 2);
    assert(array.get_element_at_index(1) == 5);

    array.reset();
    assert(array.size() == 0);

    array.append_element(0);
    assert(array.size() == 1);
    assert(array.get_element_at_index(0) == 0);

    array.append_element(1);
    assert(array.size() == 2);
    assert(array.get_element_at_index(1) == 1);

    cout << "Testing Complete." << endl;
}
