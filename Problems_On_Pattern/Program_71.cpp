/////////////////////////////////////////////////////////
//////
////                       *   *   *   *   *
///     Expected Pattern : *           *   *
//                         *       *       *
///                        *   *           *
////                       *   *   *   *   *
/////
/////////////////////////////////////////////////////////

/*
    Algorithm

    START
        Accept number of rows and columns from user
        If either value is less than or equal to zero, or rows are not equal to columns, display error
        Create object of Pattern class with rows and columns
        Display a square pattern with borders and a secondary diagonal using conditional logic in nested while loops
    STOP
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

/////////////////////////////////////////////////////////////////
//
//  Class Name : Pattern
//  Description : It is used to display the hollow square pattern with a secondary diagonal
//  Author :      Tushar vikas bhore
//  Date :        09/03/2026
//
/////////////////////////////////////////////////////////////////

class Pattern
{
    public : 

    int iRow = 0 , iCol = 0 , i = 0 , j = 0 ;

            Pattern( int iRow , int iCol )
            {
                // Initialize dimensions from constructor arguments
                this->iRow = iRow;
                this->iCol = iCol;
            }

            void DisplayPattern()
            {
                // Reset outer loop counter
                i = 1 ;
                
                // Outer loop handles row iteration
                while( i <= iRow )
                {
                    // Reset inner loop counter
                    j = 1 ;
                    
                    // Inner loop handles column iteration
                    while( j <= iCol )
                    {
                        // Check boundary conditions and secondary diagonal condition
                        // Secondary diagonal condition: (iCol + 1) == (j + i)
                        if ( i == 1 || j == 1 || j == iCol || i == iRow || ( iCol + 1 ) == ( j + i ) )
                        {
                            cout<<"*\t";
                        }
                        else
                        {
                            cout<<" \t";
                        }
                        j++;
                    }

                    // Move cursor to new line after row completion
                    cout<<"\n";
                    i++;
                }
            }
}; // End of Pattern class



/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iRow = 0 , iCol = 0;

    cout<< "Enter the number of rows :\t" ;
    cin>> iRow;

    cout<< "Enter the number of coloms :\t";
    cin>> iCol;

    // Validate inputs to ensure positive, non-zero, and square dimensions
    if( iRow <= 0 || iCol <= 0 || iRow != iCol )
    {
        cout<< "Error : Please provide positive and non zero and equal values only.\n" ;
        return 0;
    }

    // Create object of the class
    Pattern pobj( iRow , iCol );

    // Display the pattern
    pobj.DisplayPattern();

    return 0;
} // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 5 5     Output : 5x5 Square with hollow center and secondary diagonal
//  Input : 3 3     Output : 3x3 Square with hollow center and secondary diagonal
//  Input : 3 4     Output : Error message
//  Input : -2 2    Output : Error message
//
/////////////////////////////////////////////////////////////////