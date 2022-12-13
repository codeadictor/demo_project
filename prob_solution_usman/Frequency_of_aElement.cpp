#include<bits/stdc++.h>
using namespace std;

#define maxVal 20000
#define ll long long int

int randomNumber(){

        int random_number = 1+rand()%10000;
         return random_number;

}

////////////***First Approach***////////////
 void solve(){

    
   
    int arr[maxVal+1];

    // insert value in the array
    srand(time(0));
    for(int i = 0;i<maxVal;i++){
        arr[i] = randomNumber();
    
    }

    // sort the array 

     sort(arr,(arr+maxVal));
    int firstVal = arr[0];

    //*****find frequencey******//
    //count the number of duplicates and print it with its value
    int cnt = 1;
    for(int i = 1;i<maxVal;i++){
        if(firstVal == arr[i]){
            cnt++;
        }else{
            cout<<firstVal<<" - "<<cnt<<endl;
            firstVal = arr[i];
            cnt = 1;
        }
    }
    cout<<firstVal<<" - "<<cnt<<endl;
    
    
}

//////////////***Main Function***//////////////
int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}