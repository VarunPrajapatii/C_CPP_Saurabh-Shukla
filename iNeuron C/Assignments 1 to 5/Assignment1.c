//Que1
// Write a program to print Hello Students on the screen.

/*
#include<stdio.h>
int main()
{
    printf("Hello Students");
    return 0;
}
*/





//Que2
// Write a program to print Hello in the first line and Students in the second line.

/*
#include<stdio.h>
int main ()
{
    printf ("Hello\nStudents");
    return 0;
}
*/







//Que3
// Write a program to print “MySirG” on the screen. (Remember to print in double quotes)


// #include<stdio.h>
// int main ()
// {
//     printf("\"MySirG\"");
//     return 0;   
// }






//Que4
// WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format

// #include<stdio.h>
// int main ()
// {
//     int r;
//     float a;
//     printf("Enter Radius of the circle you wish to find the area: ");
//     scanf("%d", &r);
//     a=3.14*r*r;
//     printf("Area of circle is %.2f having the radius %d", a, r);  //% ke baad .2 ka matlab hai ki decimal ke baad 2 places tak ki values print ho
//     return 0;   
// }





// its a practise program
/*
#include<stdio.h>
int main ()
{
    int n, sum=0;
    while(1)
    {
        printf("\nEnter a number: ");
        scanf("%d", &n);
        if(n!=0)
        {
            sum=sum+n;
        }
        else
        {
            break;
        }
    }
    printf("\nSum is %d", sum);
}
*/






//Que5
// WAP to calculate the length of String using printf function.


// #include<stdio.h>
// int main()
// {
//     int x;
//     x=printf("Varun");
//     printf("\nThe length of \"Varun\" is %d.", x);
//     return 0;
// }








//Que6
// WAP to print the name of the user in double quotes.

/*
#include<stdio.h>
int main()
{
    char str[30];
    printf("Enter your name: ");
    gets(str);
    printf("Your name in double quotes will look like \"");
    printf("%s\".", str);
    return 0;
}
*/







//Que7
// WAP to print “%d” on the screen.

// #include<stdio.h>
// int main()
// {
//     printf("%%d");   
    // printf("%c%c", '%','d');     //Or you can print like this-------
//     return 0;
// }





//Que8
// WAP to print “\n” on the screen.

/*
#include<stdio.h>
int main()
{
    printf("\\n");   
    return 0;
}
*/







// Que9
// WAP to print “\\” on the screen.

/*
#include<stdio.h>
int main()
{
    printf("\\\\");   
    return 0;
}
*/







// Que10
// // WAP to take date as an input in below given format and convert the date format and display the result as given below.
// User Input date format – “DD/MM/YYYY” (27/11/2022)
// Output format –
// “Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)


/*
#include<stdio.h>
int main()
{ 
    int a,b,c;
    printf("Enter date in formate DD/MM/YYYY: ");
    scanf("%d/%d/%d", &a,&b,&c);
    printf("Day - %d, Month - %d, Year - %d", a,b,c);
    
    return 0;
}
*/








// Que11
// WAP to take time as an input in below given format and convert the time format and display the result as given below.
// User Input date format – “HH:MM”
// Output format – “HH hour and MM Minute”
// Example –
// “11:25” converted to “11 Hour and 25 Minute”


/*
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter time in format HH:MM: ");
    scanf("%d:%d", &a, &b);
    printf("Its %d hour and %d minute.", a,b);
    return 0;
}
*/







// Que12
// Find output of below code:


/*
#include<stdio.h>
int main()
{
    int x=printf("ineuron");
    printf("%d",x);
    return 0;
}
*/