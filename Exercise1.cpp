#include <iostream>
#include <string>
using namespace std;
int main()
{
    int* pInteger = new  int(4); // dynamically allocates memory to an integer
     string* const pString = new string[25];//dynamically allocates memory to a string
    int  a;
     string c;
    cout << "Enter an integer value: " << "\n";//prompts user to enter an integer value
    cin >> a;//assigns the value to a
    cout << "What is your name? " << "\n";//prompts user to enter a string 
    cin >> c;// assigns the string literal to c
    *pInteger = a; // assigns the value a indirectly to memory
    *pString = c;// assigns the string literal indirectly to memory
    cout << "\n\n" <<"The value you entered is " << *pInteger<< endl; // outputs the value to console
    cout << "Your name is " << *pString << endl;//outputs your name on the console
    delete pInteger;//  delete keyword deallocates memory
    delete pString;
    return 0;


}