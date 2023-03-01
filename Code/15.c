/* 1. Начните разработку заголовочного файла с определениями препроцессора, которые вы хотите использовать.
*/

...

/* 2. Гармоническое среднее двух чисел получается путем вычисления среднего от инверсий этих чисел с последующим инвертированием результата. Воспользуйтесь директивой #define для определения функционального макроса, который выполняет эту операцию. Напишите простую программу для тестирования этого макроса.
*/

...

/* 3. В полярной системе координат вектор описывается модулем и углом с осью х в направлении против часовой стрелки. В прямоугольной системе координат тот же вектор описывается составляющими х и у (рис. 16.3). Напишите программу, которая считывает значения модуля и угла (в градусах) вектора, а затем отображает составляющие х и у. Воспользуйтесь следующими уравнениями:

	х = r cos А	у = r sin А

Для выполнения преобразования применяйте функцию, которая принимает структуру, содержащую полярные координаты, и возвращает структуру, содержащую прямоугольные координаты (или, если хотите, выберите вариант с указателями на эти структуры).
*/

...

/* 4. Библиотека ANSI содержит функцию clock() со следующим описанием:

	#include <time.h>
	clock_t clock (void);

Здесь clock_t — тип данных, определенный в файле time.h. Функция возвращает процессорное время, выраженное в единицах, которые зависят от реализации. (Если процессорное время недоступно или не может быть представлено, функция возвращает -1.) Однако в файле time.h также определена константа CLOCKS_PER_SEC, которая представляет количество единиц процессорного времени в секунде. Следовательно, в результате деления разницы между двумя значениями, возвращаемыми clock(), на константу CLOCKS_PER_SEC получается количество секунд, прошедшее между двумя вызовами функции. Приведение значений к типу double до операции деления позволит получить результат в долях секунды. Напишите функцию, которая принимает аргумент типа double, представляющий промежуток времени, а затем выполняет цикл до истечения указанного периода времени. Напишите простую программу для тестирования этой функции.
*/

...

/* 5. Напишите функцию, которая в качестве аргумента принимает имя массива элементов int, размер массива и значение, представляющее количество выборок. Функция должна случайным образом выбирать из массива указанное количество элементов и выводить их значения. Ниодин элемент массива не должен выбираться более одного раза. (Это эмулирует выбор чисел в лотерее или членов жюри.) Если в данной реализации доступна функция time() (которая обсуждалась в главе 12) или подобная ей функция, то для вывода данных воспользуйтесь функцией srand(), чтобы инициализировать генератор случайных чисел rand(). Напишите простую программу для тестирования этой функции.
*/

...

/* 6. Модифицируйте код в листинге 16.15 так, чтобы программа использовала массив элементов struct names (как определено после листинга) вместо массива элементов double. Задействуйте меньше элементов и явно инициализируйте массив подходящим набором имен.
*/

...

/* 7. Ниже приведена часть программы, использующей функцию с переменным числом аргументов:

	#include <stdio.h>
	#include <stdlib.h>
	#include <stdarg.h>
	void show_array (const double ar[] , int n) ;
	double * new_d_array(int n, ...);
	int main()
	{
		double * p1;
		double * р2;

		pl = new_d_array(5, 1.2, 2.3, 3.4, 4.5, 5.6);
		p2 = new_d_array(4, 100.0, 20.00, 8.08, -1890.0);
		show_array(pl, 5);
		show_array(p2, 4);
		free(pl);
		free(p2);
		return 0;
	}

Функция new_d_array() принимает аргумент типа int и переменное количество аргументов double. Она возвращает указатель на блок памяти, выделенный функцией malloc(). Аргумент int задает количество элементов, которые должны быть в динамическом массиве, а значения double предназначены для инициализации элементов, при этом первое значение присваивается первому элементу, второе — второму и т.д. Завершите программу, предоставив код для функций show_array() и new_d_array().
*/

...


