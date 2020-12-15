#include <string>
#include <iostream>
using namespace std;

int Method2(string s1, string s2) // Объявляем метод, использованный ранее
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
    string S;
    string S0;
    cout << "Введите маленькую строку или символ S0: " << endl;
    getline(cin, S0);
    cout << "\nВведите строку S: " << endl;
    getline(cin, S);
    cout << "\nКоличество вхождений строки " << S0 << " в другой: " << Method2(S, S0) << endl;
    system("pause");
}

