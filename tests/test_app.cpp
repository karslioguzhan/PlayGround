#include "core.h"
#include <gtest/gtest.h>

// Example test
TEST(CoreTest, HelloTest)
{
  testing::internal::CaptureStdout();
  Core::printHelloWorld();
  std::string OutputString = testing::internal::GetCapturedStdout();
  EXPECT_EQ(OutputString, "Hello World!\n");
}

// Main function for GoogleTest
int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}