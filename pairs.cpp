#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,string> p;
    // p = make_pair(2,"abc");
    p={2,"abc"}; 
    // pair<int,string> p1=p; //copying the pair p into p1 by values only
    pair<int,string> &p1=p;//copying by reference.any change in p1 will affect p values
    p1.first = 3;
    cout<<p.first<<" "<<p.second<<endl;
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int ,int>p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    // swap(p_array[0],p_array[2]);//both the arrays in the pair will be swapped
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    return 0;
}