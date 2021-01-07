/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date 7.nov.2020
 * @brief This file declares the "Help Text" constant and two functions
 *
 */

#include <iostream>

const std::string kDefaultText = "-- Números Racionales\
\nModo de uso: ./racionales fichero_entrada fichero_salida\
\nPruebe ./racionales --help para más información";

const std::string kHelpText = "-- Números Racionales\
\nModo de uso: ./racionales fichero_entrada fichero_salida\
\n\nfichero_entrada: Fichero de texto conteniendo líneas con un par de números racionales: `a/b c/d` separados por un espacio\
\nfichero_salida:  Fichero de texto que contendrá líneas con las operaciones realizadas: `a/b + c/d = n/m`";


void Usage(int argc, char** argv);
