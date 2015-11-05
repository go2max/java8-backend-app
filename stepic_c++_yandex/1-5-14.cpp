// ана последовательность натуральных чисел, завершающаяся числом 0. Определите, какое наибольшее число подряд идущих элементов этой последовательности равны друг другу.
// Формат входных данных
// Вводится последовательность натуральных чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
// Формат выходных данных
// Выведите ответ на задачу.
// Sample Input:
// 1
// 7
// 7
// 9
// 1
// 0
// Sample Output:
// 2

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int cur;
  cin >> cur;
  int base = cur, count = 0, count_max = 0;
  while (cur)
  {
    if (base == cur)
      count++;
    else
    {
      base = cur;
      count = 1;
    }
    count_max = max(count_max, count);
    cin >> cur;
  }
  cout << count_max;
}