#include <iostream>
#include <iomanip>  // Để sử dụng setprecision và fixed
using namespace std;

int main() {
    double num = 1233.3456789;

    // Mặc định không có setprecision và fixed
    cout << "Mặc định: " << num << endl;

    // Sử dụng setprecision mà không có fixed
    cout << "setprecision(4) không có fixed: " << setprecision(4) << num << endl;

    // Sử dụng setprecision và fixed
    cout << fixed << "setprecision(4) với fixed: " << setprecision(4) << num << endl;

    // Sử dụng setprecision(2) với fixed
    cout << fixed << "setprecision(2) với fixed: " << setprecision(2) << num << endl;

    return 0;
}