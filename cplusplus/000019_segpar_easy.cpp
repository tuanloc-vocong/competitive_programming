// Title: SEGPAR_easy
// Source: VNOI 05-A-01
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Cho dãy số nguyên a1,a2,…,an và số nguyên dương k. Ta gọi k-phân đoạn của dãy số đã cho là cách chia dãy số đã cho
 * ra thành k đoạn, mỗi đoạn là một dãy con gồm các phần tử liên tiếp của dãy. Chính xác hơn, một k-phân đoạn được
 * xác định bởi dãy chỉ số
 *
 * 1≤n1<n2<n3<...<nk=n
 *
 * Đoạn thứ i là dãy con ani−1+1,ani−1+2,…,ani, i=1,2,…,k. Ở đây quy ước n0=0
 *
 * Yêu cầu: Hãy xác định số M nhỏ nhất để tồn tại k-phân đoạn sao cho tổng các phần tử trong mỗi đoạn đều không vượt quá M.
 *
 * Input:
 * Dòng đầu tiên chứa hai số nguyên n và k (1≤k≤n≤15000).
 * Dòng thứ i trong số n dòng tiếp theo chứa số nguyên ai​​ (0≤ai≤30000), i=1,2,…,n.
 *
 * Các số cạnh nhau trên một dòng trong file dữ liệu cách nhau ít nhất một dấu cách.
 *
 * Output:
 * Gồm một số nguyên duy nhất là giá trị M tìm được.
 *
 * Example 1:
 * Input:
 * 10 6
 * 4
 * 1
 * 2
 * 3
 * 5
 * 1
 * 4
 * 2
 * 5
 * 2
 *
 * Output:
 * 6
 *
 * Example 2:
 * Input:
 * 9 4
 * 1
 * 1
 * 1
 * 3
 * 2
 * 2
 * 1
 * 3
 * 1
 *
 * Output:
 * 5
 *
 * Explanation:
 * Ví dụ 1:
 * Với M=6, một 6-phân đoạn có thể là: [4,1], [2,3], [5,1], [4,2], [5], [2].
 *
 * Ví dụ 2:
 * Với M=5, một 4-phân đoạn có thể là: [1,1,1], [3], [2,2], [1,3,1].
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}