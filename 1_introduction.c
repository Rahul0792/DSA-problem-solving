// ============= Session 1

//TC
/*
#include <stdio.h>
#include <conio.h>
void main()
{
    clrscr();
    printf("Hello world1!\n");
    getch();
}
*/


/*
stdio.h - Standard Input Output Header File
        - printf , scanf etc.
conio.h - Console Input Output Header File
        - clrscr , getch
Save - F2
Compile - Alt + F9
Run - Ctrl + F9
Output Show - Alt + F5
*/

/*
#include <stdio.h>

void main()
{
    printf("Hello world1!");
    printf("\nHello world2!");
    printf("\nHello world3!");
}
*/

// Single Line Comment //
// /* */ - Multi Line Comment
// \n-New Line
// Double Slash - Comment
// Comment - Do Not Code Executed!!!

//Main.c    Compile
//Main.obj  Run
//Main.exe  ...

//F9 - Compile + Run

//C Language - Programming Language.
//USA - 1972
//Completed Year 50+
//AT T's Bell Lab.(C-1972/CPP-1980 Invent!!!)
//Dennis Ritchie
// 2000+

//C DS CPP - Java
//Python - Data Science NUMPY PANDAS ML - C Language..
//FlipKart - B ....
//Data Science - second
//Android - Java - C DS CPP
//IOS - C/CPP
//OS - Windows MAC Solaries
//Windows - Assembly Language...
//India - 7 No. 6.No

//Assembly Language - Low No English Word 1Lac Words
//C Language - High English Word 32 Words  2/3/4/5 99 % Maths

//Getting Started with C
//English


//Characters

//A     B   C.....Z
//

//a     b   c.....z
//

//0     1   2.....9
//

//+ - . ; : ' "
//Symbols / Special Symbols/ Special Characters
//

//Format Specifier
//Int - %d Digit
//float - %f
//character - %c
//String - %s

/*
void main()
{
    int a = 10;
    printf("A is %d\n",a);
    printf("%d A is\n",a);
    printf("A %d is\n",a);
}
*/

//A is 10
//10 A is
//A 10 is



//a     Name
//10    Value/Body
//1002  Address/Location

/*
void main()
{
    int a = 10 ;
    printf("A is %d\n",a);//10
    printf("A is %d\n",a);//10
    a=20;
    printf("A is %d\n",a);//20
    printf("A is %d\n",a);//20
    a=30;
    printf("A is %d\n",a);//30
    printf("A is %d\n",a);//30
}
*/

//a             Change/Replace/Vari/  Variable Name
//10/20/30      Value/Body/Overwrite
//1002          Address/Location

//Why Learn C Language?
//Coding Familier
//SW Job / SW
//SW?GP Life Easy?
//Language => Self


/*
void main()
{
    const int a = 10 ;
    printf("A is %d\n",a);//10
    printf("A is %d\n",a);//10
    //a=20;//Error
    printf("A is %d\n",a);//20
    printf("A is %d\n",a);//20
    //a=30;//Error
    printf("A is %d\n",a);//30
    printf("A is %d\n",a);//30
}
*/

//============== Session 2

//Alpha+        Variable
//Digits+       Constants
//SS            Keywords

/*
const
are Different
Constants
*/

/*
void main()
{
    int a = 10 ;
    printf("A is %d\n",a);//10
}
*/

//a         Variable Name
//10/20     Integer Constant
//1002      Address/Location

//C DS CPP => Primary Constants
//10 20 -10 -20 => Integer Constants
//10.2 20.23 -10.23 -20.23 => Float Constants
// 'A' 't' '6' '*' => Character Constants

//Java/Python Literals
//10 20 -10 -20 => Integer Literal
//10.2 20.23 -10.23 -20.23 => Float Literal
// 'A' 't' '6' '*' => Character Literal

//-Integer Constant - Rules How To Create?
//-at least 1 digit
//-IL-Do Not Space or Tab
//-2 Words Space

