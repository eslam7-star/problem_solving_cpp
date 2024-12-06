#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& arr, vector<int> left, vector<int> right) {
    int i = 0, j = 0, k = 0;
    while (i < left.size() && j < right.size() ) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < left.size()) {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < right.size()) {
        arr[k] = right[j];
        j++;
        k++;
    }
}



void mergeSort(vector<int>& arr) {
    if (arr.size() < 2) {
        return;
    }

    int mid = arr.size() / 2;
    vector<int> left(arr.begin(), arr.begin() + mid);
    vector<int> right(arr.begin() + mid, arr.end());

    
    mergeSort(left);
    mergeSort(right);

    
    merge(arr, left, right);
}




int main() {
    vector<int> arr;

    int l;
    cin>>l;
    for (size_t i = 0; i < l; i++)
    {
        int k;
        cin>>k;
        arr.push_back(k);
    }
    mergeSort(arr);
    
    for (size_t i = 0; i < l; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

    return 0;
}
