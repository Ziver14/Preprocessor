#include<iostream>
#include "Foo.hpp"
//Это однострочный комментарийб но с помощью\
обратного слэша он разбит на несколько строк.

#define PI 3.14

#define forever for(unsigned long long fori=0ULL;;fori++)


#define sum(a,b) (a + b) // макрос

#define print_arr(arr,size) \
std::cout<<"{";\
for(int i=0;i<size;i++)\
	std::cout<<arr[i]<<", ";\
std::cout<< "\b\b } \n";


//Макрос в отличии от встраивомой функции не возможно использовать, если его нельзя встроить
//Макросы работают на этапе препроцессора, функции работают на этапе компеляции



#define TEST 1

#if TEST == 1

void func() {
	std::cout << "TEST №1\n";
}
#elif TEST == 2
void func() {
	std::cout << "TEST №2";
	}
#else
void func() {
	std::cout << "NO ACTIVE TEST";
}


#endif

#define FLAGS

#ifndef FLAG
const int A = 13;
#else
const int A = 12;
#endif














int main() {
	setlocale(LC_ALL, "ru");
	double n,m;

	func();

	//Препрцессор-это программа, которая производит некоторые, а иногда весьма значительные
	//манипуляции с первоночальным текстом программы, перед тем как он подвергается компиляции

	//Директива препроцессора-команда указывающая препроцессору на то, где и какие изменения с
	// исходным кодом ему необходимо выполнить. Все директивы препроцессора начинаються с "#".

	//Константы и конструкции препроцессора
	/*std::cout << "Pi = " << PI << std::endl;
	forever{ 
		std::cout << '.';
	std::cout << fori;
	}
	*/

	//Макросы препроцессора
	/*std::cout << "Введите два числа -> ";
	std::cin >> n >> m;
	std::cout << n <<" + " << m << " = " << sum(n, m) << std::endl;
	std::cout << sum(2, 2) * 2 << std::endl;

	const int size = 4;
	int arr[size]{ 10,20,30,40 };
	print_arr(arr, size);


	std::cout << "PI = " << PI << std::endl;
#undef PI
	//std::cout << "PI = " << PI << std::endl; ошибка
#define PI 3.1416
	std::cout << "PI = " << PI << std::endl;
*/




	return 0;
}