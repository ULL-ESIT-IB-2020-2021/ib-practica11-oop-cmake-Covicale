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

#ifndef RACIONAL_H
#define RACIONAL_H

#include <string>
#include <fstream>
#include <iostream>

class Racional{
  private:

  // numerator/denominator

  int numerator_{};
  int denominator_{};

  public:

  Racional() = default; // Default Cnstructor
  //~Racional(); // Destructor
  Racional(int numerator, int denominator){

    numerator_ = numerator;
    try{
      if(denominator != 0){
        denominator_ = denominator;
      }else{ 
        throw "Denominator can't be 0";
      }
    }catch(const char* denominator_err){
      std::cout << "Denominator can't be 0" << std::endl;
      exit(EXIT_SUCCESS);
    }
    

  }

  // GETTERS

  int getNum() { return numerator_; }
  int getDenom() { return denominator_; }

  //STREAMS

  // OUTPUT
  friend std::ostream& operator<<(std::ostream& out, Racional& rational){
    out << rational.numerator_ << '/' << rational.denominator_;
    return out;
  }; 

  //INPUT 
  friend std::istream& operator>>(std::istream& in, Racional& rational){
    std::string rational_str;
    std::getline(in, rational_str);

    int delimiter_pos = rational_str.find_first_of('/'); // Obtiene la posicion del '/' en el string
    int numerator = std::stoi(rational_str.substr(0, delimiter_pos)); // Obtiene lo anterior al /, es decir, el numerador
    int denominator = std::stoi(rational_str.substr(delimiter_pos + 1)); // Obtiene lo posterior al /, es decir, el denominador
  
    rational.numerator_ = numerator;
    rational.denominator_ = denominator;

    return in;
  }

  //INPUT w/string
  friend std::string& operator>>(std::string& rational_str, Racional& rational){

    int delimiter_pos = rational_str.find_first_of('/'); // Obtiene la posicion del '/' en el string
    int numerator = std::stoi(rational_str.substr(0, delimiter_pos)); // Obtiene lo anterior al /, es decir, el numerador
    int denominator = std::stoi(rational_str.substr(delimiter_pos + 1)); // Obtiene lo posterior al /, es decir, el denominador
  
    rational.numerator_ = numerator;
    rational.denominator_ = denominator;

    return rational_str;
  }

  // OPERATORS

  Racional operator +(Racional& other_rational);
  Racional operator -(Racional& other_rational);
  Racional operator *(Racional& other_rational);
  Racional operator /(Racional& other_rational);

  // COMPARATORS

  bool operator==(Racional& other_rational);
  bool operator!=(Racional& other_rational);
  bool operator<(Racional& other_rational);
  bool operator>(Racional& other_rational);
  bool operator<=(Racional& other_rational);
  bool operator>=(Racional& other_rational);


};

#endif
