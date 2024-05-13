// Title: Another Snake Game
// Source:
// Difficulty:
// Tags:
// Author: tuanloc-vocong
// Time Complexity:
// Space Complexity:
// Topic:

/**
 * Chắc hẳn ở đây ai cũng đã biết từng chơi qua trò chơi Snake, một trong những trò chơi xuất hiện sớm nhất và hiện có rất nhiều biến thể.
 * Trò chơi Snake của chúng ta lần này sẽ có dạng như sau.
 *
 * Snake sẽ ăn các loại trái cây có trong trò chơi, mỗi lần ăn sẽ được cộng 1 điểm. Có 26 loại trái cây, được biểu diễn bằng các chữ cái
 * Latin viết thường (từ 'a' - 'z'). Snake sẽ không ăn lại cùng một loại trái cây trong một lần ăn của nó. Nếu ăn lại một loại trái cây nó
 * đã ăn trước đó, điểm của trò chơi sẽ được tính lại từ 1. Snake không nhất thiết phải bắt đầu ăn từ đầu chuỗi, nhưng phải theo đúng thứ
 * tự có sẵn của chuỗi.
 *
 * Hãy tìm xem số điểm lớn nhất có thể đạt được trong mỗi lượt chơi sau.
 *
 * Input:
 * Dòng đầu tiên chứa một số nguyên N (1≤N≤1000)
 * N dòng tiếp theo chứa một chuỗi kí tự gồm các chữ cái từ 'a' đến 'z'.
 * Độ dài của chuỗi nằm trong khoảng từ 1 tới 100.
 *
 * Output:
 * N dòng với mỗi dòng là số điểm cao nhất có thể đạt được trong một lượt chơi.
 *
 * Example 1:
 * Input:
 * 5
 * a
 * aaa
 * abababa
 * abccbbcacb
 * aabbaabbcc
 *
 * Output:
 * 1
 * 1
 * 2
 * 3
 * 2
 *
 * Explanation:
 *      Snake chỉ có thể ăn được trái cây biểu diễn bởi chữ 'a'.
 *      Snake ăn được 3 trái cây, nhưng do chúng giống nhau, nên vẫn chỉ được tính 1 điểm.
 *      Những lần ăn 'ab' hay 'ba' đều được tính 2 điểm.
 *      Những lần ăn 'abc', 'bca', 'acb' đều được tính 3 điểm.
 *      Mặc dù có 3 loại trái cây, nhưng chỉ có các đoạn 'ab', 'ba', 'ab', và 'bc' được tính điểm.
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}