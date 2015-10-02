// Напишите функцию поиска первого вхождения шаблона в текст. В качестве первого параметра функция принимает текст (C-style строка), в которой нужно искать шаблон. В качестве второго параметра строку-шаблон (C-style строка), которую нужно найти. Функция возвращает позицию первого вхождения строки-шаблона, если он присутствует в строке (помните, что в C++ принято считать с 0), и -1, если шаблона в тексте нет.
// Учтите, что пустой шаблон (строка длины 0) можно найти в любом месте текста.
// Требования к реализации: при выполнении данного задания вы можете определять любые вспомогательные функции, если они вам нужны. Вводить или выводить что-либо не нужно. Реализовывать функцию main не нужно.


#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int strstr(const char *text, const char *pattern)
{
    int count = 0;
    bool thereIs = true;
    for(; *text != '\0'; ++text) {
        count++;
        if(*text == *pattern) {
            for(int i = 0; pattern[i] != '\0'; i++) {
                if(text[i] == pattern[i]) thereIs = true;
                else {
                    thereIs = false;
                    break;
                }
            }
            if(thereIs == true) return count;
        }
    }
    return -1;
}

int main()
{
     strstr("1234","1654");
}