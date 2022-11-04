
#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& v, int start, int middle , int end) {
        vector<int> temp;

        int i = start;
        int j = middle + 1;

    while (i <= middle && j <= end) {
        if (v[i] <= v[j]) {
            temp.push_back(v[i]);
            i++;
        }
        else {
            temp.push_back(v[j]);
            j++;
        }

    }
    while (i <= middle) {
        temp.push_back(v[i]);
        i++;
    }

    while (j <= end) {
        temp.push_back(v[j]);
        j++;
    }

    for (int i = start; i <= end; i++)
        v[i] = temp[i];

}


void Merge_Sort(vector<int>& v, int start, int end) {
    if (start < end) {
        int middle = (start + end) / 2;
        Merge_Sort(v, start, middle);
        Merge_Sort(v, middle + 1, end);
        merge(v, start, middle, end);
    }
}
long long max_dot_product(vector<int> a, vector<int> b) {
    Merge_Sort(a,0,a.size()-1);
    Merge_Sort(b,0,a.size()-1);
    long long result = 0;
    for (size_t i = 0; i < a.size(); i++) {
        result += ((long long) a[i]) * b[i];
    }
    return result;
}


int main() {
    size_t n;
    std::cin >> n;
    vector<int> a(n), b(n);
    for (size_t i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (size_t i = 0; i < n; i++) {
        std::cin >> b[i];
    }
    std::cout << max_dot_product(a, b) << std::endl;
}