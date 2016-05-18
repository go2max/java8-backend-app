// Run-time компоновка

// Разработать программу solution, обеспечивающую загрузку динамической библиотеки в режиме исполнения. При запуске, программе передается имя динамической библиотеки, имя функции которая должна быть вызвана, и ее аргумент. Функция в библиотеке принимает на вход int и возвращает int. Результат, возвращаемый функций должен быть выведен отдельной строкой  в stdio.

// Пример вызова

// ./solution libShared.so someSecretFunctionPrototype 8
// 16

// В примере, должна быть загружена библиотека libShared.so, в которой вызвана функция someSecretFunctionPrototype с аргументом 8. Результат (16) выведен в stdio.


// Представление решения

// Решение предоставляется в виде двух файлов solution.c и Makefile, в последнем предполагается цель по умолчанию, которая приводит к сборке Вашего приложения.

// Вывод

// Программа выводит в стандартный поток вывода число, полученное после вызова функции