#include<bits/stdc++.h>
using namespace std;


////////////***First Approach***////////////
 void solve(){
    cout<<"Here is your random Number := ";
    srand(time(0));
    
  
    unsigned int random_number = 1+rand()%10000;
    cout<<random_number<<endl;
    
    
}

//////////////***Main Function***//////////////
int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}