/////////////////////////////////////////////////////////
//////
////
///     Expected Pattern : 1    2   3   4   5
///
////
/////
/////////////////////////////////////////////////////////

/*
    Algorithm

    START
        Accept limit from user
        If limit is less than or equal to zero, display error
        Create object of Pattern class with limit
        Display the numbers from 1 to limit
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
//  Description : It is used to display the pattern
//  Author :      Tushar vikas bhore
//  Date :        09/03/2026
//
/////////////////////////////////////////////////////////////////

class Pattern
{

    public : 

        int i = 0 , iLimit = 0;

            Pattern( int n )
            {

                this->iLimit = n;
                this->i = 1;

            }

            void DisplayPattern()
            {
                cout<<"\n";
                
                for( i = 1; i <= iLimit; i++ )          // Loop to iterate till limit
                {

                    cout<<i<<"\t";

                }

            }


};  // End of Pattern class

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    int iLim = 0;

    cout<< "Enter the limit :\t" ;
    cin>> iLim;

    if( iLim <= 0 )                                     // Filter for invalid input
    {

        cout<< "Error : Please provide positive and non zero value only.\n" ;
        return 0;

    }

    Pattern pobj( iLim );                               // Object creation

    pobj.DisplayPattern();                              // Method call

    return 0;

}   // End of main