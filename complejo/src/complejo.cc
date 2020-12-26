/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Alexander Glez. Covic
 * @date 06 jan 2020
 * 
 */

#include "complejo.h"
#include <iostream>
#include <iomanip> // std::setprecision

void Complejo::print(){

	char imaginary_symbol = this->imaginary_ > 0 ? '+' : '-';
	char real_symbol = this->real_ > 0 ? 0 : '-';

	// Imprime el numero real mostrando solo sus 2 primeros decimales
	std::cout << std::fixed << std::setprecision(2) << real_symbol << fabs(real_);

	// Imprime el numero imaginario mostrando solo sus 2 primeros decimales
	std::cout << std::fixed << std::setprecision(2) << " " << imaginary_symbol << " " << fabs(imaginary_) << "i" << std::endl;
    
}

Complejo Complejo::add(Complejo other_complex){
	double real_input  = this->real_ + other_complex.getReal();
	double imaginary_input  = this->imaginary_ + other_complex.getImaginary();

	return Complejo{real_input, imaginary_input};
}

Complejo add(Complejo complex1, Complejo complex2){
	double real_input  = complex1.getReal() + complex2.getReal();
	double imaginary_input  = complex1.getImaginary() + complex2.getImaginary();

	return Complejo{real_input, imaginary_input};
}

Complejo Complejo::sub(Complejo other_complex){
	double real_input  = this->real_ - other_complex.getReal();
	double imaginary_input  = this->imaginary_ - other_complex.getImaginary();

	return Complejo{real_input, imaginary_input};
}

Complejo sub(Complejo complex1, Complejo complex2){
	double real_input  = complex1.getReal() - complex2.getReal();
	double imaginary_input  = complex1.getImaginary() - complex2.getImaginary();

	return Complejo{real_input, imaginary_input};
}