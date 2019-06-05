# Sieve-of-Eratosthenes

Finds prime numbers, because i throught this would be fun to code.

Uses Sieve of Eratosthenes to find primes between 2 and the number passed in on the command line

## build

use linux, I suppose this will work else where, but have not tried.

easy
~~~Bash
g++ main.cpp
~~~

Added build script because i was tired of adding the `-o get-primes`
~~~Bash
./build.sh
~~~

## Running

Also easy, can use any number that can be represented by a 32 bit integer.
~~~Bash
./get-primes 100
~~~
