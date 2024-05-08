// Title: Relation
// Difficulty:
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity:
// Topic: DFS - BFS

/**
 * Xét tập hợp gồm N đối tượng phân biệt a1,a2,…,aN​​. Với i≠j thì hai đối tượng ai, aj có thể có quan hệ cha con với nhau, điều này được thể hiện
 * trong dữ liệu nhập. Đối tượng ai​, được gọi là trưởng bối của aj​ nếu ai​​ là cha của aj​​, hoặc tồn tại một tập hợp con gồm K đối tượng ai1,ai2,…,aiK
 * của a thoả ai là cha của ai1​​, ai1​ là cha của ai2, ……, aiK là cha của aj.
 *
 * Tập hợp quan hệ cha con giữa các đối tượng của a được gọi là hợp lệ nếu mỗi đối tượng trong a có không quá 1 cha và với mọi cặp (i,j) (i≠j),
 * nếu ai là trưởng bối của aj thì aj không là trưởng bối của ai.
 *
 * Yêu cầu: Cho biết tập hợp các quan hệ cha con giữa các đối tượng trong tập hợp a, hãy kiểm tra xem các quan hệ này có hợp lệ hay không.
 *
 * Input:
 * Đề bài gồm 3 bộ dữ liệu, mỗi bộ dữ liệu mô tả dữ liệu cho 1 tập đối tượng và quan hệ trong tập đó như sau:
 * Dòng thứ nhất ghi 2 số nguyên dương N,M (2≤N≤10^5,1≤M≤10^5) là số đối tượng và số quan hệ trong tập.
 * Dòng thứ hai ghi M cặp số i,j (1≤i,j≤10^5) thể hiện ai​ là cha của aj.
 *
 * Output:
 * Ghi ra một dòng gồm 3 ký tự 1 hoặc 0 ứng với câu trả lời là hợp lệ hoặc không hợp lệ cho bộ dữ liệu tương ứng. Lưu ý: giữa các ký tự không xuống
 * dòng và không có khoảng trắng.
 *
 * Example 1:
 * Input:
 * 3 2
 * 1 2 2 3
 * 3 2
 * 1 2 3 2
 * 4 4
 * 1 2 2 3 3 4 4 1
 *
 * Output:
 * 100
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}