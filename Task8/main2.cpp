#include <iostream>
#include <fstream>
#include "functions.hpp"

int main()
{
    /*
    Дана строка, содержащая русский текст. Если в тексте нет слов-палиндромов длиной более 1-й буквы,
    то вывести слова текста в соответствии с убыванием количества согласных, в противном
    случае пpодублиpовать в словах текста гласные буквы и вывести полученные слова в поpядке, обpатном к алфавитному.
    */

    setlocale(LC_ALL, "Rus");

    std::ifstream in("input.txt");
    char text[1000];
    in.getline(text, 1000);

    // Разделение текста
    char words[500][50];
    int n = 0;
    char tmp[50];
    bool flag = false;
    ag::SplitText(text, words, n);

    // Условия и действия
    for (int i = 0; i < n; i++)
        if (ag::IsPalindrome(words[i]) && (strlen(words[i]) > 1))
            flag = true;

    
    if (flag == 1)
    {
        for (int i = 0; i < n; i++)
        {
            ag::duplicateVowels(words[i]);
            ag::tolower(words[i]);
        }

        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)         
                if (strcmp(words[i], words[j]) <= 0)
                {
                    strcpy_s(tmp, words[i]);
                    strcpy_s(words[i], words[j]);
                    strcpy_s(words[j], tmp);
                }
    }
    else
    {
        for (int j = 0; j < n - 1; j++)
            for (int k = j + 1; k < n; k++)
                if (ag::numOfConsonant(words[j]) < ag::numOfConsonant(words[k]))
                {
                    strcpy_s(tmp, words[j]);
                    strcpy_s(words[j], words[k]);
                    strcpy_s(words[k], tmp);
                }
    }




    for (int i = 0; i < n; i++)
        std::cout << "<" << words[i] << "> " << std::endl;

}