/*
void main (  )
{
    int a = 10.23 ;//.23 Skipp Stored 10
    printf ( "A is %d" , a ) ; //10

    a= 10;
    printf ( "\nA is %d" , a ) ; //10
}
*/


//Words
// My Fri end
//Implicitly -  + 10 - Auto Provided +
//Explicitly -  -10 - User Provided -

//Trick- All L Are Small Case!!!

//The allowable range for integer constants is
// -32768 to 32767.
// -32768 , -32767,-32766....-1 0 to 1 2 3...32767.
// bits byte 1024byte kb mb gb tb pb yb gb

//Windows-XP, Windows-7 ,Windows-8,8.1... Windows-10 Windows-11
//256MB       1 GB       4                  4        8...
//Resolution!!!


// TC
// 2 byte
// 1 byte => 8 bits
// 2*8=16 bits
// Formula
// 2^16-1
// -2^15 To 2^15 -1
// -32768 To 32768-1
// -32768 To 32767

// GCC
// 4 byte
// 1 byte => 8 bits
// 4*8=32 bits
// Formula
// 2^32-1
// -2^31 To 2^31 -1
// -2147483648 To 2147483648-1
// -2147483648 To +2147483647

/*
//GCC
void main()
{
    int i;
    printf("Size of Integer = %d\n",sizeof(int));
    printf("Size of Integer = %d\n",sizeof(10));
    printf("Size of Integer = %d\n",sizeof(-10));
    printf("Size of Integer = %d\n",sizeof(i));

    i= 2147483647;
    printf("I is = %d\n",i);//2147483647

    i= 2147483648;
    printf("I is = %d\n",i);//-2147483648
    //-2147483648 To 2147483647| 1Extra 1 Back


    i= 2147483649;
    printf("I is = %d\n",i);//-2147483647
    //-2147483648,-47 To 2147483647| 2Extra 2 Back


    i= 2147483654;
    printf("I is = %d\n",i);//-2147483642
    //-2147483648,-47,6,5,4,3,-42,1 To 2147483647| 7Extra 7 Back


    i= -2147483648;
    printf("I is = %d\n",i);//-2147483648
    //-2147483648 To 2147483647|


    i= -2147483649;
    printf("I is = %d\n",i);//2147483647
    //1Extra 1 Back|-2147483648,-47 To 2147483647|


    i= -2147483654;
    printf("I is = %d\n",i);//2147483642
    //6Extra 6 Back|-2147483648To 1,42,3,4,5,6,2147483647|

}
*/

/*
//TC
#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    clrscr();
    printf("Size of Integer = %d\n",sizeof(int));//2
    printf("Size of Integer = %d\n",sizeof(10));//2
    printf("Size of Integer = %d\n",sizeof(-10));//2
    printf("Size of Integer = %d\n",sizeof(i));//2

    i= 32767;
    printf("I is = %d\n",i);//32767

    i= 32768;
    printf("I is = %d\n",i);//-32768
    //-32768 To 32767| 1Extra 1 Back


    i= 32770;
    printf("I is = %d\n",i);//-32766
    //-32768,7,6 To 32767|


    i= -32768;
    printf("I is = %d\n",i);//-32768
    //-32768 To 32767|


    i= -32770;
    printf("I is = %d\n",i);//32766
    //-32768,7,6 To 32767| 1Extra 1 Back

    getch();
}
*/


/*
void main()
{
    float a=10.23;
    printf("%f\n",a);//10.230000
    printf("%.2f\n",a);//10.23
    printf("%.1f\n",a);//10.2

    a=10;//10.000000
    printf("%f\n",a);//10.000000
}
*/

// -3.4e38 to 3.4e38
// 3.4*10^38
//3 Mantissa
//4 Exponent
//120000
//1.2*10^5
//1.2*1Lac=120000
//1.2e5
//1.2E3 1.2e3

