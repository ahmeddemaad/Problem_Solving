#include <iostream>
#include <vector>
using namespace  std ;

long long Max_Pairwise_Product_faster(const vector<int> arr){
    int max_1 =0;
    int max_2=0;
    int index_1=-1;
    int n = arr.size();
    for(int i=0;i<n;i++) {
        if (max_1 < arr[i]) {
            max_1 = arr[i];
            index_1 = i;
        }
    }
    for(int j=0 ;j<n;j++){
        if(max_2<arr[j] && index_1 != j)
            max_2 =arr[j];
        }
    return max_1*max_2;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n ; i++) {
    cin >> arr[i];
    }
    long long result_2 = Max_Pairwise_Product_faster(arr);
    cout<<result_2 <<"\n" ;
    }

