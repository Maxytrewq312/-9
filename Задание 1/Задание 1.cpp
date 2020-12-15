#include <string>
#include <iostream>
using namespace std;

int Method1(string s1, string s2) //Объявляем новый метод
{
    int a = 0;
    while (s1.find(s2) != s1.npos)
    {
        a++;
        s1.erase(s1.find(s2), s2.length());
    }
    return a;
}

int main()
{
    setlocale(0,"ru");
    string s;
    string sum;
    cout << "Введите строку: " << endl;
    getline(cin, s);
    cout << "\nВведите символ: " << endl;
    cin >> sum;
    cout << "\nКоличество вхождений символа " << sum << ": " << Method1(s, sum) << endl;
    system("pause");
}