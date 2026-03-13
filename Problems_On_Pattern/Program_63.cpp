/////////////////////////////////////////////////////////
//////
////
///     Expected Pattern : 1    1    1    1    1
///                        2    2    2    2
///                        3    3    3
///                        4    4
///                        5
////
/////
/////////////////////////////////////////////////////////

/*
    Algorithm

    START
        Accept number of rows and columns from user
        If either value is less than or equal to zero, display error
        Create object of Pattern class with rows and columns
        Display an inverted right-angled numeric triangle with repeating row values using nested while loops
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
//  Description : It is used to display the inverted triangular repeating numeric pattern
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
                // Reset outer loop counter
                i = 1;
                
                // Outer loop handles row iteration
                while( i <= iRow )
                {
                    // Reset inner loop counter for each row
                    j = 1;
                    
                    // Inner loop handles column iteration, decreasing count per row
                    // The limit (iCol + 1 - i) ensures the number of elements decreases as 'i' increases
                    while( j <= ( ( iCol + 1 ) - i ) )
                    {
                        // Print current row number and tab separator
                        cout<<i<<"\t";
                        // Increment column counter
                        j++;
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

    // Validate inputs to ensure positive, non-zero values
    if( iRow <= 0 || iCol <= 0 )
    {
        cout<< "Error : Please provide positive and non zero values only.\n" ;
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
//  Input : 5 5     Output : Inverted numeric triangle with 5 rows
//  Input : 3 3     Output : Inverted numeric triangle with 3 rows
//  Input : 0 5     Output : Error message
//  Input : -2 2    Output : Error message
//
/////////////////////////////////////////////////////////////////