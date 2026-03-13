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
        If either value is less than or equal to zero, display error
        Create object of Pattern class with rows and columns
        Display a hollow border pattern using nested while loops with conditional boundary checks
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
//  Description : It is used to display the hollow boundary pattern
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
                    
                    // Inner loop handles column iteration
                    while( j <= iCol )
                    {
                        // Check if current position is on the boundary
                        // i=1 (first row), i=iRow (last row), j=1 (first col), j=iCol (last col)
                        if( i == 1 || j == 1 || j == iCol || i == iRow )
                        {
                            // Print asterisk for boundary positions
                            cout<<"*"<<"\t";
                        }
                        else
                        {
                            // Print space for interior positions
                            cout<<" "<<"\t";
                        }
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
//  Input : 3 4     Output : Hollow rectangle border
//  Input : 4 4     Output : Hollow square border
//  Input : -1 5    Output : Error message
//  Input : 3 0     Output : Error message
//
/////////////////////////////////////////////////////////////////