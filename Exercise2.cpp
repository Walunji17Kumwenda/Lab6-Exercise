#include <iostream>
using namespace std;
int main()

{
   unsigned int row;
   unsigned int column;
   //prompts user to enter dimension
   cout << "Enter the dimension of the array \n Row: ";
   cin >> row;
   cout << "\n" << "Column: " ;
   cin >> column;
//checks if the dimension are less than 3
    if((row > 3) && (column > 3))
    {
        cout << "Warning enter dimension less than 3!"<<endl<<"Please try again." << endl;
        cout << "Enter the dimension of the array \n Row: ";
        cin >> row;
        cout << "\n" << "Column: " ;
        cin >> column;
    }
//dynamically allocates memory 
    double** pIntegerArray = new double*[row];
    for(int j =0; j <row;j++)
    { 
        pIntegerArray[j] = new double[column];
    }
    //assigns input to the elements of array
    int count =1.99;
    for(int i = 0; i < row; i++)
    {
        for(int j= 0; j<column ; j++)
        {
            pIntegerArray[i][j] = count++;
        }
    }
    //outputs the values of the elements
    cout << "The values of the array of dimensions " << row << " by " << column << " are: \n";
      for (int i = 0; i < row; i++)
      {
        for(int j = 0; j < column ; j++)
        {
            cout << pIntegerArray[i][j] << ", ";
        }
      }
      //Deallocates the dynamically allocated memory
      for(int i = 0; i < row; i++)
      {
        delete[] pIntegerArray[i];
      }
      delete[] pIntegerArray;
      return 0;
   
}
