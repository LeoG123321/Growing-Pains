/*
    Leonardo Gonzalez   2/20/2024
    
    Week 6              Growing Pains
*/

#include <iostream>
#include <cassert>
#include "DynamicArray.h"
#include "ArithmeticDynamicArray.h"
#include "GeometricDynamicArray.h"

using namespace std;

int main()
{
    DynamicArray dynamic_array;

    cout << "Begin Testing..." << endl;

    cout << "Testing Dynamic Array..." << endl;
    dynamic_array.append_element(10);
    assert(dynamic_array.size() == 1);
    assert(dynamic_array.get_element_at_index(0) == 10);

    dynamic_array.append_element(5);
    assert(dynamic_array.size() == 2);
    assert(dynamic_array.get_element_at_index(1) == 5);

    dynamic_array.reset();
    assert(dynamic_array.size() == 0);

    dynamic_array.append_element(0);
    assert(dynamic_array.size() == 1);
    assert(dynamic_array.get_element_at_index(0) == 0);

    dynamic_array.append_element(1);
    assert(dynamic_array.size() == 2);
    assert(dynamic_array.get_element_at_index(1) == 1);

    dynamic_array.reset();

    
    ArithmeticDynamicArray arithmetic_array(4);

    cout << "Testing Arithmetic Array..." << endl;
    arithmetic_array.append_element(10);
    assert(arithmetic_array.size() == 1);
    assert(arithmetic_array.get_element_at_index(0) == 10);

    arithmetic_array.append_element(5);
    assert(arithmetic_array.size() == 2);
    assert(arithmetic_array.get_element_at_index(1) == 5);

    arithmetic_array.append_element(4);
    arithmetic_array.append_element(5);
    arithmetic_array.append_element(5);
    arithmetic_array.append_element(5);
    arithmetic_array.append_element(5);
    arithmetic_array.append_element(5);

    assert(arithmetic_array.size() == 8);

    arithmetic_array.append_element(5);
    arithmetic_array.append_element(5);
    arithmetic_array.append_element(5);

    arithmetic_array.reset();
    assert(arithmetic_array.size() == 0);

    arithmetic_array.append_element(0);
    assert(arithmetic_array.size() == 1);
    assert(arithmetic_array.get_element_at_index(0) == 0);

    arithmetic_array.append_element(1);
    assert(arithmetic_array.size() == 2);
    assert(arithmetic_array.get_element_at_index(1) == 1);

    arithmetic_array.reset();

    cout << "Testing Geometric Array..." << endl;

    GeometricDynamicArray geometric_array;

    geometric_array.append_element(10);
    assert(geometric_array.size() == 1);
    assert(geometric_array.get_element_at_index(0) == 10);

    geometric_array.append_element(5);
    assert(geometric_array.size() == 2);
    assert(geometric_array.get_element_at_index(1) == 5);

    geometric_array.append_element(4);
    assert(geometric_array.size() == 3);

    geometric_array.append_element(5);
    geometric_array.append_element(5);
    geometric_array.append_element(5);
    geometric_array.append_element(5);
    geometric_array.append_element(5);

    assert(geometric_array.size() == 8);

    geometric_array.append_element(5);
    geometric_array.append_element(5);
    geometric_array.append_element(5);

    geometric_array.reset();
    assert(geometric_array.size() == 0);

    geometric_array.append_element(0);
    assert(geometric_array.size() == 1);
    assert(geometric_array.get_element_at_index(0) == 0);

    geometric_array.append_element(1);
    assert(geometric_array.size() == 2);
    assert(geometric_array.get_element_at_index(1) == 1);

    geometric_array.reset();

    cout << "Testing Complete." << endl;
}
