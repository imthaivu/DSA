#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
// 1. Đệ quy đơn giản (Simple Recursion)
// Đề bài: Viết hàm đệ quy để tính tổng các chữ số của một số nguyên dương n.

// cpp
// Copy code
int sumOfDigits(int n)
{
    if (n == 0)
        return 0;
    return n % 10 + sumOfDigits(n / 10);
}
// 2. Đệ quy nhiều nhánh (Multiple Recursion)
// Đề bài: Viết hàm đệ quy để tìm giá trị tối thiểu của số lượng bước cần để chuyển n thành 1, với các bước giảm n xuống một nửa, chia cho 3 hoặc trừ đi 1.

// cpp
// Copy code
int minSteps(int n)
{
    if (n == 1)
        return 0;
    int cnt1 = INT_MAX, cnt2 = INT_MAX, cnt3 = INT_MAX;
    if (n % 2 == 0)
        cnt1 = 1 + minSteps(n / 2);
    if (n % 3 == 0)
        cnt2 = 1 + minSteps(n / 3);
    cnt3 = 1 + minSteps(n - 1);
    return min(cnt1, min(cnt2, cnt3));
}
// 3. Đệ quy đuôi (Tail Recursion)
// Đề bài: Viết hàm đệ quy đuôi để tính tổng của các số nguyên dương từ 1 đến n.

// cpp
// Copy code
int sumTailRec(int n, int acc = 0)
{
    if (n == 0)
        return acc;
    return sumTailRec(n - 1, acc + n);
}
// 4. Đệ quy không đuôi (Non-tail Recursion)
// Đề bài: Viết hàm đệ quy để tìm số Fibonacci thứ n mà không sử dụng đệ quy đuôi.

// cpp
// Copy code
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
// 5. Đệ quy gián tiếp (Indirect Recursion)
// Đề bài: Viết hai hàm đệ quy gián tiếp để in ra các số từ n đến 1, lần lượt cho số chẵn và số lẻ.

// cpp
// Copy code
void printOdd(int n);

void printEven(int n)
{
    if (n <= 0)
        return;
    if (n % 2 == 0)
        cout << n << " ";
    printOdd(n - 1);
}

void printOdd(int n)
{
    if (n <= 0)
        return;
    if (n % 2 != 0)
        cout << n << " ";
    printEven(n - 1);
}
// 6. Đệ quy lồng nhau (Nested Recursion)
// Đề bài: Viết hàm đệ quy lồng nhau để tính giá trị của hàm Ackermann.

// cpp
// Copy code
int ackermann(int m, int n)
{
    if (m == 0)
        return n + 1;
    if (n == 0)
        return ackermann(m - 1, 1);
    return ackermann(m - 1, ackermann(m, n - 1));
}
// 7. Đệ quy tuyến tính (Linear Recursion)
// Đề bài: Viết hàm đệ quy để tìm tổng các phần tử trong mảng.

// cpp
// Copy code
int sumArray(int arr[], int n)
{
    if (n <= 0)
        return 0;
    return arr[n - 1] + sumArray(arr, n - 1);
}
// 8. Đệ quy đa nhánh (Tree Recursion)
// Đề bài: Viết hàm đệ quy để tính số bước tối thiểu để biến đổi n thành 1 với các bước chia cho 2, chia cho 3 hoặc trừ đi 1.

// cpp
// Copy code
int minSteps(int n)
{
    if (n == 1)
        return 0;
    int cnt1 = INT_MAX, cnt2 = INT_MAX, cnt3 = INT_MAX;
    if (n % 2 == 0)
        cnt1 = 1 + minSteps(n / 2);
    if (n % 3 == 0)
        cnt2 = 1 + minSteps(n / 3);
    cnt3 = 1 + minSteps(n - 1);
    return min({cnt1, cnt2, cnt3});
}
// 9. Đệ quy hỗn hợp (Mixed Recursion)
// Đề bài: Viết hàm đệ quy để tính tổng các chữ số chẵn của một số nguyên dương n, kết hợp đệ quy đơn giản và đệ quy nhiều nhánh.

// cpp
// Copy code
int sumEvenDigits(int n)
{
    if (n == 0)
        return 0;
    int lastDigit = n % 10;
    if (lastDigit % 2 == 0)
        return lastDigit + sumEvenDigits(n / 10);
    return sumEvenDigits(n / 10);
}
// 10. Đệ quy kết hợp (Mutual Recursion)
// Đề bài: Viết ba hàm sử dụng đệ quy kết hợp để in ra các ký tự từ 'A' đến 'C' theo thứ tự giảm dần.

// cpp
// Copy code
void printC(int n);

void printA(int n)
{
    if (n <= 0)
        return;
    cout << 'A' << " ";
    printB(n - 1);
}

void printB(int n)
{
    if (n <= 0)
        return;
    cout << 'B' << " ";
    printC(n - 1);
}

void printC(int n)
{
    if (n <= 0)
        return;
    cout << 'C' << " ";
    printA(n - 1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    return 0;
}