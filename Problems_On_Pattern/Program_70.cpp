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
        Display a square pattern with borders and a secondary diagonal using conditional logic
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
//  Description : It is used to display the hollow square pattern with both diagonals
//  Author :      Tushar vikas bhore
//  Date :        09/03/2026
//
/////////////////////////////////////////////////////////////////

class Pattern
{
    public : 

    int iRow = 0 , iCol = 0 , i = 0 , j = 0;

            Pattern( int iRow , int iCol )
            {
                // Initialize dimensions from constructor arguments
                this->iRow = iRow;
                this->iCol = iCol;
            }

            void DisplayPattern()
            {
                // Outer loop handles row iteration
                for( i = 1 ; i <= iRow; i++ )
                {
                    // Inner loop handles column iteration
                    for( j = 1; j <= iCol; j++ )
                    {
                        // Check boundaries and secondary diagonal condition
                        // Condition (iCol + 1) == (j + i) identifies the secondary diagonal
                        if ( i == 1 || j == 1 || j == iCol || i == iRow || ( iCol + 1 ) == ( j + i ) )
                        {
                            cout<<"*\t";
                        }
                        else
                        {
                            cout<<" \t";
                        }
                    }
                    cout<<"\n";
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

    // Validate inputs
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
//  Testcases:
//  Input : 5 5    Output : 5x5 Square with borders and secondary diagonal
//  Input : 3 3    Output : 3x3 Square with borders and secondary diagonal
//  Input : 3 4    Output : Error message
//
/////////////////////////////////////////////////////////////////