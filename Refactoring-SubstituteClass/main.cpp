#include "main.h"
#include "Item.h"

int main() {
	Item book = Item(TYPECODE_BOOK, "World History", 4800);
	Item dvd = Item(TYPECODE_DVD, "Les Miserables", 3500);
	Item software = Item(TYPECODE_SOFTWARE, "Sofware Architecture 3rd", 5000);
	cout << "book = " + book.toString() << endl;
	cout << "dvd = " + dvd.toString() << endl;
	cout << "software = " + software.toString() << endl;

	/* 분류코드 오류인 경우 */

	Item bookInvalid = Item(456, "Invalid", 0);
	cout << "book = " + bookInvalid.toString() << endl;

	return 0;
}