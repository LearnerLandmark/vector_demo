#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v1 = {10, 20, 30};

    for(auto& x: v1)
        cout<<x<<" ";

    for_each(v1.begin(), v1.end(), [](const auto& x) {cout<<x<<" ";});
    return 0;
}