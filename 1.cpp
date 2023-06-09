#include <iostream>
using namespace std;

 void check(string str)
{
     if ((str[str.size()-1])!=';')
    {
        cout << "WRONG SYNTAX MISSING"<<"at after __"<<str;
        return;
    }

     else
        cout << "Syntax is correct ";"";
 }

int main()
{
	string input;
	cout<<"INPUT: ";
	getline(cin,input);
	check(input);
    return 0;

}
