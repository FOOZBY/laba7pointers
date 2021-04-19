#include "Header.h"

int main()
{
    setlocale(0, "");
    string str, search_word, new_word;
    cout << "Введите начальную строку: ";
    getline(cin, str);
    cout << "Введите искомое слово: ";
    getline(cin, search_word);
    cout << "Введите слово, на которое нужно заменить: ";
    getline(cin, new_word);
    str = regex_replace(str, regex(search_word), new_word);
    cout << "Конечная строка: " << str << endl;
    system("pause");
    return 0;
}