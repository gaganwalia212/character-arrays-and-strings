#include<iostream>
using namespace std;
#include<cstring>

char * mystrtok(char *s,char delimiter)
{
    static char * str=nullptr;
    if(s!=nullptr)
        str=s;
    if(str==nullptr)
        return nullptr;
    char * output=new char[strlen(str)+1];
    //base condition

    int i=0;
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]!=delimiter)
        {
            output[i]=str[i];
        }

        else
        {
            str=str+i+1;
            output[i]='\0';
            return output;
        }
    }
    output[i]='\0';
    str=nullptr;
    return output;
}
int main()
{
    char ch[100]="Object oriented programming";
    char * ptr=mystrtok(ch,'.');
    cout<<ptr<<endl;
    delete ptr;
    while(ptr)
    {
        ptr=mystrtok(NULL,'.');
        cout<<ptr<<endl;
        delete ptr;
    }
}
