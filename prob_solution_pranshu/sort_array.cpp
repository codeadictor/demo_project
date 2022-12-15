#include<iostream>
using namespace std;
 
 int main(){
    
    int arr[6]={3,5,7,4,2,4};
    for(int i=0; i<5; i++)
    {
        int minIndex=i;
        for(int j=i+1; j<6; j++)
        {
            if(arr[j]<arr[minIndex])
            minIndex=j;
        }
        swap(arr[minIndex], arr[i]);
    }
 }