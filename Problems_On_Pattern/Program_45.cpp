/////////////////////////////////////////////////////////
//////
////
///     Expected Pattern : 1    $   3   $   5   $
///                        1    $   3   $   5   $
///                        1    $   3   $   5   $
////
/////
/////////////////////////////////////////////////////////

/*
    Algorithm

    START
        Accept number of rows and columns from user
        If either value is less than or equal to zero, display error
        Create object of Pattern class with rows and columns
        Display the 2D pattern alternating between numbers and '$' symbol using nested while loops
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

    int iRow = 0 , iCol = 0 , i = 0 , j = 0;

            Pattern( int iRow , int iCol )
            {

                this->iRow = iRow;
                this->iCol = iCol;
                
            }

            void DisplayPattern()
            {

                i = 1;
                
                while( i <= iRow )
                {

                    j = 1;
                    
                    while( j <= iCol )
                    {


                        if( j % 2 == 0 )
                        {

                            cout<<"$"<<"\t";

                        }
                        else
                        {

                            cout<<j<<"\t";

                        }

                        j++;

                    }

                    cout<<"\n";
                    i++;

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

    int iRow = 0 , iCol = 0;

    cout<< "Enter the number of rows :\t" ;
    cin>> iRow;

    cout<< "Enter the number of coloms :\t";
    cin>> iCol;

    if( iRow <= 0 || iCol <= 0 )
    {

        cout<< "Error : Please provide positive and non zero values only.\n" ;
        return 0;

    }

    Pattern pobj( iRow , iCol );

    pobj.DisplayPattern();

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//
//  Input : 3 6     Output : 1 $ 3 $ 5 $ (3 rows)
//  Input : 2 4     Output : 1 $ 3 $ (2 rows)
//  Input : -1 5    Output : Error : Please provide positive and non zero values only.
//  Input : 3 0     Output : Error : Please provide positive and non zero values only.
//
/////////////////////////////////////////////////////////////////