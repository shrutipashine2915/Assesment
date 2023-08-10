/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
vector<int> problem2(vector<int>& a) 
{
    vector<int> res;
    for(int i=0;i<a.size();i++)
    {
        int store=a[i],count=0;
        for(int j=0;j<a.size();j++)
        {
            if(a[j]<store) 
            {count++;}
        }
        res.push_back(count);
    }
    return res;
}
int main() 
{
    vector<int> a{8,1,2,2,3 }; 
    vector<int> res=problem2(a);
    
    for(auto store:res) cout<<store<<" ";
    cout<<endl;
    
    return 0;  
}
