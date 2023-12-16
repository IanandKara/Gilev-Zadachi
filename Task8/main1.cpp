#include <iostream>
#include <fstream>
#include "functions.hpp"

int main()
{
    /*
    Дан файл, содержащий русский текст. Найти в тексте N<=2000 слов, 
    содержащих наибольшее количество одинаковых букв. Записать найденные слова 
    в текстовый файл в порядке невозрастания количества одинаковых букв. Для каждого 
    слова вывести также это количество.
    */

    setlocale(LC_ALL, "Rus");

    std::ifstream in("input.txt");
    char text[1000];
    in.getline(text, 1000);

    // Разделение текста
    char words[500][50];
    int n = 0;
    ag::SplitText(text, words, n);

    // Сортировка по кол-ву одинаковых букв
    char tmp[50];
    for (int i = 0; i < n - 1; i++)
    {
        for(int j = i+1; j < n; j++)
        if (ag::NumOfIDLetters(words[i]) < ag::NumOfIDLetters(words[j]))
        {
            strcpy_s(tmp, words[i]);
            strcpy_s(words[i], words[j]);
            strcpy_s(words[j], tmp);
        }
    }

    // Вывод результата
    for (int i = 0; i < n; i++)
       std::cout << "<" << words[i] << " " << ag::NumOfIDLetters(words[i]) << ">" << std::endl;
}
