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
void merge(int arr[],int start,int mid,int end)
{
    int n1 = mid - start + 1;
    int n2 = end - mid;
    
    int *ar1 = new int[n1];
    int *ar2 = new int[n2];
    
    for(int i = 0 ;i < n1 ; i++)
    {
        ar1[i] = arr[start+i];
    }
    
    for(int j = 0 ; j < n2 ; j++)
    {
        ar2[j] = arr[mid+1+j];
    }
    
    int i = 0 , j = 0 ,k = start;
    while(i < n1 && j < n2)
    {
        if(ar1[i] < ar2[j])
        {
            arr[k] = ar1[i];
            i++;
        }
        else if(ar2[j] < ar1[i])
        {
            arr[k] = ar2[j];
            j++;
        }
        k++;
    }
    
    while(i<n1){
        arr[k] = ar1[i];
        i++; k++;
    }
    while(j<n2){
        arr[k] = ar2[j];
        j++;k++;
    }
}
void merge_sort(int arr[],int start,int end)
{
    if(start < end){
        int mid = (start+end)/2;
        
        merge_sort(arr,start,mid);
        merge_sort(arr, mid+1, end);
        merge(arr,start,mid,end);
    }
    
    return;
}
void bubble_sort(int arr[],int n)
{
    int i = 0 , j = 0;
    
    for(i = 0; i < n - 1;i++){
        for(j = i ; j < n ; j++)
        {
            if(arr [i] >= arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                
            }
        }
    }
}
void insertion_sort(int arr[], int n)
{
    int i, key, j;
      for (i = 1; i < n; i++)
      {
          key = arr[i];
          j = i - 1;
    
          while (j >= 0 && arr[j] > key)
          {
              arr[j + 1] = arr[j];
              j = j - 1;
          }
          arr[j + 1] = key;
      }
}
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int Partition(int arr[] ,int low ,int high)
{
    int pivot = arr[high];
    int i = (low - 1);
     
       for (int j = low; j <= high - 1; j++)
       {
           if (arr[j] < pivot)
           {
               i++;
               swap(&arr[i], &arr[j]);
           }
       }
       swap(&arr[i + 1], &arr[high]);
       return (i + 1);
}
void quick_sort(int arr[] , int low ,int high)
{
    if(low < high){
       int  pi = Partition(arr, low, high);
        
        quick_sort(arr , low , pi-1);
        quick_sort(arr , pi+1 , high);
    }
    
    return;
}
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr , 0 , n - 1);
    for(auto i : arr)
    {
        cout<<i<<" ";
    }
    return 0;
}
