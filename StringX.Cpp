#include<iostream>
using namespace std;

class StringLibrary
{
    public :
    int strlenX(char[]);
    bool strcmpX(char[],char[]);
    void strrevX(char []);
    void toUpperCaseX(char[]);
    void toLowerCaseX(char[]);
    void toggleCaseX(char[]);
};

int  StringLibrary:: strlenX(char *str)
{
    int iCnt=0;
    while (*str != '\0')
    {
        iCnt++;
        *str++;
    }
    return iCnt;
}
bool StringLibrary::strcmpX(char *str1,char *str2)
{   
    int iCnt=0;
    int JCnt=0;
    if(strlenX(str1)!= strlenX(str2))
    {
        return 0;
    }

    while (*str1 != '\0')
    {

        if(*str1 != *str2)
        {
            break;
        }
        str1++;
        str2++;
    }
    if(*str1=='\0' && *str2=='\0')
    {
        return true;
    }
    else
    {
        return false;
    }
}

void StringLibrary:: toUpperCaseX(char *str)
{
    cout<<"After Converting to UpperCase:"<<endl;
    while(*str != '\0')
    {
        if(*str >='a' && *str <='z' )
        {
            *str=*str-32;
        }
        *str++;
    }
}
void StringLibrary:: toLowerCaseX(char *str)
{
    cout<<"After Converting to Lowercase:"<<endl;
    while(*str != '\0')
    {
        if(*str >='A' && *str <='Z' )
        {
            *str=*str+32;
        }
        *str++;
    }

}
void StringLibrary:: toggleCaseX(char *str)
{
    cout<<"After Toggeling the Case:"<<endl;
    while(*str != '\0')
    {
        if(*str >='a' && *str <='z' )
        {
            *str=*str-32;
        }
        else if(*str >='A' && *str <='Z' )
        {
            *str=*str+32;
        }
        *str++;
    }

}
void StringLibrary:: strrevX(char ch[])
{
    

}
int main()
{   
    char Arr1[100];
    cout<<"Enter the string:"<<endl;
    cin>>Arr1;

    StringLibrary sl;
    sl.toggleCaseX(Arr1);
    cout<<Arr1;
    
    return 0;
}
