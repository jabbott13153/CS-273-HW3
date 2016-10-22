#include "stdafx.h"
#include "CppUnitTest.h"
#include"..\HW3\read int.h"
#include <fstream> // remember to include in unittest1.cpp
#include <iostream>
#include<assert.h>
#include <stdexcept> // remember to include in unittest1.cpp
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;



TEST_CLASS(READINT_TEST) // Test suite for read_int()
{

	TEST_METHOD(TestCase1) // Test case 1: invalid input
	{
		// Open a file stream to read the file zeroinput.txt (remember CS-172)
		// Replace "UnitTester" with the name of your Native Unit Test project
		ifstream ss("..\\Test1\\zeroinput.txt");

		// Check if we opened the file stream successfully
		if (ss.fail())
			throw int(-1); // throw an integer with value -1

						   // Replace the cin read buffer with the read buffer from the file stream 
		streambuf *orig_cin = cin.rdbuf(ss.rdbuf());

		// Perform the read_int() test.
		// cin will now read from your file and not from the keyboard.
		// We expect the correct value returned is 0, ignoring the Hello string.
		Assert::AreEqual(read_int("My prompt: ", -3, 3), 0);

		// Restore cin to the way it was before
		cin.rdbuf(orig_cin);

		// Close the file stream
		ss.close();
	}
	TEST_METHOD(TestCase2) // Test case 1: invalid input
	{
		// Open a file stream to read the file zeroinput.txt (remember CS-172)
		// Replace "UnitTester" with the name of your Native Unit Test project
		ifstream ss("..\\Test1\\InvalidOutOfRange.txt");

		// Check if we opened the file stream successfully
		if (ss.fail())
			throw int(-1); // throw an integer with value -1

						   // Replace the cin read buffer with the read buffer from the file stream 
		streambuf *orig_cin = cin.rdbuf(ss.rdbuf());

		// Perform the read_int() test.
		// cin will now read from your file and not from the keyboard.
		// We expect the correct value returned is 0, ignoring the Hello string.
		Assert::AreEqual(read_int("My prompt: ", 5, 1), 0);

		// Restore cin to the way it was before
		cin.rdbuf(orig_cin);

		// Close the file stream
		ss.close();
	}
	TEST_METHOD(TestCase3) // Test case 1: invalid input
	{
		// Open a file stream to read the file zeroinput.txt (remember CS-172)
		// Replace "UnitTester" with the name of your Native Unit Test project
		ifstream ss("..\\Test1\\NonesenseString.txt");

		// Check if we opened the file stream successfully
		if (ss.fail())
			throw int(-1); // throw an integer with value -1

						   // Replace the cin read buffer with the read buffer from the file stream 
		streambuf *orig_cin = cin.rdbuf(ss.rdbuf());

		// Perform the read_int() test.
		// cin will now read from your file and not from the keyboard.
		// We expect the correct value returned is 0, ignoring the Hello string.
		Assert::AreEqual(read_int("My prompt: ", 0, 4), 0);

		// Restore cin to the way it was before
		cin.rdbuf(orig_cin);

		// Close the file stream
		ss.close();
	}
	TEST_METHOD(TestCase4) // Test case 1: invalid input
	{
		// Open a file stream to read the file zeroinput.txt (remember CS-172)
		// Replace "UnitTester" with the name of your Native Unit Test project
		ifstream ss("..\\Test1\\InvalidFunctionRange.txt");

		// Check if we opened the file stream successfully
		if (ss.fail())
			throw int(-1); // throw an integer with value -1

						   // Replace the cin read buffer with the read buffer from the file stream 
		streambuf *orig_cin = cin.rdbuf(ss.rdbuf());

		// Perform the read_int() test.
		// cin will now read from your file and not from the keyboard.
		// We expect the correct value returned is 0, ignoring the Hello string.
		Assert::AreEqual(read_int("My prompt: ", 0, 0), 0);

		// Restore cin to the way it was before
		cin.rdbuf(orig_cin);

		// Close the file stream
		ss.close();
	}
};

