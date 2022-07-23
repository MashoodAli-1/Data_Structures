//
//  main.cpp
//  array-3

// problem
//Find maximum value of Sum( i*arr[i]) with only rotations on given array allowed
//Given an array, only rotation operation is allowed on array.
//We can rotate the array as many  times as we want. Return the maximum possible
//summation of i*arr[i].

//  Created by Mashood Ali on 12/07/2022.
//


#include <iostream>
using namespace std;


int main(int argc, const char * argv[])
{
    int size=0;
    int *arr;
    int currval=0,maxvalue=0;
    int arraysum = 0;
    cout<<"Enter size of array: ";
    cin>>size;
    
    arr = new int[size];
    
    cout<<"Enter Elements: ";
    for (int i=0; i<size; i++) {
        cin>>arr[i];
    }
    
    // this loop will sum up the array
    for (int i=0 ; i<size; i++) {
        arraysum = arraysum + arr[i];
        currval = currval + (i * arr[i]);
    }
    
    // sum of array with 0 rotation
    maxvalue = currval;
    
    
    //this loop will rotate the array by one and find
    // out which rotated array has maximum sum.
    for (int j=1 ; j<size; j++) {
        currval = currval + arraysum - (size * arr[size-j]);
        if (maxvalue < currval)
        {
            maxvalue = currval;
        }
    }
    
    cout<<"\n\nmax sum of the above array is : "<<maxvalue<<"\n\n";
    
    return 0;
}
