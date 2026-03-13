/////////////////////////////////////////////////////////
//////
////
///     Expected Pattern : 5    4    3    2    1
///                        5    4    3    2
///                        5    4    3
///                        5    4
///                        5
////
/////
/////////////////////////////////////////////////////////

/*
    Algorithm

    START
        Accept number of rows and columns from user
        If either value is less than or equal to zero, or rows are not equal to columns, display error
        Create object of Pattern class with rows and columns
        Display an inverted right-angled numeric triangle descending from iCol using nested for loops
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
//  Description : It is used to display the inverted descending numeric triangle
//  Author :      Tushar vikas bhore
//  Date :        09/03/2026
//
/////////////////////////////////////////////////////////////////

class Pattern
{
    public : 

    int iRow = 0 , iCol = 0 , i = 0 , j = 0 , k = 0;

            Pattern( int iRow , int iCol )
            {
                // Initializing member variables
                this->iRow = iRow;
                this->iCol = iCol;
            }

            void DisplayPattern()
            {
                // Outer loop handles the number of rows
                for( i = 1 ; i <= iRow; i++ )
                {
                    // Inner loop initializes 'k' to iCol (start value) and decrements it
                    // The limit ((iCol + 1) - i) controls the shrinking row length
                    for( j = 1 , k = iCol; j <= ( ( iCol + 1 ) - i ) ; j++ )
                    {
                        // Print current value of 'k' and then decrement
                        cout<<k<<"\t";
                        k--;
                    }

                    // New line after each row
                    cout<<"\n";
                }
            }
}; // End of Pattern class



/////////////////////////////////////////////////////////////////
//
//  Entry point function
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

    Pattern pobj( iRow , iCol );
    pobj.DisplayPattern();

    return 0;
} // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases:
//  Input : 5 5    Output : Triangle descending from 5 to 1
//  Input : 3 3    Output : Triangle descending from 3 to 1
//  Input : 2 4    Output : Error message
//
/////////////////////////////////////////////////////////////////