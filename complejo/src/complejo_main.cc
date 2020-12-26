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

main() {
  Complejo complejo1{4.421, 5.0}, complejo2{7.0, -8.123};
  Complejo resultado;
  resultado = add(complejo1, complejo2);
  resultado.print();
  resultado = sub(complejo1, complejo2);
  resultado.print();
}