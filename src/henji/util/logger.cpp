#include "henji/util/logger.h"
#include <iostream>

henji::Logger::Logger() {}

void henji::Logger::log(const char *message) {
  std::cout << message << std::endl;
}
