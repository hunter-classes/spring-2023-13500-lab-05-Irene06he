#include <iostream>
#include "funcs.h"

int main()
{
  // task a
  std::cout << "100 divide 25 is :"<<std::endl;
  isDivisibleBy(100,25) ? std::cout << "true\n\n" : std::cout << "false\n\n";
  std::cout << "35 divide 17 is :"<<std::endl;
  isDivisibleBy(35,17) ? std::cout << "true\n\n" : std::cout << "false\n\n";
  
//task b
  std::cout << "11 is a prime number, that's : "<<std::endl;
  isPrime(11) ? std::cout << "true\n\n" : std::cout << "false\n\n";
  std::cout << "15 is a prime number, that's : "<<std::endl;
  isPrime(15) ? std::cout << "true\n\n" : std::cout << "false\n\n";
  
//task c

  std::cout << "The next prime number of 14 is "<< nextPrime(14) << "\n\n";
  std::cout << "The next prime number of 17 is "<<nextPrime(17) << "\n\n";

//task d
  std::cout << "The number of prime numbers in the interval (10,18) is " << countPrimes(10, 18) << "\n\n";
  std::cout << "The number of prime numbers in the interval (3,7) is " <<countPrimes(3, 7) << "\n\n";

//task e
  std::cout << "17 is a twin prime number, that's "<<std::endl;
  isTwinPrime(17) ? std::cout << "true\n\n" : std::cout << "false\n\n";
  std::cout << "29 is a twin prime number, that's "<<std::endl;
  isTwinPrime(29) ? std::cout << "true\n\n" : std::cout << "false\n\n";
  std::cout << "30 is a twin prime number, that's "<<std::endl;
  isTwinPrime(30) ? std::cout << "true\n\n" : std::cout << "false\n\n";

//task f
  std::cout << "The next twin prime number of 17 is " << nextTwinPrime(17) << "\n\n";
  std::cout << "The next twin prime number of 31 is " << nextTwinPrime(31) << "\n\n";

//task g
  std::cout << "The largest twin prime number in the range (1,13) is "<< largestTwinPrime(1, 13) << "\n\n";
  std::cout << "The largest twin prime number in the range (5,18) is "<< largestTwinPrime(5, 18) << "\n\n";
  std::cout << "The largest twin prime number in the range (14,16) is "<< largestTwinPrime(14, 16) << "\n\n";

  return 0;

}
