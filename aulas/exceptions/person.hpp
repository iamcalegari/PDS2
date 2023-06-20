#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <exception>


class InvalidNameException : std::exception {
  public:
    InvalidNameException(std::string message);
    const char* what() const noexcept exception;
  private:
    std::string _message;

};



class Person{
  public:
    Person();




};


#endif
