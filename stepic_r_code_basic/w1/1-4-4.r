# Выполните в своей сессии следующие команды (про функцию set.seed я расскажу чуть далее):

# set.seed(1337)
# x <- runif(1e6, min = -1, max = 1)

# Теперь в вашем распоряжении вектор x длиной один миллион. Мне крайне интересно, сколько среди них чисел в диапазоне (-0.2, 0.3). Для определённости не включая границы интервала. Впрочем, кто знаком с теорией вероятностей, тот знает, что это уточнение несущественно.

# P.S. Задача-то простецкая вышла: всегда можно распечатать x на принтере и посчитать вручную.

sum(x >= -0.2 & x <= 0.3)