import unittest


def is_multiple(value, base):
    return 0 == (value % base)


def fizz_buzz(value):
    if is_multiple(value, 5) and is_multiple(value, 3):
        return "FizzBuzz"
    if is_multiple(value, 3):
        return "Fizz"
    if is_multiple(value, 5):
        return "Buzz"
    return str(value)


class FizzBuzzTest(unittest.TestCase):
    def check_fizz_buzz(self, value, expected):
        result = fizz_buzz(value)

        self.assertEqual(expected, result)

    def test_fizz_buzz__fizz_buzz_1_1(self):
        self.check_fizz_buzz(1, "1")

    def test_fizz_buzz__fizz_buzz_2_2(self):
        self.check_fizz_buzz(2, "2")

    def test_fizz_buzz__fizz_buzz_3_Fizz(self):
        self.check_fizz_buzz(3, "Fizz")

    def test_fizz_buzz__fizz_buzz_5_Buzz(self):
        self.check_fizz_buzz(5, "Buzz")

    def test_fizz_buzz__fizz_buzz_6_Fizz(self):
        self.check_fizz_buzz(6, "Fizz")

    def test_fizz_buzz__fizz_buzz_10_Buzz(self):
        self.check_fizz_buzz(10, "Buzz")

    def test_fizz_buzz__fizz_buzz_15_FizzBuzz(self):
        self.check_fizz_buzz(15, "FizzBuzz")


if __name__ == "__main__":
    print("Running all unit tests...")
    unittest.main()
