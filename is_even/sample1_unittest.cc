#include "sample1.h"
#include "gtest/gtest.h"

TEST(IsEvenTest, EvenNumbers)
{
  EXPECT_EQ(true, IsEven(2));
  EXPECT_EQ(true, IsEven(4));
  EXPECT_EQ(true, IsEven(100));
  EXPECT_EQ(true, IsEven(4096));
}

TEST(IsEvenTest, OddNumbers)
{
  EXPECT_EQ(false, IsEven(1));
  EXPECT_EQ(false, IsEven(3));
  EXPECT_EQ(false, IsEven(101));
  EXPECT_EQ(false, IsEven(4095));
}

TEST(IsEvenTest, OtherNumbers)
{
  EXPECT_EQ(true, IsEven(0));
  EXPECT_EQ(false, IsEven(-1));
  EXPECT_EQ(true, IsEven(-2));
  EXPECT_EQ(false, IsEven(-1003));
}
