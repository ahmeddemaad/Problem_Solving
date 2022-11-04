#include <iostream>
#include <vector>
using namespace std;

int first_occurrence_binary_search(vector<int> input ,int left ,int right ,int middle_element){
    int middle_index = (left+right)/2 ;
    if(input[middle_index] == middle_element && ( middle_index == 0 || input[middle_index-1] < middle_element))
        return middle_index ;
    else if(input[middle_index] >= middle_element){
        right=middle_index-1;
        return first_occurrence_binary_search(input,left,right,middle_element);
    }
    else{
        left=middle_index+1;
        return first_occurrence_binary_search(input,left,right,middle_element);
    }
}

int last_occurrence_binary_search(vector<int> input ,int left ,int right ,int middle_element){
    int middle_index = (left+right)/2 ;
    if(input[middle_index] == middle_element && ( middle_index == input.size()-1 || input[middle_index+1] > middle_element))
        return middle_index ;
    else if(input[middle_index] > middle_element){
        right=middle_index-1;
        return last_occurrence_binary_search(input,left,right,middle_element);
    }
    else{
        left=middle_index+1;
        return last_occurrence_binary_search(input,left,right,middle_element);
    }
}

int main() {
    int n ;
    int target;
    cin >> n ;
    vector<int> input(n);
    for ( int i =0 ; i < n ; i++){
        cin >> input[i];
    }
    cin >> target ;
    cout <<"first Occurrence of the target is : " << first_occurrence_binary_search(input,0,n-1,target)<<'\n';
    cout << "last Occurrence of the target is : " << last_occurrence_binary_search(input,0,input.size()-1,target)<<'\n';
    return 0;
}
