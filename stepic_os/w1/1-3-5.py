# Вам даны три булевых значения: X, Y и Z. Используя только описанные ниже операции, составьте выражение, которое будет истинно тогда и только тогда, когда ровно одно из булевых значений (X, Y или Z) истинно. Разрешены следующие логические операции (от наиболее приоритетной к наименее приоритетной):

# !  - НЕ (отрицание)
# &  - И
# ^  - исключающее ИЛИ (xor, сложение по модулю 2)
# |   - ИЛИ

# Если вы не уверены в приоритете операций то расставляйте скобки.

# Sample Input:
# There is no test input
# Sample Output:
# OK

# The only allowed simbols are 'X', 'Y', 'Z', '!', '&', '^', '|', '(', ')' and spaces
expression="(X^Y^Z)&(!(Z&Y&X))"