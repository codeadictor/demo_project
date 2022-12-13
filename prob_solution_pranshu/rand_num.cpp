
#include <iostream>
#include<cstdlib>
using namespace std;


int main() {
    int range;
    range=1000;
    srand(time(0));
    cout<<"the random number between 1 to 1000 is : "<<rand()%range;
    return 0;
}
// here rand() function will generalte a random number and modulus of that rand number by the help of the range will return us a random number .


//here are the some  random numbers in a range 

/*
 #include <iostream>
#include<cstdlib>
using namespace std;


int main() {
    int n=5;
    int range;
    range=1000;
    for(int i=0; i<n; i++)
    {
    cout<<"the random number between 1 to 100 is : "<<rand()%range<<endl;
    }
    return 0;
}
*/