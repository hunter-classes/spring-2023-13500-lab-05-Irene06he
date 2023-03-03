#include <iostream>
#include "funcs.h"


// add functions here
// task a
bool isDivisibleBy(int n, int d) {
  if (n % d != 0) {
    return false;
  }
  return true;
}

// task b
bool isPrime(int n) {
  if (n <= 1) {
    return false;
  }
  for (int i = 2; i < n; i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}

// task c
int nextPrime(int n) {
  int i;
  for (int i = n + 1; i < 1000000; i++) {
    if (isPrime(i)) {
      return i;
    }
  }
  return i;
}

// task d
int countPrimes(int a, int b) {
  int num = 0;
  for (int i = a; i <= b; i++) {
    if (isPrime(i)) {
      num++;
    }
  }
  return num;
}

// task e
bool isTwinPrime(int n) {
  if (isPrime(n)) {
    if (isPrime(n + 2)) {
      return true;
    }
    if (isPrime(n - 2)) {
      return true;
    }
    if (isPrime(n + 2 && n - 2)) {
      return true;
    }
  }
  return false;
}

// task f
int nextTwinPrime(int n) {
  int i;
  for (int i = n + 1; i < 1000000; i++) {
    if (isTwinPrime(i)) {
      return i;
    }
  }
  return i;
}


//task g
int largestTwinPrime(int a, int b) {
  int c = -1;
  for (int i = a; i <= b; i++) {
    if (isTwinPrime(i) == true) {
      c = i;
    }
  }
  return c;
}
