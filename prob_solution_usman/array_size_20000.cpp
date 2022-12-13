#include<bits/stdc++.h>
using namespace std;


// random number function 

int randomNumber(){

        int random_number = 1+rand()%10000;
         return random_number;

}

////////////***First Approach***////////////
 void solve(){

    
   
    int arr[20000+1];
    srand(time(0));
    for(int i = 0;i<20000;i++){
        arr[i] = randomNumber();
    
    }


    for(int i = 0;i<20000;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

//////////////***Main Function***//////////////
int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}