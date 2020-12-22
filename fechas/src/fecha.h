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

#include <string>
#include <array>

class Fecha{
  private:
    int day_{};
    int month_{};
    int year_{};
    
  public:
    Fecha() = default;
    Fecha(std::string input_date){
      day_ = std::stoi(input_date.substr(0, 2)); // Get dd from dd/mm/yy
      month_ = std::stoi(input_date.substr(3, 5)); // Get mm from dd/mm/yy
      year_ = std::stoi(input_date.substr(6, 10));  // Get yy from dd/mm/yy
    };

    Fecha(int day, int month, int year) : 
      day_{day}, month_{month}, year_{year} {};

    // GETTERS

    int GetDay() const { return day_; }
    int GetMonth() const { return month_; }
    int GetYear() const { return year_; }
    std::string GetDate() const { return "" + std::to_string(day_) + "/" + std::to_string(month_) + "/" + std::to_string(year_); }

    // SETTERS

    int SetDay(const int& new_day) {  day_ = new_day; }
    int SetMonth(const int& new_month) {  month_ = new_month; }
    int SetYear(const int& new_year) {  year_ = new_year; }

    bool IsALeapYear();
    void IncreaseDay();
};

