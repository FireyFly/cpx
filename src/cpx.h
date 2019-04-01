#pragma once
#include <string>

class CPX {
private:
  std::string value;

public:
  CPX();
  CPX(std::string value);
  CPX(const char *value);
  CPX(long value);

  CPX operator<(CPX other);
  CPX operator>(CPX other);
  CPX operator-();
  CPX operator-(CPX other);

  std::string str();
};
