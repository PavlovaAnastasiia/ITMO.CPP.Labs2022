#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream outf("SomeText.txt");

    if (!outf)
    {
        cerr << "Unable to open file!" << endl;
    }
    outf << "See line #1!" << endl;
    outf << "See line #2!" << endl;

    ifstream inf("SomeText.txt");
	if (!inf)
	{
		cerr << "Unable to open file!" << endl;
	}

	while (inf)
	{
		string strInput;
		getline(inf, strInput);
		cout << strInput << endl;
	}

    const int N = 128;
    char text[N];
    cout << "Type here: \n";
    cin.getline(text, N);
    ofstream fout("haiku.txt"); 
    fout << text; 
    fout.close(); 
  
    return 0;
}
