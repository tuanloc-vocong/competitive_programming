// Title: Cirarc
// Source: VOI 2006
// Difficulty:
// Tags:
// Author: tuanloc-vocong
// Time Complexity:
// Space Complexity:
// Topic: DFS - BFS

/**
 * Một hệ thống n máy tính (các máy tính được đánh số từ 1 đến n) được nối lại thành một mạng bởi m kênh nối, mỗi kênh nối hai máy
 * nào đó và cho phép truyền tin một chiều từ máy này đến máy kia. Ta gọi một mạch vòng của mạng đã cho là một dãy các máy tính và
 * các kênh nối chúng có dạng: u1,e1,u2,e2,…,uk−1,ek−1,uk,ek,u1 trong đó u1,u2,…,uk là các máy tính khác nhau trong mạng, $e_i -
 * kênh truyền tin từ máy ui​ đến máy ui+1​ (i=1,2,…,k−1), ek là kênh truyền tin từ máy uk đến máy u1. Một kênh truyền tin trong mạng
 * được gọi là kênh xung yếu nếu như bất cứ mạch vòng nào của mạng cũng đều chứa nó.
 *
 * Yêu cầu: Hãy xác định tất cả các kênh xung yếu của mạng đã cho.
 *
 * Input:
 * Dòng đầu tiên chứa 2 số nguyên dương n và m.
 * Dòng thứ i trong m dòng tiếp theo mô tả kênh nối thứ i bao gồm hai số nguyên dương ui, vi cho biết kênh nối thứ i cho phép truyền
 * tin từ máy ui đến máy vi.
 *
 * Giới hạn: n≤1000,m≤20000. Có 50% số lượng test với n≤200.
 *
 * Output:
 * Dòng đầu ghi số nguyên k là số lượng kênh xung yếu trong mạng đã cho. Ghi −1 nếu mạng không chứa kênh xung yếu.
 * Dòng thứ i trong số k dòng tiếp theo mô tả kênh nối thứ i bao gồm hai số nguyên dương ui, vi cho biết kênh nối thứ i cho phép truyền
 * tin từ máy ui đến máy vi.
 *
 * Example 1:
 * Input:
 * 2 2
 * 1 2
 * 2 1
 *
 * Output:
 * 2
 * 1 2
 * 2 1
 *
 * Example 2:
 * Input:
 * 3 3
 * 1 2
 * 2 3
 * 1 3
 *
 * Output:
 * -1
 *
 * Explanation:
 * Ví dụ 1: Mạng máy tính chứa 1 mạch vòng gồm 2 kênh (1,2) và (2,1). Cả hai kênh này đều là kênh xung yếu.
 * Ví dụ 2: Mạng máy tính không chứa mạch vòng nào, đồng nghĩa với việc không có kênh xung yếu nào.
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}