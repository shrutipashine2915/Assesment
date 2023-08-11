
#include <bits/stdc++.h>
using namespace std;
 

void printSubStr(string str, int low, int high)
{
    for (int i = low; i <= high; ++i)
        cout << str[i];
        
}
 

int Palindromelen(string str)
{
    
    int n = str.size();
 
    
    int max = 1, start = 0;
 
    
    for (int i = 0; i < str.length(); i++) {
        for (int j = i; j < str.length(); j++) {
            int flag = 1;
 
            
            for (int k = 0; k < (j - i + 1) / 2; k++)
                if (str[i + k] != str[j - k])
                    flag = 0;
 
            
            if (flag && (j - i + 1) > max) {
                start = i;
                max = j - i + 1;
            }
        }
    }
    
     
      printSubStr(str, start, start + max - 1);
      return 0;
}
 

int main()
{
    string str1="stringmadam";

    cout << Palindromelen(str1) << endl; 
    return 0;
}
