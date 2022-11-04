//#include <iostream>
//using namespace std;
//
//long long  get_pisano_period(long long m) {
//    long long tmp_previous = 0;
//    long long previous = 1;
//    long long current = 0;
//    long long length_of_period = 0;
//    if (m <= 1)
//        return 0;
//    for (long long i = 2; i <= m * m; i++) {
//        current = (tmp_previous + previous) % m;
//        if (current == 1 && previous == 0) {
//            length_of_period = i - 1;
//            return length_of_period;
//        }
//        tmp_previous = previous;
//        previous = current;
//    }
//}
//
//long long get_Modulo_Fibonacci_Number(long long n , long long m) {
//    long long tmp_previous = 0;
//    long long previous = 1;
//    long long current = 0;
//    if (n <= 1)
//        return n;
//    else {
//        long long length_of_period = get_pisano_period(m);
//        if (length_of_period > 0) {
//            n = n % length_of_period;
//            for (long long i = 2; i <= n; i++) {
//                current = (tmp_previous + previous )%m;
//                tmp_previous = previous;
//                previous = current;
//            }
//        }
//        return current %m ;
//    }
//}
//
//
//
//long long get_fibonacci_huge_naive(long long n, long long m) {
//    if (n <= 1)
//        return n;
//
//    long long previous = 0;
//    long long current  = 1;
//
//    for (long long i = 0; i < n - 1; ++i) {
//        long long tmp_previous = previous;
//        previous = current;
//        current = tmp_previous + current;
//    }
//
//    return current % m;
//}
//
//int main() {
//    long long n, m;
//    while(true) {
//        m = rand() % 10;
//        n = rand() % 100;
//         long result_1 = get_Modulo_Fibonacci_Number(n, m);
//         long result_2 = get_fibonacci_huge_naive(n, m);
//         if(result_1 != result_2){
//             cout << result_1 <<" not equal" << result_2 << "at n = " << n << " & m=" << m ;
//             break;
//         }
//         cout <<result_1<<"="<<result_2 <<'\n';
//    }
//}
