# Solutions-Problems-C-

You are given a sequence of chars consisting of () and [].

A string of type is said to be correct:

1- if its an empty string.

2- if the string A is correct, (A) and [A] are correct.

3- if the strings A and B are correct, the concat AB is correct.


the string contains at most 10 000 chars.

Example: [()] is correct, ([)] is not correct, (( is not correct.

Implement the method check(string seq) to check the correctness of this type.

check returns true if its correct also return false.

to compile this program on Linux: 

C++11 SOLUTION

$ g++ -std=c++11 -o Sequence_paretheses Sequence_paretheses.cpp


