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


#include <iostream>
#include "tools.h"    

void Usage(int argc, char *argv[]) {
  if (argc == 1) {
    std::cout << kDefaultText << std::endl;
    exit(EXIT_SUCCESS);
  }

  std::string parameter{argv[1]};

  if (parameter == "--help") {
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

