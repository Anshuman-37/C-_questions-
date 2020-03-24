#include <iostream>
#include <cstdlib>
#include <vector>
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
int findDuplicate3(vector<int>& nums)
{
    if (nums.size() > 1)
        {
        int slow = nums[0];
        int fast = nums[nums[0]];
        while (slow != fast)
            {
            slow = nums[slow];
            fast = nums[nums[fast]];
            }
        
        fast = 0;
        while (fast != slow)
            {
            fast = nums[fast];
            slow = nums[slow];
            }
        return slow;
        }
    return -1;
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
    vector<int> v1;
    for(int i = 0 ; i < n ; i++)
    {
        v1[i] = arr[i];
    }
    findDuplicate3(v1);
   // get_duplicate(arr,n); // Will get the duplicates in the array
    return 0;

}
