#include <iostream>
int get_fibonacci_last_digit_faster(int n) {
    if (n <= 1)
        return n;
    int tmp_previous= 0;
    int previous = 1;
    int current  = 0;

    for (int i = 2; i <= n; i++) {
        current = tmp_previous %10 + previous %10 ;
        tmp_previous = previous ;
        previous = current %10 ;
    }
    return current %10 ;
}

int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_naive(n);
    int result = get_fibonacci_last_digit_faster(n);
    std::cout << c << '\n';
    std::cout << result << '\n';
}