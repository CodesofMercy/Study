1. Перепишите программу из листинга 12.4 так, чтобы в ней не использовались глобальные переменные.

2. Расход бензина обычно измеряется в милях на один галлон в CША и в литрах на 100 километров в Европе. Ниже приведена часть программы, которая предлагает пользователю выбрать режим (метрический или американский), а затем выполняет сбор данных и вычисляет расход топлива:

	// ре12-2Ь.с
	// компилировать вместе с ре12-2а.с
	#include <stdio.h>
	#include "pel2-2a.h"
	int main(void)
	{
		int mode;
		printf ("Введите О для метрического режима или 1 для американского режима: ");
		scanf("%d", &mode);
		while (mode >= 0)
		{
			set_mode(mode);
			get_info();
			show_info();
			printf ("Введите О для метрического режима или 1 для американского режима");
			printf(" (-1 для завершения): ");
			scanf("%d", &mode);
		}
		printf("Программа завершена.\n");
		return О;
	}

Ниже показан пример вывода:

Введите 0 для метрического режима или 1 для американского режима: 0
Введите пройденное расстояние в километрах: 600
Введите объем израсходованного топлива в литрах: 78.8
Расход топлива составляет 13.13 литров на 100 км.
Введите 0 для метрического режима или 1 для американского режима
(-1 для завершения): 1
Введите пройденное расстояние в комлях: 434
Введите объем израсходованного топлива в галлонах: 12.7
Расход топлива составляет 34.2 мили на галлон.
Введите 0 для метрического режима или 1 для американского режима
(-1 для завершения) : 3
Указан недопустимый режим. Используется режим 1 (американский).
Введите пройденное расстояние в милях: 388
Введите объем израсходованного топлива в галлонах: 15.3
Расход топлива составляет 25.4 мили на галлон.
Введите 0 для метрического режима или 1 для американского режима
(-1 для завершения): -1
Программа завершена.

Если пользователь введет некорректный режим, программа сообщает об этом и использует режим, который был выбран в последний раз. Реализуйте заголовочный файл ре12-2а.h и файл исходного кода ре12-2а.с, чтобы обеспечить работоспособность программе. В файле исходного кода должны определяться три переменных с областью видимости в пределах файла и внутренним связыванием. Одна переменная представляет режим, вторая - расстояние и третья - расход топлива. Функция get_info() запрашивает ввод данных согласно выбранному режиму и сохраняет ответы в переменных с областью видимости в пределах файла. Функция show_ info() вычисляет и отображает расход топлива на основе выбранного режима. Можете считать, что пользователь вводит только числовые значения.

3. Переделайте программу, описанную в упражнении 2, чтобы в ней использовались только автоматические переменные. Обеспечьте в программе тот же самый пользовательский интерфейс, т.е. она должна предлагать пользователю ввести режим и т.д. Однако у вас будет другой набор вызовов функций.

4. Напишите и протестируйте в цикле функцию, которая возвращает количество ее вызовов.

5. Напишите программу, которая генерирует список из 100 случайных чисел в диапазоне от 1 до 10, отсортированный по убыванию. (Можете приспособить к типу int алгоритм сортировки из главы 11, только в этом случае сортируйте сами числа.)

6. Напишите программу, которая генерирует 1000 случайных чисел в диапазоне от 1 до 10. Не сохраняйте и не выводите эти числа, а выводите лишь то, сколько раз генерировалось каждое число. Программа должы делать это для 10 разных начальных значений. Появляются ли числа в одинаковых количествах? Можете исполь­зовать функции из этой главы или функции rand() и srand() из ANSI С, которые следуют тому же формату, что и рассмотренные здесь. Это один из способов исследования недетерминированности конкретного генератора случайных чисел.

7. Напишите программу, которая ведет себя подобно модификации листинга 12.13, которая обсуждалась после представления вывода из программы, показанной в листинге 12.13. То есть программа должна давать вывод следующего вида:
	Введите количество бросаний или q для завершения: 18
	Сколько граней и сколько костей? 6 3 
	Имеем 18 бросаний 3 костей с 6 гранями.

		12 10 6 9 8 14 8 15 9 14 12 17 11 7 10
		13 8 14

	Введите количество бросаний или q для завершения: q

8. Ниже приведена часть программы:
	// ре12-8.с
	#include <stdio.h>
	int * make_array(int elem, int val);
	void show_array(const int ar [] , int n ) ;
	int main(void)
	{
		int * ра;
		int size;
		int value;
		printf ("Введите количество элементов: ");
		while (scanf("%d", &size) == 1 && size > 0)
		{
			printf("Введите значение для инициализации: " ) ;
			scanf("%d", &value) ;
			ра = make_array(size, value);
			if (ра)
			{
				show_array(pa, size);
				free(pa);
			}
			printf("Bвeдитe количество элементов (<1 для завершения): ");
		}
		printf("Программа завершена.\n");
	return О;
	}

Завершите программу, предоставив определения функций make_array() и show_array(). Функцию make_array() принимает два аргумента. Первый аргумент - это количество элементов в массиве значений int, а второй аргумент — значение, которое должно быть присвоено каждому элеменгу массива. Эта функция использует malloc() для создания массива подходящего размера, присваивает каждому элеменгу заданное значение и возвращает указатель на массив. Функция show_array() отображает содержимое массива по восемь элементов в строке.

9. Напишите программу со следующим поведением. Сначала она запрашивает количество слов, которые нужно ввести. Затем она предлагает ввести слова, после чего их отображает. Воспользуйтесь malloc() и ответом на первый запрос (количество слов), чтобы создать динамический массив с подходящим количеством указателей на char. (Обратите внимание, что поскольку каждый элемент в мас­сиве является указателем на char, возвращаемое значение функции malloc() должно сохраняться в указателе на указатель на char.) Причтении строки программа должна читать слово во временный массив элементов char, с помощью malloc() выделять пространство, достаточное для хранения слова, и помещать адрес в массив указателей на char. Далее программа должна копировать слово из временного массива в выделенное пространство памяти. Таким образом, в итоге получается массив указателей на char, каждый из которых ссылается на объект с размером, необходимым для хранения конкретного слова. Результаты пробного запуска должны выглядеть следующим образом:
	
	Сколько слов вы хотите ввести? 5
	Теперь введите 5 слов:
	Мне понравилось выполнять это упражненяе
	Вот введенные вами слова:
	Мне
	понравилось
	ВЫПОЛНЯТЬ
	это
	упражнение

