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

#include "racional.h"
#include <string>

Racional Racional::operator+(Racional& other_rational){

  int new_denominator = denominator_ * other_rational.getDenom();
  int new_numerator = (numerator_ * other_rational.getDenom()) + (other_rational.getNum() * denominator_);

  return Racional(new_numerator, new_denominator);

}

Racional Racional::operator-(Racional& other_rational){

  int new_denominator = denominator_ * other_rational.getDenom();
  int new_numerator = (numerator_ * other_rational.getDenom()) - (other_rational.getNum() * denominator_);

  return Racional(new_numerator, new_denominator);

}

Racional Racional::operator*(Racional& other_rational){

  int new_denominator = denominator_ * other_rational.getDenom();
  int new_numerator = numerator_ * other_rational.getNum();

  return Racional(new_numerator, new_denominator);

}

Racional Racional::operator/(Racional& other_rational){

  int new_denominator = denominator_ * other_rational.getNum();
  int new_numerator = numerator_ * other_rational.getDenom();

  return Racional(new_numerator, new_denominator);

}

bool Racional::operator==(Racional& other_rational){
  return (numerator_ * other_rational.getDenom() == denominator_ * other_rational.getNum());
}

bool Racional::operator!=(Racional& other_rational){
  return !(numerator_ * other_rational.getDenom() == denominator_ * other_rational.getNum());
}

bool Racional::operator>(Racional& other_rational){

  double division = ((double)(numerator_ * other_rational.getDenom()) / ((double)denominator_ * other_rational.getNum()));  

  return (division > 1);
}

bool Racional::operator<(Racional& other_rational){
  double division = ((double)(numerator_ * other_rational.getDenom()) / ((double)denominator_ * other_rational.getNum()));  

  return (division < 1);
}

bool Racional::operator>=(Racional& other_rational){
  double division = ((double)(numerator_ * other_rational.getDenom()) / ((double)denominator_ * other_rational.getNum()));  

  return (division >= 1);
}

bool Racional::operator<=(Racional& other_rational){
  double division = ((double)(numerator_ * other_rational.getDenom()) / ((double)denominator_ * other_rational.getNum()));  

  return (division <= 1);
}

// MODIFICACION

double RacionalAverage(std::vector<Racional>& racional_vector){
  Racional racional_average;
  for(auto& racional: racional_vector){
    racional_average = racional_average + racional;
  }

  return racional_average.getValue() / racional_vector.size();
}

double NumeratorAverage(std::vector<Racional>& racional_vector){
  int racional_average;
  for(auto& racional: racional_vector){
    racional_average += racional.getNum();
  }

  return (double)racional_average / racional_vector.size();
}

double DenominatorAverage(std::vector<Racional>& racional_vector){
  int racional_average;
  for(auto& racional: racional_vector){
    racional_average += racional.getDenom();
  }

  return (double)racional_average / racional_vector.size();
}