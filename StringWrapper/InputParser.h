#ifndef INPUTPARSER_H_
#define INPUTPARSER_H_

#include <string>
#include <iostream>

struct Input {
  std::string line;
  char letter {};
  int repetitions {};
};

Input readInput()
{
  Input input;
  std::cin >> input.line;
  std::cin >> input.letter;
  std::cin >> input.repetitions;

  return input;
}

#endif /* INPUTPARSER_H_ */
