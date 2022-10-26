///////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accepts number from user
//                     and display its multiplication.
//
// Input : 12
// Output : 144
//
// Input : 13
// Output : 1
//
// Author : Ghansham Ashok Pawar
// Date : 25-10-2022
//
//////////////////////////////////////////////////////////////////////////////



// Header file inclusion
#include<stdio.h>


// Solution  function
int MultFact(int iNo)
{
    int iAns = 1;

    for(int i = 1; i <= iNo/2; i++)
    {
        if(iNo % i == 0)
        {
            iAns = iAns * i;
        }
    }

    return iAns;   
}


// Entry point function
int main()
{
    int iValue = 0, iRet = 0;   // Local variables

    printf("Enter a number : \n");    
    scanf("%d", &iValue);           // Accepting input

    iRet = MultFact(iValue);    // function call

    printf("-> %d\n", iRet);

    return 0;    // Return 0
}
