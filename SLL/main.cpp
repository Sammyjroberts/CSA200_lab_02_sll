/*
 Roberts, Sammy
 CS A200
 September 16, 2016
 
 lab_02_sll
 */
#include "AnyList.h"
#include <iostream>
using namespace std;

int main()
{
    AnyList test1;
    AnyList test2;
    AnyList test3;
    AnyList test4;
    AnyList test5;
    AnyList test6;
    AnyList test7;
    
    cout << test1 << endl;
    test2.insert(33);
    cout << "List: " << test2 << endl;
    test3.insert(5);
    test3.insert(3);
    cout << "List: " << test3 << endl;
    test4.insert(6);
    test4.insert(8);
    test4.insert(9);
    cout << "List: " << test4 << endl;
    test5.insert(9);
    test5.insert(1);
    test5.insert(4);
    cout << "List: " << test5 << endl;
    test6.insert(2);
    test6.insert(1);
    test6.insert(3);
    test6.insert(4);
    test6.insert(9);
    test6.insert(6);
    test6.insert(5);
    test6.insert(8);
    test6.insert(7);
    cout << "List: " << test6 << endl;
    test7.insert(6);
    test7.insert(2);
    test7.insert(3);
    test7.insert(7);
    test7.insert(5);
    test7.insert(1);
    test7.insert(4);
    test7.insert(8);
    cout << "List: " << test7 << endl;
	return 0;
}
