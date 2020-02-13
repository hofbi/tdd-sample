#include <string>
#include <gtest/gtest.h>

int isMultiple(int value, int base)
{
    return 0 == (value % base);
}

std::string fizzBuzz(int value)
{
    if (isMultiple(value, 5) && isMultiple(value, 3))
    {
        return "FizzBuzz";
    }
    if (isMultiple(value, 3))
    {
        return "Fizz";
    }
    if (isMultiple(value, 5))
    {
        return "Buzz";
    }
    return std::to_string(value);
}

void checkFizzBuzz(int value, const std::string& expected)
{
    const auto result = fizzBuzz(value);

    EXPECT_EQ(expected, result);
}

TEST(FizzBuzzTest, fizzBuzz_1_1)
{
    checkFizzBuzz(1, "1");
}

TEST(FizzBuzzTest, fizzBuzz_2_2)
{
    checkFizzBuzz(2, "2");
}

TEST(FizzBuzzTest, fizzBuzz_3_Fizz)
{
    checkFizzBuzz(3, "Fizz");
}

TEST(FizzBuzzTest, fizzBuzz_5_Buzz)
{
    checkFizzBuzz(5, "Buzz");
}

TEST(FizzBuzzTest, fizzBuzz_6_Fizz)
{
    checkFizzBuzz(6, "Fizz");
}

TEST(FizzBuzzTest, fizzBuzz_10_Buzz)
{
    checkFizzBuzz(10, "Buzz");
}

TEST(FizzBuzzTest, fizzBuzz_15_FizzBuzz)
{
    checkFizzBuzz(15, "FizzBuzz");
}