//10000000
//1e2 1e3 .....1e7

/*
void main()
{
    float a=1.2e5;
    printf("%f\n",a);
    a=1.2E5;
    printf("%f\n",a);

    a=12e5;
    printf("%f\n",a);
    a=12E5;
    printf("%f\n",a);
}
*/


//=================== Session 3

// Rules for Constructing Character Constants
// Any Alpha or Any Digits or Any SS but Enclosed in
// Single inverted Commas ' ' - Single Char or
//..... Single!!!
// ex. 'G' 'i' '6' '*' etc.

/*
void main()
{
    char ch='A';
    printf("%c\n",ch);//A

    ch='y';
    printf("%c\n",ch);//y

    ch='6';
    printf("%c\n",ch);//6

    ch='*';
    printf("%c\n",ch);//*

    //ch=‘A’ ;//Error
    //ch=’A’ ;//Error
    //ch=‘A‘ ;//Error
    ch= 'A' ;//OK
    printf("%c\n",ch);//A

    //The maximum length of a character constant
    // can be 1 or 2 characters long.
    //Turboc Not GCC 'A' 'AB' TC
    //GCC 'A' 'AB' 'ABC' etc

    ch='AB' ;//GCC-OK Last Char  Turboc-OK First Char
    printf("%c\n",ch);//B

    ch='ABCD' ;//GCC-OK Last Char  Turboc-Error
    printf("%c\n",ch);//GCC - D TC -Error
    //TC -Error Too Many Initializer!!!
}
*/

//College - Sir Madam IT/Comp - Topper Questions
//Character Means Integer
//Integer Means Character

//Characters
//ASCII VALUES
//American Standard Code For Information Interchange!!!
//English Words

//Unicode Code - Java , Python !!!

//A     B   C.....Z
//65    66  67....65+25=90

//a     b   c.....z
//97    98  99....122

//0     1   2.....9
//48    49  50....57

//+ - . ; : ' "
//?
//Symbols / Special Symbols/ Special Characters
//

/*
void main()
{
    char ch='A';
    printf("%c\n",ch);//A
    printf("%d\n",ch);//65
}
*/


//Character Means Integer
//Integer Means Character

/*
void main()
{
    char ch='A';
    printf("%c\n",ch);//A
    printf("%d\n",ch);//65

    ch = 65 ; //ch= 65 'A' ;
    printf("%c\n",ch);//A
    printf("%d\n",ch);//65

    ch = 65.23 ; //ch= 65.23  .SKIPP 65  'A';
    printf("%c\n",ch);//A
    printf("%d\n",ch);//65
}
*/


/*
void main()
{
    int ch='A';//int ch=65;
    printf("%c\n",ch);//A
    printf("%d\n",ch);//65

    ch = 65 ; //ch= 65 'A' ;
    printf("%c\n",ch);//A
    printf("%d\n",ch);//65

    ch = 65.23 ; //ch= 65.23  .SKIPP 65  'A';
    printf("%c\n",ch);//A
    printf("%d\n",ch);//65
}
*/

/*
void main()
{
    float ch='A';
    //float ch='A';
    //float ch=65;
    //65.000000
    printf("%f\n",ch);//65.000000

    ch = 65 ; //ch= 65;
    printf("%f\n",ch);//65.000000

    ch = 65.23 ; //ch= 65.23
    printf("%f\n",ch);//65.230000
}
*/

/*
All R Executed!!!
char ch='A';
char ch=65;
char ch=65.23;
int ch='A';
int ch=65;
int ch=65.23;
float ch='A';
float ch=65;
float ch=65.23;
*/

// Constructing Variables ?-
// How To Constructing Variable Name?
// Person Name - Rules
// First Name - A-Z a-z 2 Name Om 1 L!!!
// Variable Name - ?
// A-Z a-z 0-9 _ $
// First L Should/Must Be - A-Z a-z _ $
// Second L Should/Must Be  To All - A-Z a-z _ $ 0-9
// Riddhik Name 100 L
// Parth - Meaning - Easy -

