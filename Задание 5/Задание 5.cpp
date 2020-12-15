#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(0,"ru");
    string s;
    string f = "abcdefghijklmnopqrstuvwxyz"; //буквы англ. алфавита
    int a = 0;
    cout << "Введите строку: " << endl;
    getline(cin, s);
    int i = s.length();
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < f.length(); j++)
        {
            if (s[i] == f[j]) {
                a++;
            }
        }
    }
    cout << "\nКоличество прописных английских букв в строке: " << a << endl;
    system("pause");
}

