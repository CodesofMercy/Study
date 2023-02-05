/* 1. Напишите программу, которая использует функции printf() для вывода своего имени и фамилии в одной строке, второй вызов printf(), чтобы вывести имя и фамилию в двух строках, и еще два вызова printf() для вывода имени и фамилии в одной строке. Выходные данные должны иметь следующий вид (но с указанием ваших персональных данных):
 * Иван Иванов		--	первый оператор вывода
 * Иван			--	второй оператор вывода
 * Иванов 		--	по-прежнему второй оператор вывода
 * Иван Иванов 		--	Третий и четвертый операторы вывода */

#include <stdio.h>

int main() 
{
	printf("Iv Porter\n");
        printf("Iv\nPorter\n");
        printf("Iv ");
        printf("Porter\n");

	return 0;
}

/* 2. Напишите программу выводящее ваше имя и адрес. */

/* 3. Напишите программу, которая образует ваш возраст в полных годах в колличество дней и отображает на экране оба значения. Не обращайте внимания на високосные годы. */

/* 4. Напишите программу, которая производит следующий вывод:
 * 	Он веселый молодец!
 * 	Он веселый молодец!
 * 	Он веселый молодец!
 * 	Никто не может отрицать!
 *Вдобавок к функции main() в программе должны использоваться две определенные пользователем фенкции: jolly(), которая выводит сообщение "Он веселый молоец!" один раз, и deny(), выводящая сообщение в последней строке. */

/* 5. Напишите программу, которая производит следующий вывод:
 *	Бразилия, Россия, Индия, Китай
 *	Индия, Китай
 *	Бразилия, Россия
 *Вдобавок к функции main() в программе должны использоваться две определенные пользователем функции: br(), выводящую строку "Бразилия, Россия" один раз, и ic(), которая один раз выводит строку "Индия, Китай". Функция main() должна позаботиться о любых дополнительных задачах вывода. */

/* 6. Напишите программу, которая создает целочисленную переменную по имени toes. Программа должна присвоить переменной toes значение 10. Наряду с этим, программа должна вычслить удвоенное значение toes и квадрат toes. Программа должна вывести все три значения, снабдив их соответствующими пояснениями. */

/* 7. Многие исследования показывают, что улыбка способствует успеху. Напишите программу, которая производит следующий вывод:
 * 	Улыбайся!Улыбайся!Улыбайся!
 * 	Улыбайся!Улыбайся!
 * 	Улыбайся!
 * В программе должнабыть определена функция, которая отображает строку "Улыбайся!" один раз. Эта функция должна вызываться несколько раз, сколько необходимо. */

/* 8. В языке C одна функция может вызывать другую. Напишите программу, которая вызывает функцию по имени one_three(). Эта функция должна вывести слово "один" в одной строке, вызвать функцию two(), а затем вывести слово "три" тоже в одной строке. Функция two() должна отобразить слово "два" в одной строке. Функция main() должна вывести слово "начинаем:" перед вызовом функции one_three() и слово "Порядок!" после её вызова. Таким образом, выходные данные должны иметь следующийвид:
 * 	начинаем:
 * 	один
 * 	два
 * 	три
 * 	порядок!
 * */

