//
//  main.cpp
//  array-4
//  Time complexity O(N)
//  Space complexity O(1)
//  Created by Mashood Ali on 20/07/2022.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    
    string str="reverse a string in O(N)";
    int l=0,h=str.length();
   while(l < h)
   {
       swap(str[l], str[h]);
    
       l++;
       h--;
       
   }
    
    cout<<"reversed_String is = "<<str<<endl;
    
    return 0;
}
