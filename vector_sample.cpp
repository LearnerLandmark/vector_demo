#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1 = {10, 20, 30};

    for(auto& x: v1)
        cout<<x<<" ";

    return 0;
}