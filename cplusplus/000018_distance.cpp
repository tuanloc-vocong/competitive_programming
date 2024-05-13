// Title: Distance
// Source: PTNK 14-15
// Difficulty:
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity:
// Topic:

/**
 * Hai xâu kí tự được gọi là bạn bè của nhau nếu ta có thể sắp xếp các ký tự của một xâu để được xâu còn lại. Ví dụ: xâu ‘banbe’
 * là bạn bè của xâu ‘beban’, tuy nhiên xâu ‘laptrinh’ không phải là bạn bè của xâu ‘thuattoan’ (vì chữ ‘t’ chỉ xuất hiện 1 lần
 * trong ‘laptrinh’ nhưng xuất hiện đến 3 lần trong xâu ‘thuattoan’).
 *
 * Khoảng cách giữa hai xâu ký tự là số ký tự ít nhất cần phải xóa (trên cả hai xâu) để hai xâu còn lại là bạn bè của nhau. Ví dụ,
 * khoảng cách giữa hai xâu ‘ptnk’ và ‘thpt’ là 4, còn khoảng cách giữa hai xâu ‘tin’ và ‘hoc’ là 6.
 *
 * Yêu cầu: Hãy tính khoảng cách giữa hai xâu cho trước.
 *
 * Input:
 * Dòng thứ nhất chứa xâu kí tự S (∣S∣≤10^6).
 * Dòng thứ hai chứa xâu kí tự T (∣T∣≤10^6).
 *
 * Output:
 * In ra số kí tự cần xóa ở cả hai xâu để đạt được 2 xâu bạn bè.
 *
 * Example 1:
 * Input:
 * ptnk
 * thpt
 *
 * Output:
 * 4
 *
 * Example 2:
 * Input:
 * tin
 * hoc
 *
 * Output:
 * 6
 *
 * Explanation:
 * Ví dụ 1: Chúng ta sẽ xóa 2 kí tự “n” và “k” ở xâu “ptnk” và 2 kí tự “t” và “h” ở xâu “thpt”. Hai xâu chúng ta nhận được là “pt”
 * và “tp” là hai xâu bạn bè. Số kí tự cần xóa là 4.
 *
 * Ví dụ 2: Chúng ta sẽ xóa cả 3 kí tự ở xâu “tin” và 3 kí tự ở xâu “hoc” để nhận được 2 xâu rỗng. Hai xâu rỗng cũng là 2 xâu bạn bè.
 * Số kí tự cần xóa chính là 6.
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}