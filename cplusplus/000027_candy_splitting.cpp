// Title: Candy Splitting
// Source: Qualification Round 2011 - Code Jam 2011
// Difficulty:
// Time Complexity:
// Topic: Bit Manipulation

/**
 * Sean and Patrick are brothers who just got a nice bag of candy from their parents. Each piece of candy has some
 * positive integer value, and the children want to divide the candy between them. First, Sean will split the candy
 * into two piles, and choose one to give to Patrick. Then Patrick will try to calculate the value of each pile, where
 * the value of a pile is the sum of the values of all pieces of candy in that pile; if he decides the piles don't
 * have equal value, he will start crying.
 *
 * Unfortunately, Patrick is very young and doesn't know how to add properly. He almost knows how to add numbers in
 * binary; but when he adds two 1s together, he always forgets to carry the remainder to the next bit. For example,
 * if he wants to sum 12 (1100 in binary) and 5 (101 in binary), he will add the two rightmost bits correctly, but
 * in the third bit he will forget to carry the remainder to the next bit:
 *
 * 1100
 * 0101
 * -----
 * 1001
 *
 * So after adding the last bit without the carry from the third bit, the final result is 9 (1001 in binary). Here are
 * some other examples of Patrick's math skills:
 *
 * 5 + 4 = 1 7 + 9 = 14 50 + 10 = 56
 *
 * Sean is very good at adding, and he wants to take as much value as he can without causing his little brother to cry.
 * If it's possible, he will split the bag of candy into two non-empty piles such that Patrick thinks that both have
 * the same value. Given the values of all pieces of candy in the bag, we would like to know if this is possible; and,
 * if it's possible, determine the maximum possible value of Sean's pile.
 *
 * Input:
 * The first line of the input gives the number of test cases, T. T test cases follow. Each test case is described in
 * two lines. The first line contains a single integer N, denoting the number of candies in the bag. The next line contains
 * the N integers Ci separated by single spaces, which denote the value of each piece of candy in the bag.
 *
 * Constraints
 *  1≤T≤100.
 *  1≤C≤10^6​​.
 *  2≤N≤1000.
 *
 * Output:
 * For each test case, output one line containing "Case #x: y", where x is the case number (starting from 1). If it is
 * impossible for Sean to keep Patrick from crying, y should be the word "NO". Otherwise, y should be the value of the
 * pile of candies that Sean will keep.
 *
 * Example 1:
 * Input:
 * 2
 * 5
 * 1 2 3 4 5
 * 3
 * 3 5 6
 *
 * Output:
 * Case #1: NO
 * Case #2: 11
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}