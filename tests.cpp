#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
//task a

TEST_CASE("Division") {
  CHECK(isDivisibleBy(100,25) == true);
  CHECK(isDivisibleBy(35,17) == false);
}

//task b
TEST_CASE("check if is prime") {
  CHECK(isPrime(2) == true);
  CHECK(isPrime(3) == true);
  CHECK(isPrime(4) == false);
}

//task c
TEST_CASE("Next prime number") {
   CHECK(nextPrime(14) == 17);
   CHECK(nextPrime(17) == 19); 
}

//task d
TEST_CASE("count prime number") {
   CHECK(countPrimes(3,7) == 3);
   CHECK(countPrimes(10,18) == 3); 
}

//task e
TEST_CASE("check if is twin number") {
   CHECK(isTwinPrime(17) == true);
   CHECK(isTwinPrime(30) == false); 
}

//task f
TEST_CASE("look for next twin prime number") {
   CHECK(nextTwinPrime(17) == 19);
   CHECK(nextTwinPrime(31) == 41); 
}

//task g
TEST_CASE("look for largest twin prime number") {
   CHECK(largestTwinPrime(1, 31) == 31);
   CHECK(largestTwinPrime(5, 18) == 17);
   CHECK(largestTwinPrime(14, 16) == -1); 
}