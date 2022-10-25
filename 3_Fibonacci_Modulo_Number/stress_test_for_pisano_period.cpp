//#include <iostream>
//#include <cstdlib>
//long long get_pisano_period_code(long long m)
//{
//    long long a = 0, b = 1, c = a + b;
//    for (int i = 0; i < m * m; i++)
//    {
//        c = (a + b) % m;
//        a = b;
//        b = c;
//        if (a == 0 && b == 1)
//        {
//            return i + 1;
//        }
//    }
//}
//long long  get_pisano_period(long long m) {
//    if (m <= 1)
//        return 0;
//    long long tmp_previous = 0;
//    long long previous = 1;
//    long long current = 0;
//    long long length_of_period = 0;
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
//int main() {
//    long long m ,result_1,result_2 ;
//    while(true) {
//        m = rand() % 1000 + 2;
//        result_1 = get_pisano_period(m);
//        result_2 = get_pisano_period_code(m);
//        if(result_1 != result_2) {
//            std::cout << result_1 << " not equal to " << result_2 << "at m =" << m;
//            break;
//        }
////        std::cout<<result_1<<" = "<<result_2<<'\n';
////    }
////
////}