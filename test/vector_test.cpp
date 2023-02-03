
#include "vector.hpp"
#include "gtest/gtest.h"

namespace {
class VectorTest : public ::testing::Test {
 protected:
  void SetUp() override {
  }
  void TearDown() override {
  }
};

TEST_F(VectorTest, InitializeTest) {
  ft::vector<int> vec_1(10, 2);
  EXPECT_EQ(4, 2 + 2);
}

TEST_F(VectorTest, TestExample) {
  EXPECT_EQ(10, 10);
}
}
