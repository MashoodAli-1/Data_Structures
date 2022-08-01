//
//  main.cpp
//  array-5
//  Given an array of n elements. Our task is to write a program to rearrange the array
//  such that elements at even positions are greater than all elements before it and elements
//  at odd positions are less than all elements before it.
//  Created by Mashood Ali on 24/07/2022.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int arr[]={1,2,3,4,5,6,};
    int i=0,j=5;
    int var=i+1;
    while (1)
    {
        swap(arr[var],arr[j]);
        if(i>j)
        {
            break;
        }
        swap(arr[i],arr[var]);
       // cout<<"i = "<<i<<"j = "<<j<<" var = "<<var<<endl;
        i=i+2;
        var=i+1;
        if(var==6)
        {
            var=i-1;
            swap(arr[i],arr[var]);
            break;
        }
        j--;

    }

    for (int i=0; i<6; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
