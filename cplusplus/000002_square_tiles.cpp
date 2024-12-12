// Title: Square Tiles
// Source: Round 1C 2011 - Code Jam 2011
// Difficulty:
// Time Complexity:
// Topic: Algorithmic Complexity

/**
 * You are selling beautiful geometric pictures. Each one consists of 1×1 square tiles arranged into a non-overlapping
 * grid. For example:
 *
 * .##..
 * .####
 * .####
 * .##..
 *
 * Blue tiles are represented by '#' characters, and white tiles are represented by '.' characters. You do not use other
 * colors. Not everybody likes blue though, and some customers want you to replace all the blue tiles in your picture with
 * red tiles. Unfortunately, red tiles only come in the larger 2×2 size, which makes this tricky.
 *
 * You can cover any 2×2 square of blue tiles with a single red tile, and then repeat until finished. A red tile cannot
 * overlap another red tile, it cannot cover white tiles, and it cannot go outside the picture. For example, you could add
 * red tiles to the previous picture as follows:
 *
 * ./\..
 * .\//\
 * ./\\/
 * .\/..
 *
 * Each red tile is represented here by a pair of '/' characters in the top-left and bottom-right corners, and a pair of ''
 * characters in the other two corners.
 * Given a blue and white picture, can you transform it into a red and white picture in this way?
 *
 * Input:
 * The first line of the input gives the number of test cases, T. T test cases follow.
 * Each test case begins with a line containing R and C, the number of rows and columns in a picture. The next R lines each
 * contain exactly C characters, describing the picture. As above, '#' characters represent blue tiles, and '.' characters
 * represent white tiles.
 *
 * Constraint:
 * 1≤T≤50.
 * 1≤R≤50.
 * 1≤C≤50.
 *
 * Output:
 * For each test case, first output one line containing "Case #x:" where x is the case number (starting from 1).
 * If it is possible to cover the blue tiles with non-overlapping red tiles, output R lines each containing C characters, describing
 * the resulting red and white picture. As above, red tiles should be represented by '/' and '\' characters, while white tiles are
 * represented by '.' characters. If multiple solutions are possible, you may output any of them.
 *
 * If the task is impossible, output a single line containing the text "Impossible" instead.
 *
 * Example 1:
 * Input:
 * 3
 * 2 3
 * ###
 * ###
 * 1 1
 * .
 * 4 5
 * .##..
 * .####
 * .####
 * .##..
 *
 * Output:
 * Case #1:
 * Impossible
 * Case #2:
 * .
 * Case #3:
 * ./\..
 * .\//\
 * ./\\/
 * .\/..
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}