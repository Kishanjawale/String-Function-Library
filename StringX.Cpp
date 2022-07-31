#include<iostream>
using namespace std;

/*
**************************************************************
// class Name         :     StringLibrary
// Decription         :     Contains the functions for string manipulation
// Author             :     Kishan Vivek Jawale
// Date               :     6/7/2022   
**************************************************************
*/

class StringLibrary
{
    public :
    int strlenX(char[]);
    bool strcmpX(char[],char[]);
    void strrevX(char []);
    void toUpperCaseX(char[]);
    void toLowerCaseX(char[]);
    void toggleCaseX(char[]);
    void strcatX(char [],char[]);
};

/*
**************************************************************
// Function Name     :      strlenX
// Input             :      char[]
// Output            :      integer
// Decription         :     This function return the length of the string
// Author             :     Kishan Vivek Jawale
// Date               :     6/7/2022   
**************************************************************
*/

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

/*
**************************************************************
// Function Name     :      strcmpX
// Input             :      char[],char[]
// Output            :      bool
// Decription         :     This function Compare 2 strings
// Author             :     Kishan Vivek Jawale
// Date               :     6/7/2022   
**************************************************************
*/

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

/*
**************************************************************
// Function Name     :      toUpperCaseX[]
// Input             :      char[]
// Output            :      None
// Decription         :     This function convert the string into uppercase
// Author             :     Kishan Vivek Jawale
// Date               :     6/7/2022   
**************************************************************
*/

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

/*
**************************************************************
// Function Name     :      toLowerCaseX
// Input             :      char[]
// Output            :      None
// Decription         :     this function convert the string into lowercase
// Author             :     Kishan Vivek Jawale
// Date               :     6/7/2022   
**************************************************************
*/

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

/*
**************************************************************
// Function Name     :      toggleCaseX
// Input             :      char[]
// Output            :      None
// Decription         :     This function toggle the case of every letter in string
// Author             :     Kishan Vivek Jawale
// Date               :     6/7/2022   
**************************************************************
*/

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

/*
**************************************************************
// Function Name     :      strrevX
// Input             :      char[]
// Output            :      None
// Decription         :     This function reverse the string
// Author             :     Kishan Vivek Jawale
// Date               :     6/7/2022   
**************************************************************
*/

void StringLibrary:: strrevX(char *str)
{
    char *Start=str;
    char *End= str;
    char temp;
    while(*End != '\0')
    {
        *End++;
    }
    *End--;
    while (Start < End )
    {
        temp= *Start;
        *Start=*End;
        *End= temp;

        End--;
        Start++;
    }
}

/*
**************************************************************
// Function Name     :      strcatX
// Input             :      char[],char[]
// Output            :      None
// Decription         :     This function Concatinate 2 strings
// Author             :     Kishan Vivek Jawale
// Date               :     6/7/2022   
**************************************************************
*/

void StringLibrary::strcatX(char *src,char *dest)
{
   while(*dest !='\0')
    {
        dest++;
    }
    while (*src !='0')
    {
        *dest=*src;
        dest++;
        src++;
    }

    *dest='\0';
}

/*
**************************************************************
// Function Name     :      main
// Input             :      None
// Output            :      None
// Decription         :     Entry Point Function
// Author             :     Kishan Vivek Jawale
// Date               :     31/7/2022   
**************************************************************
*/

int main()
{   
    char Arr1[100];
    char Arr2[100];
    cout<<"Enter the string:"<<endl;
    cin>>Arr1;
    cout<<"Enter the string:"<<endl;
    cin>>Arr2;

    StringLibrary sl;
    sl.strcatX(Arr2,Arr1);
    cout<<Arr1;
    
    return 0;
}
