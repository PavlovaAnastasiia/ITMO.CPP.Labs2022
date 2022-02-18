#include <iostream>
#include "AddressBook.h"
#include "AddressBook.cpp"

int main()
{
    AddressBook* address = new AddressBook;
    address->mainMenu();
    return 0;
}
