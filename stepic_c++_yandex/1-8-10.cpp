// В кинотеатре n рядов по m мест в каждом (n и m не превосходят 20). В двумерном массиве хранится информация о проданных билетах, число 1 означает, что билет на данное место уже продан, число 0 означает, что место свободно. Поступил запрос на продажу k билетов на соседние места в одном ряду. Определите, можно ли выполнить такой запрос.
// Формат входных данных

// Программа получает на вход числа n и m. Далее идет n строк, содержащих m чисел (0 или 1), разделенных пробелами. Затем дано число k.
// Формат выходных данных

// Программа должна вывести номер ряда, в котором есть k подряд идущих свободных мест. Если таких рядов несколько, то выведите номер наименьшего подходящего ряда. Если подходящего ряда нет, выведите число 0.

// Sample Input:

// 3 4
// 0 1 0 1
// 1 0 0 1
// 1 1 1 1
// 2

// Sample Output:

// 2

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m;
    int a[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    cin >> k;

    int trig = 0, row = 0;

    for(int i = 0; i < n; i++){
        int combo = 0;
        for(int j = 0; j < m; j++){
            if (a[i][j] == 0){
                combo++;
            }   else {
                combo = 0;
            }
            if (combo == k) {
                trig ++;
                row = i + 1;
                break;
            }
        }
        if (trig != 0){
            break;
        }
        combo = 0;
    }

    cout << row;

  return 0;
}