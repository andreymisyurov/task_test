#ifndef TEST_TASK_
#define TEST_TASK_

#include <array>
#include <cstdlib>
#include <future>
#include <iostream>
#include <string>
#include <vector>

#include "./Timer/timer.h"

constexpr int kBUFFER = 2048;

std::string getRandomStr(size_t num) {
  std::string result(num, 0);
  srand(time(0));
  for (auto &&el : result) el = rand() % 128;
  std::cout << result << std::endl;
  return result;
}

std::string getStr() {
  std::string result;
  getline(std::cin, result);
  return result;
}

std::string modifyStr(std::string input) {
  std::array<int, 128> base{0};
  Timer time;

  time.Start();
  for (auto &&el : input) {
    if (el > 64 && el < 92) el += 32;
    ++base[el];
  }
  std::string result;
  for (auto &&el : input) {
    if (base[el] > 1) {
      result += ")";
    } else {
      result += "(";
    }
  }
  time.Stop();
  std::cout << result << std::endl;
  time.ShowTime();
  return result;
}

#endif  // TEST_TASK_