/*
void main()
{
    int U = 10 ;
    int iU = 10 ;
    int _iU = 10 ;
    int $_iU = 10 ;
    //int 1$_iU = 10 ;//Error
    //int ^$_iU = 10 ;//Error
    int $12344_iU = 10 ;
    int $12344ddasdADDD_i__$$$U = 10 ;
    //int $12344ddasdAD*DD_i__$$$U = 10 ;//Error
    printf("\nOK");

    int principle_amount;// int a;
    int noy;
    float roi;

}
*/

//5 Years
//Project-5000 Employees Work
//Salary 1Lac- 12Lac 15 Lac *5*5000 = Salary?
//1 Employee Corona V->Gone
//99.99 % Work Completed
//0.1  90% - 5 years 10%
//90% - 5 Employees 1-Read Code Undestand 2 3 4 5

//=============== Session 4

//Variable - User Defined Word
//C Keywords - System Defined Words
// int,float,char,const,sizeof 5 - 32=> 27- always small
//4 Pages

/*
void main()
{
    //int float;//Error
    int Float ;
}
*/

/*
Write A C Program For Simple Interest
Author - VowTech Date- 7-11-2022
*/

/*
void main()
{
    int prin_amt , noy ; //Declaration
    float roi , si;

    prin_amt = 1000 ; //Initialization / Defined
    noy = 3 ;
    roi = 4.21 ;

    //Formula For Simple Interest
    si = prin_amt * noy * roi / 100 ; //Statement ;

    printf ( "Simple Interest Rs. %f" , si ) ;
    //Simple Interest Rs. 126.300000
}
*/

/*
void main()
{
    //Declaration with Initialization
    int prin_amt=1000 , noy ;
    float roi , si;

    //Initialization / Defined
    noy = 3 ;
    roi = 4.21 ;

    //Formula For Simple Interest
    si = prin_amt * noy * roi / 100 ; //Statement ;

    printf ( "Simple Interest Rs. %f" , si ) ;

}
*/


//Rule
// // /**/
// // Single Line Comment
// SLC Before The Statement - No
// SLC After The Statement - YES
// SLC Between The Statement - No

// // Multi Line Comment
// SLC Before The Statement - YES
// SLC After The Statement - YES
// SLC Between The Statement - YES
// 1 Word - NO
// 2 Word - YES
//−Comments cannot be nested


/*
Write A C Program For Simple Interest
Author - VowTech Date- 7-11-2022
*/

/*
void main()
{
    int prin_amt=1000 , noy ;
    float roi , si;

    noy = 3 ;
    roi = 4.21 ;

    //Formula For Simple Interest
    si = prin_amt * noy * roi / 100 ;

    printf ( "Simple Interest Rs. %f" , si ) ;

}
*/

//prin_amt
//2000
//1002

/*
void main()
{
    int prin_amt , noy ;
    float roi , si;

    printf("Enter Principle Amount : ");
    scanf("%d",&prin_amt);

    printf("Enter NOY : ");
    scanf("%d",&noy);

    printf("Enter ROI : ");
    scanf("%f",&roi);

    //Formula For Simple Interest
    si = prin_amt * noy * roi / 100 ;

    printf ( "Simple Interest Rs. %f" , si ) ;

}
*/


/*
void main()
{
    int prin_amt , noy ;
    float roi , si;

    printf("Enter Principle Amount , NOY & ROI : ");
    scanf("%d %d %f",&prin_amt,&noy,&roi);

    //Formula For Simple Interest
    si = prin_amt * noy * roi / 100 ;

    printf ( "Simple Interest Rs. %f" , si ) ;

}
*/

