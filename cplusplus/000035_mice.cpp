// Title: Mice
// Source: Codeforces
// Difficulty:
// Time Complexity:
// Topic: Two Pointers

/**
 * Modern researches has shown that a flock of hungry mice searching for a piece of cheese acts as follows: if there
 * are several pieces of cheese then each mouse chooses the closest one. After that all mice start moving towards the
 * chosen piece of cheese. When a mouse or several mice achieve the destination point and there is still a piece of
 * cheese in it, they eat it and become well-fed. Each mice that reaches this point after that remains hungry. Moving
 * speeds of all mice are equal.
 *
 * If there are several ways to choose closest pieces then mice will choose it in a way that would minimize the number
 * of hungry mice. To check this theory scientists decided to conduct an experiment. They located N mice and M pieces
 * of cheese on a cartesian plane where all mice are located on the line y=Y0​​ and all pieces of cheese — on another
 * line y=Y1​​. To check the results of the experiment the scientists need a program which simulates the behavior of a
 * flock of hungry mice.
 *
 * Write a program that computes the minimal number of mice which will remain hungry, i.e. without cheese.
 *
 * Input:
 * The first line of the input contains four integer numbers N (1≤N≤10^5), M (0≤M≤10^5), Y0​ (0≤Y0≤10^7), Y1​​ (0≤Y1≤10^7).
 * The second line contains a strictly increasing sequence of N numbers — x coordinates of mice. Third line contains a
 * strictly increasing sequence of M numbers — x coordinates of cheese. All coordinates are integers and do not exceed
 * 10^7 by absolute value.
 *
 * Output:
 * The only line of output should contain one number — the minimal number of mice which will remain without cheese.
 *
 * Example 1:
 * Input:
 * 3 2 0 2
 * 0 1 3
 * 2 5
 *
 * Output:
 * 1
 *
 * Explanation:
 * All the three mice will choose the first piece of cheese. Second and third mice will eat this piece. The first one will
 * remain hungry, because it was running towards the same piece, but it was late. The second piece of cheese will remain uneaten.
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}