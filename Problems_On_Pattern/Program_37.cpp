/////////////////////////////////////////////////////////
//////
////
///     Expected Pattern : 5    4   3   2   1
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
        Display the numbers from limit to 1 using loop
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
                
                for( i = iLimit; i >= 1; i-- )
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

    if( iLim <= 0 )
    {

        cout<< "Error : Please provide positive and non zero value only.\n" ;
        return 0;

    }

    Pattern pobj( iLim );

    pobj.DisplayPattern();

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//
//  Input : 5       Output : 5  4   3   2   1
//  Input : 3       Output : 3  2   1
//  Input : -2      Output : Error : Please provide positive and non zero value only.
//  Input : 0       Output : Error : Please provide positive and non zero value only.
//
/////////////////////////////////////////////////////////////////