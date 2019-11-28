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
void merge( int arr[] , int low , int mid , int high ){
    int i,j,k;
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int a1[n1] , a2[n2];
    for(i = 0; i < n1 ; i++){
        a1[i] = arr[low + i ];
    }
    for(j = 0 ; j < n2 ; j++){
        a2[j] = arr[mid+1+j];
    }
    i=0;j=0;k=l;
    while(i < n1 && j < n2){
        if(a1[i] <= a2[j]){
            arr[k] = a1[i];
            i++ ; k++;
        }
        else{
            arr[k] = a2[j];
            j++;k++;
        }
    }
    while(i < n1 ){
        arr[k] = a1[i];
        i++;k++;
    }
    while(j < n2 ){
        arr[k] = a2[j];
        j++;
        k++;
    }
}
void merge_sort(int arr[], int low, int high){
    //base case
    if(low < high){
        int mid = (low+(high-1))/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
int main()
{
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    merge_sort(arr,0,9);
    for(int i : 10)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
