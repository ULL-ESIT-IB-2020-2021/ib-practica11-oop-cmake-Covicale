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

#ifndef COMPLEJO_H
#define COMPLEJO_H

#include <cmath>

class Complejo{

  private:
    double real_{};
    double imaginary_{};

  public:

    Complejo() = default;

    Complejo(double input_real, double input_imaginary) : real_(input_real), imaginary_(input_imaginary){};
    Complejo(int input_real, int input_imaginary) : real_((double)input_real), imaginary_((double)input_imaginary){};

    void print();

    // GETTERS
    double getReal() const { return real_; }
    double getImaginary() const { return imaginary_; }

    Complejo add(Complejo other_complex);
    Complejo sub(Complejo other_complex); 

};

Complejo sub(Complejo complex1, Complejo complex2);
Complejo add(Complejo complex1, Complejo complex2);

#endif