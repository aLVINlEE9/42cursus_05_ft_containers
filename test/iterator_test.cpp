
//#include "iterator.h"
#include "gtest/gtest.h"

namespace {
	class IteratorTest : public ::testing::Test {
	protected:
		int expected_value;
		void SetUp() override {
			expected_value = true;
		}

		void TearDown() override {

		}
	};

	TEST_F(IteratorTest, TestExample) {
		EXPECT_EQ(4, 2 + 2);
	}

	TEST_F(IteratorTest, TestExampleTwo) {
		EXPECT_EQ(10, 10);
	}
}
