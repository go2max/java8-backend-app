# По предложенной выборке найдите значения первой, третьей и седьмой порядковых статистик.

# Формат ответа: значения через запятую с пробелом

# Sample Input:

# 2.36, 3.11, 7.1, 4.32, -0.77, -0.29, 0.03, 2.89

# Sample Output:

# -0.77, 0.03, 4.32


# У вас есть неограниченное число попыток.
# Время одной попытки: 5 mins

x <- c(1.12, 1.11, 0.94, 4.99, 4.09, -1.57, 0.64, 5.05)
y <- sort(x)
z <- c(1,3,7)
for(i in z) print(y[i])