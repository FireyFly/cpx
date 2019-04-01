#include <string>
#include "cpx.h"

CPX::CPX() {
  CPX("");
}

CPX::CPX(std::string value) {
  this->value = value;
}

CPX::CPX(const char *value) {
  this->value = std::string(value);
}

CPX::CPX(long value) {
  this->value = std::to_string(value);
}

CPX CPX::operator<(CPX other) {
  return CPX(this->value + "<" + other.value);
}

CPX CPX::operator>(CPX other) {
  return CPX(this->value + ">" + other.value);
}

CPX CPX::operator-() {
  return CPX("/" + this->value);
}

CPX CPX::operator-(CPX other) {
  return CPX(this->value + other.value);
}

std::string CPX::str() {
  return this->value;
}
