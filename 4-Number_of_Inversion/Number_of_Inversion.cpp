#include <algorithm>
#include <cstddef>
#include <iostream>
#include <vector>

using namespace std;

//long long get_number_of_inversions(vector<int> &a, vector<int> &b, size_t left, size_t right) {
//    long long number_of_inversions = 0;
//    if (right <= left + 1) return number_of_inversions;
//    size_t mid = left + (right - left) / 2;
//
//    number_of_inversions += get_number_of_inversions(a, b, left, mid);
//    number_of_inversions += get_number_of_inversions(a, b, mid, right);
//
//    size_t i = left;
//    size_t j = mid;
//    size_t k = left;
//
//    while (i < mid and j < right) {
//        if (a[i] > a[j]) {
//            number_of_inversions += (right - j );
//            b[k] = a[i++];
//        }
//        else {
//            b[k] = a[j++];
//            k++;
//        }
//    }
//
//    while (i < mid) {
//        b[k++] = a[i++];
//    }
//    while (j < right) {
//        b[k++] = a[j++];
//    }
//
//    return number_of_inversions;
//}

//-----------------------------------------------
// use this for stress test
long get_number_of_inversions(vector<int> a){
    int number_of_inversions =0 ;
    for(int i=0 ;i<a.size();i++){
        for(int j=i+1 ; j <a.size();j++){
            if( a[i] > a[j] ){
                number_of_inversions++;
            }
        }
    }
    return number_of_inversions;
}


int main() {
    int n;
    std::cin >> n;
    vector<int> a(n);
    for (size_t i = 0; i < a.size(); i++) {
        std::cin >> a[i];
    }
    vector<int> b(a.size());
    std::cout << get_number_of_inversions(a) << '\n';
}
