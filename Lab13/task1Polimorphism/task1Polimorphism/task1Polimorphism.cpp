#include <iostream>
#include "Item.h"
#include "Audiobook.h"
#include "PaperBook.h"

int main()
{
    Item* pubarr[100];
    int n = 0;
    char choice;
    do
    {
        cout << "\nEnter data for a book or sound file? (a/b)";
        cin >> choice;
        if (choice == 'b')
            pubarr[n] = new Paperbook;
        else
            pubarr[n] = new AudioBook;
        pubarr[n++]->getdata();
        cout << "Do you want to continue (ó / n)? ";
        cin >> choice;
    } while (choice == 'y');
    for (int j = 0; j < n; j++) 
        pubarr[j]->putdata(); 
    cout << endl;
    return 0;
}

