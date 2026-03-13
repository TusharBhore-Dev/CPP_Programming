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
        Display an inverted right-angled numeric triangle descending from iCol using nested while loops
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
                // Initialize dimensions from constructor arguments
                this->iRow = iRow;
                this->iCol = iCol;
            }

            void DisplayPattern()
            {
                // Reset outer loop counter
                i = 1;
                
                // Outer loop handles row iteration
                while( i <= iRow )
                {
                    // Reset inner loop counter and value tracker 'k' for each row
                    // 'k' starts at iCol to maintain the countdown per row
                    j = 1 , k = iCol;
                    
                    // Inner loop handles column iteration, decreasing count per row
                    // The limit ((iCol + 1) - i) controls the shrinking row length
                    while( j <= ( ( iCol + 1 ) - i ) )
                    {
                        // Print current value of 'k' and tab separator
                        cout<<k<<"\t";
                        // Increment column counter and decrement numeric value
                        j++;
                        k--;
                    }

                    // Move cursor to new line after row completion
                    cout<<"\n";
                    // Increment row counter
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
//  Input : 5 5    Output : Triangle descending from 5 to 1
//  Input : 3 3    Output : Triangle descending from 3 to 1
//  Input : 2 4    Output : Error message
//
/////////////////////////////////////////////////////////////////