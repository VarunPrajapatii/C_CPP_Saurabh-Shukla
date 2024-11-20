/*
DSA through C++

Assignment-16: Recursion

1. Write a recursive function to print first N natural numbers

2. Write a recursive function to print first N natural numbers in reverse order

3. Write a recursive function to print first N odd natural numbers

4. Write a recursive function to print first N odd natural numbers in reverse order

5. Write a recursive function to print first N even natural numbers

6. Write a recursive function to print first N even natural numbers in reverse order.

7. Write a recursive function to print squares of first N natural numbers

8. Write a recursive function to print squares of first N natural numbers in reverse order.

9. Write a recursive function to print cubes of first N natural numbers

10. Write a recursive function to print cubes of first N natural numbers in reverse order
*/


#include<iostream>
using namespace std;


void FirstNcubeRev(int n)    //Que10
{
    if(n==1)
        cout<<"1";
    else
    {
        cout<<n*n*n<<" ";
        FirstNcubeRev(n-1);
    }
}

void FirstNcube(int n)   //Que9
{
    if(n==1)
        cout<<"1";
    else
    {
        FirstNcube(n-1);
        cout<<" "<<n*n*n;
    }
}

void FirstNsqrRev(int n)    //Que8
{
    if(n==1)
        cout<<"1";
    else
    {
        cout<<n*n<<" ";
        FirstNsqrRev(n-1);
    }
}

void FirstNsqr(int n)   //Que7
{
    if(n==1)
        cout<<"1";
    else
    {
        FirstNsqr(n-1);
        cout<<" "<<n*n;
    }
}


void printnevenrev(int n)   //Que6
{
    if(n==1)
        cout<<"2";
    else
    {
        cout<<2*n<<" ";
        printnevenrev(n-1);
    }
}

void printneven(int n)  //Que5
{
    if(n==1)
        cout<<"2 ";
    else
    {
        printneven(n-1);
        cout<<2*n<<" ";
    }
}

void printnoddrev(int n)    //Que4
{
    if(n==1)
        cout<<"1 ";
    else
    {
        cout<<2*n-1<<" ";
        printnoddrev(n-1);
    }
}

void printnodd(int n)   //Que3
{
    if(n==1)
        cout<<"1 ";
    else
    {
        printnodd(n-1);
        cout<<2*n-1<<" ";
    }
}

void printnrev(int n)   //Que2
{
    if (n==1)
        cout<<"1";
    else
    {
        cout<<n<<" ";
        printnrev(n-1);
    }
    
}

void printn(int n)  //Que1
{
    if(n==1)
        cout<<"1 ";
    else
    {
        printn(n-1);
        cout<<n<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    // printnevenrev(n);
    // FirstNcubeRev(n);
}