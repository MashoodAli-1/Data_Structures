//
//  main.cpp
//  arrays-1-rotation of array
// time compelxity O(N)
// space Complexity O(1)
//
//  Created by Mashood Ali on 04/07/2022.
//

#include <iostream>
using namespace std;

int main()
{
    int *arr,size;
    cout<<"Enter  Size of array: ";
    cin>>size;
    
    arr=new int[size];
    
    cout<<"\nEnter Elements in array: ";
    for (int i=0; i<size; i++) {
        cin>>arr[i];
    }
    
    cout<<"\nIndex ===========> ";
    for (int i=0; i<size; i++) {
        cout<<i<<"  ";
    }
    cout<<"\n                   ";
    for (int i=0; i<size; i++) {
        cout<<"-  ";
    }
    cout<<"\nyour array is ===> ";
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<"  ";
    }
    
    int index1=0,index2=0;
    cout<<"\n Enter the index between ( 0  to "<<size<<" )  to reverse: ";
    cin>>index1>>index2;
    
    // rotates the array.
    do{
        swap(arr[index1], arr[index2]);
        index1++;
        index2--;
    }while(index1<index2);


    cout<<"\nyour array after Rotation is ===> ";
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<"  ";
    }
    cout<<"\n\n this code give time complexity O(N)\n\n and space complexity O(1)\n\n";
    
    
    
    return 0;
}
