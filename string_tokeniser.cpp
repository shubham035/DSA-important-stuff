#include <bits/stdc++.h>
using namespace std;

/*
char * strtok(char * s , char * delimeter)
it returns a token on each subsequent calls 
on the first call function should be passed with string argument "s"
on subsequent5 calls we should pass the string argument as NULL; 
*/


int main() {
    // char s[200]
//    char s[200]  ="Today is a rainy day";

//     char * ptr=strtok(s," ");
//     cout<<ptr<<endl;
// strtok internally maintains a static array to store the state of string or character array;
    // while(ptr!=NULL){
    //     ptr=strtok(NULL," ");
    //     cout<<ptr<<endl;
    // }

/*
Today
is
a
rainy
day
*/
    cout<<"---------------------------------------------------------------"<<endl;

    char  a[100]="hello, shubham ,This is me Suman. Holla , Yes";

    char * ptr2=strtok(a,",");
    cout<<ptr2<<endl;

    while(ptr2!=NULL){
        ptr2=strtok(NULL,",");
        cout<<ptr2<<endl;
    }
    /*
    output:: 

    hello
 shubham 
This is me Suman. Holla 
 Yes
    */

    return 0;
}
