#include <gtest/gtest.h>

#include "task1.h"

constexpr int kCOUNT = 100;

TEST(random_fill, little_str) { modifyStr(getRandomStr(kCOUNT)); }

TEST(test_case, 1) {
  std::string example = modifyStr("din");
  std::string result = "(((";
  EXPECT_TRUE(example == result);
}
TEST(test_case, 2) {
  std::string example = modifyStr("recede");
  std::string result = "()()()";
  EXPECT_TRUE(example == result);
}
TEST(test_case, 3) {
  std::string example = modifyStr("Success");
  std::string result = ")())())";
  EXPECT_TRUE(example == result);
}
TEST(test_case, 4) {
  std::string example = modifyStr("(( @");
  std::string result = "))((";
  EXPECT_TRUE(example == result);
}

int main() {
  ::testing::InitGoogleTest();
  return RUN_ALL_TESTS();
}