/*
void main()
{
    int prin_amt , noy ;
    float roi , si;

    printf("Enter Principle Amount , NOY & ROI : ");
    scanf("%d%d%f",&prin_amt,&noy,&roi);

    //Formula For Simple Interest
    si = prin_amt * noy * roi / 100 ;

    printf ( "Simple Interest Rs. %f" , si ) ;

}
*/

/*
void main()
{
    int prin_amt , noy ;
    float roi , si;

    printf("Enter Principle Amount , NOY & ROI : ");
    scanf("%d%d%f ",&prin_amt,&noy,&roi);
    //scanf last space - no

    //Formula For Simple Interest
    si = prin_amt * noy * roi / 100 ;

    printf ( "Simple Interest Rs. %f" , si ) ;

}
*/

//Operators Expert - Coding Expert

//Arithmetic Operators
// * / %
// + -

//Assignment Operator
// =
// = RHS

//Rule -
// Int Int => Int
// float Int => float
// Int float => float
// float float => float

/*
void main()
{
    float i = 10*3 ;
    //float i= 30 ;
    //30.000000
    printf("%f\n",i);//30.000000

    i = 10 / 3;
    //i = 3 ;
    //3.000000
    printf("%f\n",i);//3.000000

    i = 10.0/3;
    //i = 3.333333;
    //3.333333
    printf("%f\n",i);//3.333333

    i = 10.0/3.0;
    //i = 3.333333;
    //3.333333
    printf("%f\n",i);//3.333333
}
*/


/*
void main()
{
    int i=10*3;
    //int i=30;
    //30
    printf("%d\n",i);//30

    i = 10/3;
    //i = 3 ;
    //3
    printf("%d\n",i);//3

    i = 10.0/3;
    //i = 3.333333;
    //3
    printf("%d\n",i);//3

    i = 10.0/3.0;
    //i = 3.333333;
    //3
    printf("%d\n",i);//3
}
*/

/*
void main()
{
    int i=10+3;
    printf("%d\n",i);

    i=10-3;
    printf("%d\n",i);
}
*/

// =========== Session 5

//* / %
//+ -
//=
//% Modulos Division Op (Remainder)

/*
#include<math.h>
void main()
{
    int i = 10 % 2 ; //0
    printf("%d\n",i);

    i=10 % 3;//1
    printf("%d\n",i);

    i=5%3;//2
    printf("%d\n",i);

    //N / D
    //N Sign Answer
    i=-5%3;//-2
    printf("%d\n",i);

    i= 5%-3;//+2
    printf("%d\n",i);

    i= -5%-3;//-2
    printf("%d\n",i);

    i= 3%5;//3
    printf("%d\n",i);

    i= 4%5;//4
    printf("%d\n",i);

    i= 5%5;//0
    printf("%d\n",i);

    //i= 5.0 % 5;//Error % Both Operand S/M Be Int
    //printf("%d\n",i);

    float j = fmod(3.14,2.21);
    printf("%f\n",j);

    j = fmod( 3.14 , 2 );
    printf("%f\n",j);

}
*/

/*
#include<math.h>
void main()
{
    float f=floor(10.9999);
    printf("%f\n",f);//10.000000

    f=ceil(10.1111);
    printf("%f\n",f);////11.000000

    f=M_PI;
    printf("%f\n",f);//3.14159

    f=sqrt(9);
    printf("%f\n",f);//3.00

    f=sqrt(9.21);
    printf("%f\n",f);
}
*/

//1 byte
// 8 bits
//2^7 To 2^7 - 1
//-128 To +127

/*
void main()
{
    char ch = 'A' + 'B' ;
    //char ch= 65 + 66;
    //char ch = 131;
    //131
    //|-128 To +127|4 Extra
    //|-128 ,-127,-126,-125

    printf("%d\n",sizeof(char));//1 Byte
    printf("%d\n",ch);// -125
}
*/



