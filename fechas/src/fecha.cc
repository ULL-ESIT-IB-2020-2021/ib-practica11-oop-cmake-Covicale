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

bool Fecha::IsALeapYear()
{

  if (this->year_ % 4 == 0 && this->year_ % 100 != 0) { return true; }

  else if (this->year_ % 400 == 0) { return true; }
  
  else { return false; }
}

void Fecha::IncreaseDay()
{

  std::array<int, 4> odd_days = {4, 6, 9, 11}; // Meses pares

  bool oddMonth = std::find(std::begin(odd_days), std::end(odd_days), this->month_) != (std::end(odd_days));
  
  // Dias que acaban en 31
  if (this->day_ == 31)
  {
    this->SetDay(1);
    if (this->month_ == 12) { 
      this->SetMonth(1); 
      this->SetYear(this->GetYear() + 1);
    } else { this->SetMonth(this->GetMonth() + 1); }
  }

  // Dias que acaban en 30
  else if (this->day_ == 30 && oddMonth)
  {
    this->SetDay(1);
    if (this->month_ == 12) { this->SetMonth(1); }
    else { this->SetMonth(this->GetMonth() + 1); }
  }

  // Febrero
  else if (this->day_ == 28 && oddMonth && this->month_ == 2)
  {
    this->SetDay(1);
    this->SetMonth(this->GetMonth() + 1);
  }

  // Resto de dias que no sean finales de mes

  else { this->SetDay(this->GetDay() + 1); }
}