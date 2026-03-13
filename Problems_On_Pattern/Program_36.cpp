/////////////////////////////////////////////////////////
//////
////
///     Expected Pattern : * * * * *
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
        Display the '*' pattern up to limit using recursion
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

        int iLimit = 0;

            Pattern( int n )
            {

                this->iLimit = n;

            }

            void DisplayPatternRecursive()
            {

                static int i = 1 ;

                if( i <= iLimit )
                {

                    cout<<"*"<<"\t";

                    i++;

                    DisplayPatternRecursive();

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

    if( iLim <= 0 )
    {

        cout<< "Error : Please provide positive and non zero value only.\n" ;
        return 0;

    }

    Pattern pobj( iLim );

    pobj.DisplayPatternRecursive();

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//
//  Input : 5       Output : * * * * *
//  Input : 3       Output : * * *
//  Input : -2      Output : Error : Please provide positive and non zero value only.
//  Input : 0       Output : Error : Please provide positive and non zero value only.
//
/////////////////////////////////////////////////////////////////