/*
void main()
{
    char ch1 = 'A'+'B' ;
    printf("%d\n",ch1);// -125

    int ch2 = 'A'+'B' ;
    printf("%d\n",ch2);// 131

    float ch3 = 'A'+'B' ;
    printf("%f\n",ch3);// 131.000000
}
*/

/*
void main()
{
    char ch1 = 'a'+'b' ;//97+98=195
    //| -128,-127,-126.. to 127 |
    //195-128=67 Times Positive Extra
    //128-67 = 61
    //-61
    printf("%d\n",ch1);// -61

    int ch2 = 'a'+'b' ;
    printf("%d\n",ch2);// 195

    float ch3 = 'a'+'b' ;
    printf("%f\n",ch3);// 195.000000
}
*/

/*
void main()
{
    int prin_amt , noy ;
    float roi , si;

    printf("Enter Principle Amount , NOY & ROI : ");
    scanf("%d %d %f",&prin_amt,&noy,&roi);
    //               1000 3 4.21

    //Formula For Simple Interest
    si = prin_amt * noy * roi / 100 ;

    printf ( "%f\n", si ) ;
    printf ( "%d %d %f %f\n", prin_amt, noy, roi, si ) ;
    printf ( "%d\t%d\t%f\t%f\n", prin_amt, noy, roi, si ) ;
    printf ( "%d\n%d\n%f\n%f\n", prin_amt, noy, roi, si ) ;
    printf ( "Simple Interest = Rs. %f\n", si ) ;
    printf ( "Prin = %d \nRate = %f", prin_amt, roi ) ;
}
*/

//126.300000
//1000 3 4.210000 126.300000
//1000  3   4.210000    126.300000
//1000
//3
//4.210000
//126.300000
//Simple Interest = Rs. 126.300000
//Prin = 1000
//Rate = 4.210000

//BODMAS
//()
//* / %
//+ -
// =

/*
void main()
{
    int a=2,b=3,c=4,d=5;
    printf ( "%d %d %d %d", 3 , 3 + 2 , c , a + b * c - d ) ;
    //3 5 4 9
}
*/

/*
void main( )
{
	int num ;
	printf ( "Enter a number : " ) ;
	scanf ( "%d", &num ) ;
	printf ( "Now I am letting you on a secret..." ) ;
	printf ( "\nYou have \n\n\njust entered the number %d", num ) ;
}
*/

//Now I am letting you on a secret...
//You have
//
//
//just entered the number 100

/*
void main()
{
    int i=10 , j=20*3;
    printf("%d %d",i,j);
}
*/

/*
void main()
{
    int j=20*3 , i=10  ;
    printf("%d %d",i,j);
}
*/

/*
void main()
{
    int i=10 , j = 120  + i ;
    printf("%d %d",i,j);
}
*/

/*
void main()
{
    int j = 120  + i , i=10 ; //Error
    printf("%d %d",i,j);
}
*/
//Predictable
//Unpredictable - Garbage Value - Any Value Memory

/*
void main()
{
    int a , b , c , d ;
	a = b = c = 10 ;
    printf("%d %d %d %d",a,b,c,d);//10 10 10 GV
}
*/


/*
void main()
{
    int a = b = c = d = 10 ; //b c d Undeclared Error
    printf("%d %d %d %d",a,b,c,d);//10 10 10 10
}
*/

/*
void main()
{
    int b,c,d;
    int a = b = c = d = 10 ;
    printf("%d %d %d %d",a,b,c,d);//10 10 10 10
}
*/

/*
void main()
{
    int i;
    i=10;
    //10=i;//Error
    printf("%d\n",i);
    i = i+20;
    printf("%d\n",i);
    //i+20 = i;//Error
}
*/

//============== Session 6

/*
#include<math.h>

void main()
{
    //int a = 3 ** 2 ;//Error

	int a = 3 ^ 2 ;// Bitwise XOR ^ 1
	printf("%d\n",a);


	float b = pow(3,2) ;
	printf("%f\n",b);

    b = pow(3,4) ;
	printf("%f\n",b);

	b = pow(3,4.1) ;
	printf("%f\n",b);

	b = pow(3.5,4.7) ;
	printf("%f\n",b);

}
*/

