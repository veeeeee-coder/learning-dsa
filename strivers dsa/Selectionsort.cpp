// Selection Sort Approach

// In Selection Sort, we divide the array into two parts:
// 1. Sorted part (left side)
// 2. Unsorted part (right side)

// For each position i, we assume that the element at index i
// is the minimum element.

// Then we traverse the remaining unsorted part of the array
// (from i+1 to n-1) and look for a smaller element.

// If we find a smaller element, we update the index of the
// minimum element.

// After checking all remaining elements, we swap the element
// at index i with the minimum element found.

// This places the correct smallest element at position i.

// We repeat this process for every index until the array
// becomes sorted.

//5 6 4 3 2 1

//minimum = index 0 (value 5)

//6 < 5 ? no

//4 < 5 ? yes
//minimum = 2

//3 < 4 ? yes
//minimum = 3

//2 < 3 ? yes
//minimum = 4

//1 < 2 ? yes
//minimum = 5

//swap arr[0] and arr[5]
#include<bits/stdc++.h>
using namespace std;
void selectionsort(int n,int arr []){
    int minimum;
    for(int i=0;i<n-1;i++){
        minimum=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minimum]){
                minimum=j;
            }
        }
        int temp=arr[minimum];
        arr[minimum]=arr[i];
        arr[i]=temp;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionsort(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}

//Time Complexity:O(N^2),Selection sort runs in O(N²) time in the best, average, and worst cases due to its nested loop structure. It makes approximately N(N-1)/2 comparisons, regardless of the array's initial state. Even if no swaps are needed (best case), the number of comparisons remains the same

// Space Complexity: O(1). No extra space used