//
//  main.cpp
//  rough_Practice
//
//  Created by Anshuman  on 24/11/19.
//  Copyright © 2019 Anshuman . All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
void merge( int arr , int low , int mid , int high ){
    int i = low ;
    int j = mid+1;
    int k = high;
    int *a1 = new int[mid - low];
    int *a2 = new int[high- mid];

    for(i = 0; i < n ; i++){
        
    }
}
void merge_sort(int arr, int low, int high){
    //base case
    if(low < high){
        int mid = (low + high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
int main()
{
 
    sort(v1.begin(),v1.end(),compare);
    for(auto x : v1)
    {
        cout << x.start << " " << x.end <<endl;
    }
    return 0;
}
