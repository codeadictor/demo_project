
// here in this program you will enter the lenght of the an array and you will find  a sorted aarray and you also will will  the frequencey of each items in an array .

#include <iostream>
using namespace std;
void sorting(int arr[], int n){
    
 for(int i=0; i<n-1; i++)
    {
        int minIndex=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[minIndex])
            minIndex=j;
        }
        swap(arr[minIndex], arr[i]);
    }   
    
}
void print(int arr[], int m){
    for(int i=0; i<m; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main() {
    int size;
   cout<<"enter the size of the array::"<<endl;
   cin>>size;
   int arr[size];
   for(int i=0; i<size; i++)
       arr[i]=rand()%1000;// generating the number bw 1 to 1000
       cout<<"Array elements:"<<endl;
       for(int i=0; i<size; i++){
           cout<<"the array elements of the index "<<i<<"::"<<arr[i]<<endl;
       }
    sorting(arr, size);
    print(arr, size);
    
    int m=0;
    for(int i=0; i<size; i++){
        m=max(m, arr[i]);
    }
    
   int freq[m+1]={0};
   for(int i=0; i<size; i++){
    freq[arr[i]]++;
   }
   for(int i=0; i<m+1; i++){
    if(freq[i]!=0){
        cout<<i<<"->"<<freq[i]<<endl;
    }
   }

    return 0;
}



