// Que4
// 4. Define a function to print Pascal Triangle up to N lines.







/*This Program is working only for even numbers of lines not for odd numbers of lines.*/






// #include<iostream>
// using namespace std;


// int fact(int);
// int nCr(int, int);
// void PascalTriangle(int);


// int fact (int a)
// {
//     if(a==1 || a==0)
//         return 1;
//     return a*fact(a-1);
// }

// int nCr(int n, int r)
// {
//     return fact(n)/(fact(n-r)*fact(r));
// }

// void PascalTriangle(int n)
// {
//     int c=n-1, i , j, x=0;
//     int jloop;
//     for(i=0; i<n; i++)
//     {
//         x=0;
//         for(j=0; j<(2*n)-1; j++)
//         {
//             if(i%2==0)
//             {
//                 if(j>=(c-i)&&j<=(c+i))
//                 {
//                     if(j%2!=0)
//                     {
//                         cout<<nCr(i,x);
//                         x++;
//                         // cout<<"*";
//                     }
//                     else
//                         cout<<" ";
//                 }
//                 else
//                     cout<<" ";
//             }
//             if(i%2!=0)
//             {
//                 if(j>=(c-i)&&j<=(c+i))
//                 {
//                     if(j%2==0)
//                     {
//                         cout<<nCr(i,x);
//                         x++;
//                         // cout<<"*";
//                     }
//                     else
//                         cout<<" ";
//                 }
//                 else
//                     cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
    
// }

// int main()
// {
//     int N;
//     cout<<"This program prints Pascal Triangle upto N lines."<<endl;
//     cout<<"Enter value of N: ";
//     cin>>N;
//     PascalTriangle(N);
//     return 0;

// }