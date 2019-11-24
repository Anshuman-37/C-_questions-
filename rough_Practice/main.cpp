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
class jobs{
    public :
    int end;
    int start;
};
bool compare(jobs j , jobs k)
{
    return j.end < k.start;
}
int main()
{
    vector<jobs> v1 = {{1,6},{2,5},{3,1},{4,5},{6,9}};
    
    sort(v1.begin(),v1.end(),compare);
    
    for(auto x : v1)
    {
        cout << x.start << " " << x.end <<endl;
    }
    
    return 0;
}
