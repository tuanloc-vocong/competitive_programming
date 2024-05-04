// Title: Bits Of Candy
// Difficulty:
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity:
// Topic: Bit Manipulation

/**
 * Gary is obsessed with candy. Just eating it isn’t enough, he wants to know all there is to know about candy. One of his favorite
 * activities is to develop relationships of how various candy products relate to each other. He’s been doing this by hand (or rather,
 * by taste) so far, but he has realized that using a program might help him complete his task faster, allowing him to move on to
 * another delicious task.
 *
 * Each candy will be encoded with four bits. The bits represent (in order from most significant to least significant) chocolate,
 * caramel, nougat/peanut butter, peanuts. Gary has compiled the following table of candies with their respective codes.
 *
 * - 	            0000
 * Planters 	    0001
 * Reeses_Pieces 	0010
 * - 	            0011
 * Sugar_Babies 	0100
 * Pay_Day 	        0101
 * - 	            0110
 * - 	            0111
 * Hersheys 	    1000
 * Goobers 	        1001
 * Reeses_Cups 	    1010
 * Nutrageous 	    1011
 * Caramello 	    1100
 * Baby_Ruth 	    1101
 * Milky_Way 	    1110
 * Snickers 	    1111
 *
 * Now that the candies are encoded, Gary wants to try bit-wise operations on them to see how they relate to each other. The operations
 * Gary wants you to try are ~ (not), & (and), and | (or). The preceding order indicates operator precedence from highest to lowest.
 * The & and | operators are binary, while the ~ operator is unary. Some sample equations are:
 * ~Reeses_Cups = ~1010 = 0101 = Pay_Day
 * Goobers | Pay_Day = 1001 | 0101 = 1101 = Baby_Ruth
 * Caramello & Pay_Day = 1100 & 0101= 0100 = Sugar_Babies
 *
 * Input:
 * Input will begin with a single positive integer, n, on the first line, indicating the number of candy bar operations to process. Each
 * of the next n lines will contain one candy bar expression consisting of candy bar names and operators. Operators will consist only of
 * those listed above (no parentheses will be used). Candy bar names will consist of only upper- and lower-case letters and underscores.
 * Only the candies listed in the table above will be used. You may assume all expressions will be valid.
 *
 * n <= 100
 *
 * Each test case has less than or equal to 30 candy bar names
 *
 * Output:
 * Evaluate the candy expressions and print the results one per line. If the given expression evaluates to an unknown configuration (listed
 * as ‘-‘ in the table), print Unknown candy bar! for the result. Follow the format of the Sample Output
 *
 * Example 1:
 * Input:
 * 5
 * ~Reeses_Cups
 * Goobers | Pay_Day
 * Caramello & Pay_Day
 * ~Sugar_Babies & Nutrageous
 * Milky_Way & ~Hersheys
 *
 * Output:
 * Pay_Day
 * Baby_Ruth
 * Sugar_Babies
 * Nutrageous
 * Unknown candy bar!
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}