#include <iostream>
#include <cstdlib>
#include <vector>
using namespace  std ;

long long Max_Pairwise_Product_slow(const vector<int> arr ){
    int max =0;
    int n = arr.size();
    for(int i=0;i<n;i++){
        for(int j=1 ;j<n;j++){
            if(max < arr[i]*arr[j] && i != j) {
                max = arr[i] * arr[j];
            }
        }
    }
    return max;
}

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



//int main() {
//    int n =4;
//    int arr[4]={1,2,3,4};
//    cout<<Max_Pairwise_Product_slow(4,arr);
//    cout<<"\n";
//    cout<<Max_Pairwise_Product_faster(4,arr);
//}

int main(){
    while(true){
        int n= rand() %10 + 2;
        cout<<n<<"\n";    // to find when the the test fails
        vector <int> arr;
        for (int i = 0; i < n ; i++) {
            arr.push_back(rand()%100000); //we use it to generate random numbers from 0 to 999,999
        }
        for (int i = 0; i < n ; i++) {
            cout<< arr[i]<<' ';
        }
        cout<<'\n';
        long long result_1 = Max_Pairwise_Product_slow(arr);
        long long result_2 = Max_Pairwise_Product_faster(arr);
        if (result_1 != result_2) {
            cout << "wrong solution" << result_1 << result_2;
            break;
        }
        else{
            cout<< "Correct\n" ;
        }
    }
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n ; i++) {
        cin >> arr[i];
    }
    long long result_1 = Max_Pairwise_Product_slow(arr);
    long long result_2 = Max_Pairwise_Product_faster(arr);
    cout<< result_1 << result_2 <<"\n" ;
}


