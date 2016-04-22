# В данном степе вам нужно реализовать метод train_on_single_example класса Perceptron, который получает на вход один набор входных активаций размерности (m,1) и правильный ответ (число 0 или 1), после чего обновляет веса в соответствии с правилом обучения перцептрона. Когда вы начнёте решать задачу, вам нужно будет просто скопировать соответствующую функцию, которую вы написали в ноутбуке (без учёта отступов; шаблон в поле ввода ответа уже будет, ориентируйтесь по нему). Сигнатура функции указана в ноутбуке, она остаётся неизменной.

# Обязательно проверяйте размерности на соответствие указанным в задании и в сигнатуре функции!

# Дополнительное ограничение: в данной функции нельзя использовать операторы ветвления и циклы. Мы не сможем это проверить во всех случаях (но, возможно, ваше решение с циклом не сможет уложиться в отведённый решению период работы), так что ответственность за выполнение этого ограничения ложится на вашу совесть.

import numpy as np

def train_on_single_example(self, example, y):
    # your code goes here