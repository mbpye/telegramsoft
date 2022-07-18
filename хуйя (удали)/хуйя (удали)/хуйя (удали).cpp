#include <cstdalign>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
string path = "logo.txt";

ifstream fin;
fin.open(path);

if (!fin.is_open())
{
    cout << "error!!!!";

}
else
{

    char ch;
    while (fin.get(ch))
    {
        cout << ch;
    }
}
	system("pause");
	return 0;
}
