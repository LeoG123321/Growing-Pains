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

    array.append_element(10);
    assert(array.size() == 1);
    assert(array.get_element_at_index(0) == 10);
    cout << "Appended" <<endl ;
    array.append_element(5);
    assert(array.size() == 2);
    assert(array.get_element_at_index(1) == 5);
    cout << "Appended" << endl;

    array.append_element(0);
    assert(array.size() == 3);
    assert(array.get_element_at_index(2) == 0);
    cout << "Appended" << endl;

    array.append_element(1);
    assert(array.size() == 4);
    assert(array.get_element_at_index(3) == 1);
    cout << "Appended" << endl;;
}
