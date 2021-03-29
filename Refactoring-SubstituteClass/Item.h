#pragma once
#include <iostream>
#include <string>

#define TYPECODE_BOOK 0
#define TYPECODE_DVD 1
#define TYPECODE_SOFTWARE 2
/*
constexpr auto TYPECODE_BOOK = 0;
constexpr auto TYPECODE_DVD = 1;
constexpr auto TYPECODE_SOFTWARE = 2;
*/
using namespace std;

class Item
{
private:
	int _typecode;
	string _title;
	int _price;

public:
//	int TYPECODE_BOOK = 0;
	Item(int typecode, string title, int price) {
		this->_typecode = typecode;
		this->_title = title;
		this->_price = price;
	}

	int getTypecode() { return _typecode; }
	string getTitle() { return _title; }
	int getPrice() { return _price; }

	string toString() {
		return "[ "
			+ to_string(getTypecode()) + ", "
			+ getTitle() + ", "
			+ to_string(getPrice()) + " ]";
	}
};

