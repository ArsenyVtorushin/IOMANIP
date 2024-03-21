#include <iostream>
#include <iomanip>

int main()
{
	setlocale(LC_ALL, "ru");


	/*	
		Библиотека IOMANIP


		Функции: 
			setprecision, fixed, setw, setfill, left, right

	*/



	/*
	

	float a = 12.4391987988865132;

	std::cout << std::setprecision(4) << a << "\n\n";




	







	float b = 432.2258729386419, c = 479.4643830203994;

	std::cout << std::fixed << std::setprecision(2)
		<< "b = " << b 
		<< " and "
		<< "c = " << c << "\n\n";

	std::cout << std::setprecision(4)
		<< "b = " << b
		<< " and "
		<< "c = " << c << "\n\n";














	std::cout  <<  std::setw(15)  <<  "Hello\n\n";










	std::cout   <<  std::setw(25)  <<  std::left  <<  "u're gr8"  <<  std::right  <<  "(im kiddin)\n\n";






	







	std::cout << std::setw(15) <<    std::setfill('.')   << "Hello\n\n";




	
	*/


	
	/*
		+---------+------------+
		| да..... | нет....... |
		+---------+------------+
	*/
	

	/*
	
	std::string separator = "+---------+------------+\n";
	std::string word1 = "да", word2 = "нет";

	std::cout << separator
		<< std::left
		<< "| "
		<< std::setw(7) << std::setfill('.') << word1
		<< " | "
		<< std::setw(10) << std::setfill('.') << word2
		<< " |\n"
		<< separator;
	*/
	

	return 0;
}