#include <iostream>
#include <fstream>
#include "functions.hpp"

int main()
{
    /*
    Найти в тексте слова, содержащие не менее четырех из пяти наиболее часто
    встречающихся букв текста, записать их и указать после
    каждого такого слова в скобках найденные буквы. Полученный текст записать
    в файл output.txt. Весь текст, кроме найденных слов, должен остаться
    неизменным, включая и знаки препинания.
    */

    setlocale(LC_ALL, "Rus");

    std::ifstream in("input.txt");
    char text[1000];
    in.getline(text, 1000);

    // Поиск встречающихся букв
    int num[256] = { 0 };
    char letters[256] = { 0 };

    for (int i = 0; i < strlen(text); i++)
        if (ag::isLetter(text[i]))
            num[tolower((unsigned char)text[i])]++;

    for (int i = 0; i < 256; i++)
        letters[i] = i;


    for (int i = 0; i < 256; i++)
        for (int j = i + 1; j < 256; j++)
            if (num[i] < num[j])
            {
                std::swap(num[i], num[j]);
                std::swap(letters[i], letters[j]);
            }

    char MyLetters[6];
    for (int i = 0; i < 5; i++)
        MyLetters[i] = letters[i];

    std::ofstream out("output.txt");
    for (int i = 0; i < 5; i++)
        out << letters[i] << std::endl;

    // Разделение текста
    char words[500][50];
    char tmp[50];
    int n = 0;
    ag::SplitText(text, words, n);

    // Поиск подходящих слов
    for (int i = 0; i < n; i++)
    {
        if (ag::IsMyLetters(MyLetters, words[i][49]))
            out << "<" << words[i] << ">" << std::endl;
    }
}
