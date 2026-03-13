/////////////////////////////////////////////////////////
//////
////
///     Expected Pattern : * * * * * *
///                        *         *
///                        * * * * * *
////
/////
/////////////////////////////////////////////////////////

/*
    Algorithm

    START
        Accept number of rows and columns from user
        If either value is less than or equal to zero, or rows are not equal to columns, display error
        Create object of Pattern class with rows and columns
        Display a hollow square border pattern using nested loops with conditional boundary checks
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
//  Description : It is used to display the hollow square pattern
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
                // Assigning input values to object members
                this->iRow = iRow;
                this->iCol = iCol;
            }

            void DisplayPattern()
            {
                // Outer loop for row management
                for( i = 1; i <= iRow; i++ )
                {
                    // Inner loop for column management
                    for( j = 1; j <= iCol; j++ )
                    {
                        // Check if current position is on the boundary of the square
                        // Logic: First row, last row, first column, or last column
                        if( i == 1 || j == 1 || j == iCol || i == iRow )
                        {
                            // Print asterisk for boundary positions
                            cout<<"*"<<"\t";
                        }
                        else
                        {
                            // Print space for internal positions
                            cout<<" "<<"\t";
                        }
                    }

                    // Move to the next row
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

    // Ensuring dimensions are valid and forming a square for the border logic
    if( iRow <= 0 || iCol <= 0 || iRow != iCol )
    {
        cout<< "Error : Please provide positive and non zero and equal values only.\n" ;
        return 0;
    }

    // Initialize object
    Pattern pobj( iRow , iCol );

    // Invoke display logic
    pobj.DisplayPattern();

    return 0;
} // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 3 3     Output : Hollow 3x3 Square
//  Input : 5 5     Output : Hollow 5x5 Square
//  Input : -1 5    Output : Error : Please provide positive and non zero and equal values only.
//  Input : 3 4     Output : Error : Please provide positive and non zero and equal values only.
//
/////////////////////////////////////////////////////////////////