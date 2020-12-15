#include <string>
#include <iostream>
using namespace std;

int main()
{
    setlocale(0,"ru");
    string s;
    char s1, s2;
    cout << "Введите строку (англ.символами): " << endl;
    getline(cin, s);
    cout << "\nВведите 1 символ (который нужно заменить): " << endl;
    cin >> s1;
    cout << "\nВведите 2 символ (на который нужно заменить): " << endl;
    cin >> s2;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s1) 
        {
            s[i] = s2;
        }
    }
    cout << "\nНовая строка: " << s << endl;
    system("pause");
}

