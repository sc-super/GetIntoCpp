#include<iostream,h>

#include<string.h>

void main()

{

string strq,newstr;

cout<<"Enter a string: ";

getline(cin,strq);

strcpy(newstr, strq);   //performing string copy


cout<<"The copied string is: "<< newstr;

}
