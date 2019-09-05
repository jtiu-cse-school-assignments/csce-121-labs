//
//  main.cpp
//  labWork2
//
//  Created by Julian Tiu on 1/27/16.
//  Copyright © 2016 Julian Tiu. All rights reserved.
//

/*
	Based on Code taken from:
	http://www.tutorialspoint.com/cplusplus/cpp_sizeof_operator.htm
 */
#include <iostream>
#include <limits>
using namespace std;

int main()
{
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
    cout << "Size of char16_t : " << sizeof(char16_t) << endl;
    cout << "Size of char32_t : " << sizeof(char32_t) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    //cout << "  Max: " << numeric_limits<int>::max() << endl;
    //cout << "  Min: " << numeric_limits<int>::min() << endl;
    //cout << "  Unsigned" << endl;
    //cout << "    Max: " << numeric_limits<unsigned int>::max() << endl;
    //cout << "    Min: " << numeric_limits<unsigned int>::min() << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    //cout << "  Max: " << numeric_limits<short int>::max() << endl;
    //cout << "  Min: " << numeric_limits<short int>::min() << endl;
    //cout << "  Unsigned" << endl;
    //cout << "    Max: " << numeric_limits<unsigned short int>::max() << endl;
    //cout << "    Min: " << numeric_limits<unsigned short int>::min() << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    //cout << "  Max: " << numeric_limits<long int>::max() << endl;
    //cout << "  Min: " << numeric_limits<long int>::min() << endl;
    //cout << "  Unsigned" << endl;
    //cout << "    Max: " << numeric_limits<unsigned long int>::max() << endl;
    //cout << "    Min: " << numeric_limits<unsigned long int>::min() << endl;
    cout << "Size of long long int : " << sizeof(long long int*) << endl;
    //cout << "  Max: " << numeric_limits<long long int>::max() << endl;
    //cout << "  Min: " << numeric_limits<long long int>::min() << endl;
    //cout << "  Unsigned" << endl;
    //cout << "    Max: " << numeric_limits<unsigned long long int>::max() << endl;
    //cout << "    Min: " << numeric_limits<unsigned long long int>::min() << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    //cout << "  Max: " << numeric_limits<float>::max() << endl;
    //cout << "  Min: " << numeric_limits<float>::min() << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    //cout << "  Max: " << numeric_limits<double>::max() << endl;
    //cout << "  Min: " << numeric_limits<double>::min() << endl;
    cout << "Size of long double : " << sizeof(long double) << endl;
    //cout << "  Max: " << numeric_limits<long double>::max() << endl;
    //cout << "  Min: " << numeric_limits<long double>::min() << endl;
    system("pause");
}