/*
void main()
{
    int k= 2 / 9;
    //int k= 0 ;
    //0
    printf("%d\n",k);

    k=2.0/9;
    //int k= 0.222 ;
    //0
    printf("%d\n",k);

    float i= 2 / 9;
    //float i= 0 ;
    //0.000000
    printf("%f\n",i);

    i=2.0/9;
    //float i= 0.222 ;
    //0.222222
    printf("%f\n",i);
}
*/

/*
()
* / %
+ -
=
*/

/*
void main()
{
    float i = 2 * 3 / 4 + 4 /4 + 8 - 2 + 5 / 8;
    //float i = 6 / 4 + 4 /4 + 8 - 2 + 5 / 8;
    //float i = 1 + 4 /4 + 8 - 2 + 5 / 8;
    //float i = 1 + 1 + 8 - 2 + 5 / 8;
    //float i = 1 + 1 + 8 - 2 + 0;
    //float i = 2 + 8 - 2 + 0;
    //float i = 10 - 2 + 0;
    //float i = 8;
    //8.000000
    printf("%f",i);//8.000000
}
*/


/*
void main()
{
    float i = 3 / 2 * 4 + 3 / 8 + 3;
    //float i = 4 + 0 + 3
    //float i = 7
    //7.000000
    printf("%f\n",i);//7.000000

    i = 3 / (2 * 4 + 3) / 8 + 3;
    //float i = 0 + 3
    //float i = 3
    //3.000000
    printf("%f",i);//3.000000
}
*/

//1] Arthmetic OP
// * / %
// + -
//2] Assignment Op
//=
//3] Bitwise Op
// & | ^ << >>

//binary no
//....2^7 2^6 2^5 2^4 2^3 2^2 2^1 2^0
//1024,512,256,128,64,32,16,8,4,2,1

//bits 1/0
//8 bits 1 byte
//1024 bytes 1KB
//1024KB 1 MB
//1024MB 1 GB
//TB PB YB GB etc

//0 - 000
//1 - 001
//2 - 010
//3 - 011
//4 - 100
//5 - 101
//6 - 110
//7 - 111
//8 - 1000
//9 - 1001
//10- 1010
//11- 1011
//12- 1100
//13- 1101
//14- 1110
//15- 1111
//16- 10000
//17- 10001
//18- 10010
//19- 10011
//20- 10100
//21- 10101

//1 True
//0 False
//& - All R True
//| - 1 True - All True All False - False
//^ - 1's Odd Time 1,3,5 etc - 1
//^ - 1's Even Time 0,2,4 etc - 0

//T1    T2  T1&T2   T1|T2   T1^T2
//1     1   1       1       0
//1     0   0       1       1
//0     1   0       1       1
//0     0   0       0       0


//T1    T2  T3      T1&T2&T3   T1|T2|T3   T1^T2^t3
//1     1   1       1           1           1
//1     1   0       0           1           0
//1     0   1       0           1           0
//1     0   0       0           1           1
//0     1   1       0           1           0
//0     1   0       0           1           1
//0     0   1       0           1           1
//0     0   0       0           0           0

/*
void main()
{
    int a= 3 & 2;
    printf("%d\n",a);
    //011
    //010
    //---
    //010=>2

    a= 3 & 2 & 7;
    printf("%d\n",a);
    //011
    //010
    //111
    //---
    //010=>2
}
*/


/*
void main()
{
    int a= 3 | 2;
    printf("%d\n",a);
    //011
    //010
    //---
    //011=>3

    a= 3 | 2 | 7;
    printf("%d\n",a);
    //011
    //010
    //111
    //---
    //111=>7
}
*/

