#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[100]="Lamborghini 350 GT ";
    char str2[100]="Bugatti Chiron";

    // strcpy(str,str2);
    //Copy string from source string(str2) to destine string(str)
    
    // strcat(str,str2);
    //Concatenate the two strings(str+str2) and store it into string(str) 

    cout<<strcmp(str,str2)<<endl;
    /*Compare the two string's first letter:
    if first letter of first stirng is ascii value is less than the first letter of second string it wiil return -ve value
    if first letter of first stirng is ascii value is greater than the first letter of second string it wiil return +ve value
    */

    return 0;
}
