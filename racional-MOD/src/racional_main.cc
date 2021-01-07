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
#include "tools.h"
#include <fstream>

int main(int argc, char** argv){

  std::vector<Racional> all_rationals{}; // MODIFICACION
  
  Usage(argc, argv);

  std::string input_dir = argv[1]; // Fichero de entrada
  std::string output_dir = argv[2]; // Fichero de salida

  std::ifstream input_file(input_dir);
  std::ofstream output_file(output_dir);

  std::string actual_line;

  while(std::getline(input_file, actual_line)){

    Racional rational1, rational2;
    int delimiter_pos = actual_line.find_first_of(' '); // Obtiene la posicion del ' ' en el string para separar racionales
    std::string first_rational = actual_line.substr(0, delimiter_pos);
    std::string second_rational = actual_line.substr(delimiter_pos + 1);
    
    first_rational >> rational1;
    second_rational >> rational2;

    all_rationals.emplace_back(rational1); //mod
    all_rationals.emplace_back(rational2); //mod
    
    Racional sum = rational1 + rational2;
    Racional sub = rational1 - rational2;
    Racional mult = rational1 * rational2;
    Racional divided = rational1 / rational2;

    output_file << rational1 << " + " << rational2 << " = " << sum << std::endl;
    output_file << rational1 << " - " << rational2 << " = " << sub << std::endl;
    output_file << rational1 << " * " << rational2 << " = " << mult << std::endl;
    output_file << rational1 << " / " << rational2 << " = " << divided << std::endl << std::endl;
  }

  //MODIFICACION

  output_file <<  "La media de todos los racionales es: " << RacionalAverage(all_rationals) << std::endl;
  output_file <<  "La media de todos los numeradores es: " << NumeratorAverage(all_rationals) << std::endl;
  output_file <<  "La media de todos los racionales es: " << DenominatorAverage(all_rationals) << std::endl;

  output_file.close();
  input_file.close();

}
