#include <iostream>
#include <cstdlib>
#include <vector>
#include <map>
using namespace std;
void get_duplicate(int* arr, int n)
{
        if(n == 0)
            exit(0);
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[abs(arr[i])] >= 0)
        {
        arr[abs(arr[i])] = -arr[abs(arr[i])];
        }
        else
            cout<<abs(arr[i]) <<" ";
    }

}
//This function is not working idk .. But still there is something wrong with the algo
void get_duplicate2(int *arr ,int n)
{
    if(n > 0){
    map<int,int> m1;
    for(int i = 0 ; i< n ;i++)
    {
      m1[arr[i]]++;
    }
    for(auto m : m1)
        {
            if(m.second> 1)
                cout<<m.first<<" ";
        }
    }
    else{
        cout<<"NILL";
    }
       
}
int main()
{
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++)
    {
        cin>>arr[i];
    }
  
   // findDuplicate3(v1);
    get_duplicate2(arr,n); // Will get the duplicates in the array
    return 0;

}
