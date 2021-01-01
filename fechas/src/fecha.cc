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

#include "fecha.h"
#include <algorithm>

std::array<int, 4> odd_days = {4, 6, 9, 11}; // Meses pares

bool Fecha::IsALeapYear()
{

  if (this->year_ % 4 == 0 && this->year_ % 100 != 0) { return true; }

  else if (this->year_ % 400 == 0) { return true; }
  
  else { return false; }
}

Fecha& Fecha::operator++()
{
  bool oddMonth = std::find(std::begin(odd_days), std::end(odd_days), this->month_) != (std::end(odd_days));
  
  // Dias que acaban en 31
  if (day_ == 31)
  {
    day_ = 1;
    if (month_ == 12) { 
      month_ = 1; 
      ++year_;
    } else { ++month_; }
  }

  // Dias que acaban en 30
  else if (day_ == 30 && oddMonth)
  {
    day_ = 1;
    ++month_;
  }

  // Febrero
  else if (day_ == 28 && month_ == 2)
  {
    day_ = 1;
    ++month_;
  }

  // Resto de dias que no sean finales de mes

  else { ++day_; }

  return *this;
}