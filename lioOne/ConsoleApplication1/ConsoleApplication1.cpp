﻿// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS



#include <iostream>

#include <stdio.h>

#include <time.h>

#include <locale.h>

#include <conio.h>

#include <string.h>

int main()

{

    setlocale(LC_ALL, "Rus");

    int m[10];

    int max = 0;

    int min = 200;

    int r, i;

    srand(time(NULL));

    // Задание 2 "Инициализация массива случайными числами"

    printf("Ex 2\n");

    for (i = 0; i < 10; i++) {

        m[i] = rand() % 20 + 1;

        printf("%3d", m[i]);

    }

    //Задание 1 "Вычисление разницы между максимальным и минимальным элементом массива"

    printf("\nEx 1");

    for (i = 0; i < 10; i++) {

        if (m[i] < min)

            min = m[i];

    }

    for (i = 0; i < 10; i++) {

        if (m[i] > max)

            max = m[i];

    }

    r = max - min;

    printf("\n%d\n", r);

    //Задание 3 "Создание массива произвольного размера, вводимого с клавиатуры"

    printf("Ex 3\n");

    int* z;

    int n;

    printf("Write a size of list\n");

    scanf("%d", &n);

    z = (int*)malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {

        z[i] = rand() % 30 + 1;

        printf("%3d", z[i]);

    }

    printf("\n");

    free(z);

    //Задание 4 "Сумма значений в каждой строке двумерного массива"

    printf("Ex 4\n");

    int a[5][5];

    int sc[5];

    int s, j;

    for (i = 0; i < 5; i++) sc[i] = 0;

    for (i = 0; i < 5; i++) {

        s = 0;

        for (j = 0; j < 5; j++) {

            a[i][j] = rand() % 10;

            printf("%5d", a[i][j]);

            s += a[i][j];

            sc[j] += a[i][j];

        }

        printf(" |%d\n", s);

    }

    for (i = 0; i < 5; i++) {

        printf("%5s", "--");

    }

    printf("\n");

    for (i = 0; i < 5; i++) {

        printf("%5d", sc[i]);

    }

    printf("\n");

    //Задание 5 "Поиск в массиве"

    printf("Ex 5\n");

    struct student {

        char famil[20], name[20], number[20];

    };
    
    char poisk[20];

    int flag = 0;

    setlocale(LC_ALL, "Russian");

    student arr[3];

    printf("Write surname, name & number\n");

    for (int i = 0; i < 3; i++) {

        scanf("%s %s %s", arr[i].famil, arr[i].name, arr[i].number);

    }

    for (int i = 0; i < 3; i++) {

        printf(" %s %s %s \n", arr[i].famil, arr[i].name, arr[i].number);

    }

    printf("Write a surname\n");

    scanf("%s", poisk);

    for (int i = 0; i < 3; i++) {

        if (strcmp(poisk, arr[i].famil) == 0) {

            flag = 1;

            printf(" %s %s %s \n", arr[i].famil, arr[i].name, arr[i].number);

        }

    }

    if (flag == 0) {

        printf("Student is not found in the list");

    }

    _getch();

    return 0;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.