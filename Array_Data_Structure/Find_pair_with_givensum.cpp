//
//  main.cpp
//  array-2
//Given a sorted and rotated array, find if there is a pair with a given sum
// complexity O(N).
// space complexity O(1).
//  Created by Mashood Ali on 08/07/2022.
//

#include <iostream>
using namespace std;

void reversearr(int *arr,int index1,int index2);
void find_pair(int *arr,int size,int sumtofind);


int main(int argc, const char * argv[]) {
    // we assume that array is sorted and rotated to some at some point.
    
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
    
    int index2=0;
    cout<<"\n Enter the index between ( 0  to "<<size<<" )  to reverse: ";
    cin>>index2;
    reversearr(arr,0,index2-1);
    reversearr(arr,index2,size-1);
    reversearr(arr,0,size-1);
    
    cout<<"\nyour array after Rotation is ===> ";
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<"  ";
    }
    
    int sum=0;
    cout<<"\n\nEnter sum to find pair if exist: ";
    cin>>sum;
    
    find_pair(arr, size, sum);
    
    cout<<"\n\n this code give time complexity O(N)\n\n and space complexity O(1)\n\n";
    
    
    return 0;
}


void reversearr(int *arr,int index1,int index2){
    
    while (index1<index2) {
        swap(arr[index1], arr[index2]);
        index1++;
        index2--;
    }
}


void find_pair(int *arr,int size,int sumtofind){
    int i=0;
    for (i=0; i<size; i++) {
        if(arr[i]>arr[i+1])
        {break;}
    }
    
    int left=(i+1); // left point to smallest element
    int right=i; // right points to largest element.
    cout<<"\nleft= "<<left<<" right= "<<right<<endl;
    
    while(left!=right){
        if(arr[right]+arr[left]==sumtofind)
        {
            break;
        }
        else if (arr[right]+arr[left]>sumtofind)
        {
            right=(size+right-1)%size;
            
        }
        else if (arr[right]+arr[left]<sumtofind)
        {
            left=(left+1)%size;
           
        }
       
        
    }
    
    if(arr[right]+arr[left]==sumtofind)
    {
        cout<<"We have found a pair of sum = "<<sumtofind<<endl;
    }
    else
    {
        cout<<"pair does not exist\n\n";
    }
    
}
