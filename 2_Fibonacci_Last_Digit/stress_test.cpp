
#include <iostream>
#include <cstdlib>
int get_fibonacci_last_digit_faster(int n) {
    if (n <= 1)
        return n;
 int tmp_previous= 0;
    int previous = 1;
    int current  = 0;

    for (int i = 2; i <= n; i++) {
        current = tmp_previous %10 + previous %10 ;
        tmp_previous = previous ;
        previous = current;
    }
    return current %10 ;
}

long long get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}

int main() {
    long long n = 0 ;
    while(true) {
        n = rand() %10  + 2;
        long result_naive = get_fibonacci_last_digit_naive(n);
        long result_fast = get_fibonacci_last_digit_faster(n);
        if (result_naive != result_fast) {
            std::cout << n << '\n';
            std::cout << result_naive << ' ' << result_fast;
            break;
        } else
            std::cout << n <<'\n';
            std::cout << result_naive << "=" << result_fast <<"\n";
    }
    }
//
// the test fails at naive function at huge numbers due to summation of very huge number
// that shows the efficiency of the fast code over the other one