/*
void main()
{
    int a= 3 ^ 2;
    printf("%d\n",a);
    //011
    //010
    //---
    //001=>1

    a= 3 ^ 2 ^ 7;
    printf("%d\n",a);
    //011
    //010
    //111
    //---
    //110=>6
}
*/

/*
void main()
{
    int a=10,b=20;
    printf("BS a = %d , b = %d\n",a,b);
    int temp=a;//temp=10
    a=b;//a=20
    b=temp;//b=10
    printf("BS a = %d , b = %d\n",a,b);
}
*/

/*
void main()
{
    int a=10,b=20;
    printf("BS a = %d , b = %d\n",a,b);
    a=a+b;//a=30
    b=a-b;//b=30-20=10
    a=a-b;//b=30-10=20
    printf("BS a = %d , b = %d\n",a,b);
}
*/

/*
void main()
{
    int a=10,b=20;
    printf("BS a = %d , b = %d\n",a,b);
    a=a*b;//a=200
    b=a/b;//b=200/20=10
    a=a/b;//b=200/10=20
    printf("BS a = %d , b = %d\n",a,b);
}
*/

/*
void main()
{
    int a=3,b=2;
    printf("BS a = %d , b = %d\n",a,b);
    a=a^b;
    //011
    //010
    //---
    //001 a=1
    b=a^b;
    //001
    //010
    //---
    //011=>b = 3
    a=a^b;
    //001
    //011
    //---
    //010 a=2
    printf("BS a = %d , b = %d\n",a,b);
}
*/

/*
void main()
{
    int a=10,b=20;
    printf("BS a = %d , b = %d\n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("BS a = %d , b = %d\n",a,b);
}
*/

//<< - left Shift
//>> - right shift

/*
void main()
{
    int a=3<<1;
    printf("%d\n",a);
    // 011
    //0110 => 6

    a=80<<3;
    printf("%d\n",a);
    //p << q
    //p * (2^q)
    //80 * (2^3)
    //80 * 8
    //640

    a=100<<3;
    printf("%d\n",a);
    //p << q
    //p * (2^q)
    //100 * (2^3)
    //100 * 8
    //800
}
*/

/*
void main()
{
    int a=3>>1;
    printf("%d\n",a);
    // 011
    //  01 => 1

    a=80>>3;
    printf("%d\n",a);
    //p >> q
    //p / (2^q)
    //80 / (2^3)
    //80 / 8
    //10

    float b=100>>3;
    printf("%f\n",b);
    //p >> q
    //p / (2^q)
    //100 / (2^3)
    //100 / 8
    //12

    //All R Invalid Op!!! Errors
    //b=100.0 & 3;
    //b=100.0|3;
    //b=100.0^3;
    //b=100.0<<3;
    //b=100.0>>3;
    //printf("%f\n",b);

}
*/

//==================== Session 7

//Apti

/*
void main()
{
    int p=5,q=5,r=4;
    r = r + q;// r = 9
    r = (r+p)+p;//r = 19
    p = (p&12)&p;
    //0101
    //1100
    //0101
    //----
    //0100 p =4
    printf("%d",p+q+r);//4+5+19 => 28
}
*/

/*
void main()
{
    int pp=8,qq=4,rr=5;
    rr = (qq^4)^pp;
    //0100
    //0100
    //1000
    //----
    //1000 r=8
    rr = (qq+rr)+qq; //rr = 4+8+4=16
    pp =(5+7)&rr;
    //01100
    //10000
    //-----
    //00000 pp=0
    printf("%d",pp+qq+rr);//0+4+16=20
}
*/

/*
void main()
{
    int p=8,q=2,r=5;
    r = (r+4)+p;//r=17
    p =(2^3)+p;//p = 1+8 p=9
    q=q+p;//q = 2+9=11
    p=(q^p)^p;
    //1011
    //1001
    //1001
    //----
    //1011 p = 11
    printf("%d",p+q+r);//11+11+17=39
}
*/
