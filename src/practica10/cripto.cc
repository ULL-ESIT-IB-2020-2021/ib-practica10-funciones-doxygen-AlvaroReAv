/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file cripto.cc
  * @author Álvaro Reyes Ávila alu0101393650@ull.edu.es
  * @date 17 Dic 2020
  * @brief El programa codifica y descodifica usando el método de César con un valor
  *        ya predeterminado.
  * @bug No hay bugs conocidos
  * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
  */
#include "funciones_cripto.h"

int main()
{
   
    std::cout << "Este programa codifica y descodifica usando el método de César" << std::endl;
    
	std::string frase;
	std::cout << "Frase a codificar: ";
	std::getline(std::cin, frase);

	auto cesar = Cesar(frase, 17);

	std::cout << "Frase codificada: \"" << cesar << "\"\n";
	std::cout << "Frase descodificada: \"" << Cesar(cesar, -17) << "\"\n";
	return 0;
}