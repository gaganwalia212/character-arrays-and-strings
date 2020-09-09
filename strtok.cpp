#include<iostream>
using namespace std;
#include<cstring>//for using strtok()

//char * strtok(char* string,char* delimiter)
//break your string into tokens till it finds a delimiter
int main()
{
    //"This is a string"...delimiter can be any string

    char ch[]="This is a string";
    char * ptr=strtok(ch," ");//space as a delimiter;
    cout<<ptr<<endl;//this i.e. first token displayed

    ptr=strtok(ch," ");//space as a delimiter;
    cout<<ptr<<endl;//again "this"will be displayed

    //to display other tokens..
    //send null in place of character literal after the first call..
    //in first call you have to send the literal..after that just send null
    //the function stores the literal sent in a static array and also it keeps a pointer to the current token to be displayed
    //if null is send..value of pointer and static array is not changed and hence f=all tokens are displayed
    //if the literal comes to end then a null is returned(stopping condition)
    //so every time you send a new literal, the static variable and pointer is updated

    cout<<"Displaying all the tokens:\n";
    strcpy(ch,"This is a string");
    ptr=strtok(ch," " );//send ch for the first time
    cout<<ptr<<endl;
    //Now just send the null as value
    while(ptr!=nullptr)
    {
        ptr=strtok(NULL," ");
        cout<<ptr<<endl;
    }


}
