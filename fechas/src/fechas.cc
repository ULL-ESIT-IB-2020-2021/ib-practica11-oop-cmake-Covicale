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
#include "tools.h"
#include <iostream>
#include <fstream>

int main(int argc, char** argv){

    Usage(argc, argv);

    std::string input_date = argv[1]; // dd/mm/yy
    std::string output_file = argv[3]; // output file

    int many_dates = std::stoi(argv[2]); // n dates

    Fecha fecha {input_date};

    std::ofstream file;
    file.open(output_file, std::ios::out);

    for (int i = 0; i < many_dates; ++i){
        fecha.IncreaseDay(); // Incrementa el dia
        file << fecha.GetDate() << std::endl;
    }

    file.close();

    /*char bolean = fecha.IsALeapYear() ? 'T' : 'F';

    std::cout << bolean << std::endl; */
}
