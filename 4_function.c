// 5] Function

/*
void main()
{
    printf("Main-1\n");

    printf("Suyash Work Start - 1\n");
    printf("Suyash Work Start - 2\n");
    printf("Suyash Work Start - 3\n");
    printf("Suyash Work Start - 4\n");//4 Lac


    printf("Main-2\n");

    printf("Suyash Work Start - 1\n");
    printf("Suyash Work Start - 2\n");
    printf("Suyash Work Start - 3\n");
    printf("Suyash Work Start - 4\n");//4 Lac

    printf("Main-3\n");

    printf("Suyash Work Start - 1\n");
    printf("Suyash Work Start - 2\n");
    printf("Suyash Work Start - 3\n");
    printf("Suyash Work Start - 4\n");//4 Lac

    printf("END Main");

}
*/

//100*4 1Day - 40Lac
//2Day - 40Lac
//100Day 100*40Lac
//..
//..
//Code S

/*
void Suyash(); //Declaration & Prototype

void main()
{

    printf("Main-1\n");

    Suyash();//FunctionName() ; Called Function Hold

    printf("Main-2\n");

    Suyash();

    printf("Main-3\n");

    Suyash();

    printf("END Main");

}
//Body Of The Function
//Defined Function
//Definition Of The Function
//Implementation Of The Function

//Return_Type FunctionName()
//{}

void Suyash()
{
    printf("Suyash Work Start - 1\n");
    printf("Suyash Work Start - 2\n");
    printf("Suyash Work Start - 3\n");
    printf("Suyash Work Start - 4\n");//4 Lac
}
*/
//Definition - 101% Question
//Function - A Task that is always performed exactly
//in the same way

//Why Use?
//Avoid Rewriting Same Code Over and over.

/*
void message( );

void main( )
{
	message( ) ;
	printf ( "\nCry, and you stop the monotony!" ) ;
}

void message( )
{
	printf ( "\nSmile, and the world smiles with you..." ) ;
}
*/


/*
void italy( );
void brazil( );
void argentina( );

void main( )
{
	printf ( "\nI am in main" ) ;
	italy( ) ;
	printf ( "\nI am Back in main-1" ) ;
	brazil( ) ;
	printf ( "\nI am Back in main-2" ) ;
	argentina( ) ;
	printf ( "\nI am Back in main-3" ) ;
}
void italy( )
{
	printf ( "\nI am in italy" ) ;
}
void brazil( )
{
	printf ( "\nI am in brazil" ) ;
}
void argentina( )
{
	printf ( "\nI am in argentina" ) ;
}
*/


/*
void italy( );
void brazil( );
void argentina( );

void main( )
{
	printf ( "\nI am in main" ) ;
	italy( ) ;
	printf ( "\nI am Back in main-1" ) ;

	//brazil( ) ;
	//printf ( "\nI am Back in main-2" ) ;
	//argentina( ) ;
	//printf ( "\nI am Back in main-3" ) ;

}
void italy( )
{
	printf ( "\nI am in italy" ) ;
	brazil();
	printf ( "\nI am back in italy" ) ;
}
void brazil( )
{
	printf ( "\nI am in brazil" ) ;
	argentina();
	printf ( "\nI am back in brazil" ) ;
}
void argentina( )
{
	printf ( "\nI am in argentina" ) ;
}
*/

/*
void italy( );
void brazil( );
void argentina( );

void main( )
{
	printf ( "\nI am in main" ) ;
	italy( ) ;
	printf ( "\nI am Back in main-1" ) ;

	brazil( ) ;
	printf ( "\nI am Back in main-2" ) ;

	argentina( ) ;
	printf ( "\nI am Back in main-3" ) ;

}
void italy( )
{
	printf ( "\nI am in italy" ) ;
	brazil();
	printf ( "\nI am back in italy" ) ;
}
void brazil( )
{
	printf ( "\nI am in brazil" ) ;
	argentina();
	printf ( "\nI am back in brazil" ) ;
}
void argentina( )
{
	printf ( "\nI am in argentina" ) ;
}
*/

/*
void message( );

void main( )
{
    printf("\nIn Main");
	message( ) ;
}

void message( )
{
	printf ( "\nCan't imagine life without C" ) ;
	main( ) ;
}
*/

/*
void message( );
void main( )
{
	message( ) ;
	message( ) ;
	message( ) ;
	message( ) ;
	message( ) ;
	message( ) ;
}
void message( )
{
	printf ( "\nJewel Thief!!" ) ;
}
*/


/*
void message1( );
void message2( );

void main( )
{
	message1( ) ;
	message2( ) ;
}
void message2( )
{
	printf ( "\nBut the butter was bitter" ) ;
}
void message1( )
{
	printf ( "\nMary bought some butter" ) ;
}
*/

/*
void message1( );
void message2( );

void main( )
{
	message1( ) ;
	message2( ) ;
}
void message2( )
{
	printf ( "\nBut the butter was bitter" ) ;
	message2();
}
void message1( )
{
	printf ( "\nMary bought some butter" ) ;
}
*/

/*
void argentina( );
void main( )
{
	printf ( "\nI am in main" ) ;
	argentina( );
}

void argentina( )
{
    printf ( "\nI am in argentina" ) ;
}
*/




// Passing Values between Functions -


/*
int calculate_sum( int,int,int);
void main()
{
    int a,b,c,sum;
    printf("Enter 3 Values : ");
    scanf("%d %d %d",&a,&b,&c);//10 20 30

    sum = calculate_sum(a,b,c);//a,b,c => Actual Parameters/Arguments
    //sum = calculate_sum(10,20,30);
    //sum = 60;
    printf("%d + %d + %d = %d",a,b,c,sum);
}

//x,y,z => Formal Parameters/Arguments

int calculate_sum( int x,int y,int z )
{
    int d;
    d=x+y+z;
    return d;//d data type int 60
}
*/

// ====================== Session 20

//Example =>
//C  brain => Suyash brain/ Up Down

//Call By Value
//changes in formal P/A then no change in A P/A.
//Rule-
//Return Only 1 Value At a time Return!!!

/*
int calculate_sum( int,int,int);
void main()
{
    int a,b,c,sum;
    printf("Enter 3 Values : ");
    scanf("%d %d %d",&a,&b,&c);
//a         b       c
//10        20      30
//1002      2002    3002
    sum = calculate_sum(a,b,c);//a,b,c => Actual Parameters/Arguments
    //sum = calculate_sum(10,20,30);
    //sum = 60;
    printf("%d + %d + %d = %d",a,b,c,sum);

}

//x/a,y,z => Formal Parameters/Arguments
//a         y       z
//10/20     20      30
//4002      5002    6002
int calculate_sum( int a,int y,int z )
{
    int d;
    d=a+y+z;
    printf("In Function a = %d\n",a);//10
    a=a+10;
    printf("In Function a = %d\n",a);//20
    return d;//60
}
*/

//Function - Multiple Return Statement YES
//Return Function Close/Dead!!!

/*
int calculate_sum( int,int,int);
void main()
{
    int a,b,c,sum;
    printf("Enter 3 Values : ");
    scanf("%d %d %d",&a,&b,&c);

    sum = calculate_sum(a,b,c);
    //sum = calculate_sum(10,20,30);
    //sum = 1;
    printf("%d + %d + %d = %d",a,b,c,sum);
}

int calculate_sum( int a,int y,int z )
{
    int d;
    return 1;
    d=a+y+z;
    printf("VowTech");
    return d;
}
*/


/*
int calculate_sum( int,int,int);
int main()
{
    int a,b,c,sum;

    printf("Enter 3 Values : ");
    return 0;
    scanf("%d %d %d",&a,&b,&c);

    sum = calculate_sum(a,b,c);
    //sum = calculate_sum(10,20,30);
    //sum = 60;
    printf("%d + %d + %d = %d",a,b,c,sum);
    return 0;
}

int calculate_sum( int x,int y,int z )
{
    int d;
    d=x+y+z;
    return d;
}
*/


/*
int calculate_sum( int,int,int);
int main()
{
    int a,b,c,sum;

    printf("Enter 3 Values : ");
    scanf("%d %d %d",&a,&b,&c);

    sum = calculate_sum(a,b,c);
    //sum = calculate_sum(10,20,30);
    //sum = 60;
    printf("%d + %d + %d = %d",a,b,c,sum);
    return 0;
}
//ReturnType FunctionName(Parameters/Arguments)
int calculate_sum( int x,int y,int z )
{
    int d;
    d=x+y+z;
    return d;
}
*/


/*
int calculate_sum( int,int,int);
int main()
{
    int a,b,c,sum;

    printf("Enter 3 Values : ");
    scanf("%d %d %d",&a,&b,&c);

    calculate_sum(a,b,c);
    //calculate_sum(10,20,30);
    //60;
    printf("%d + %d + %d = %d",a,b,c,sum);
    return 0;
}

int calculate_sum( int x,int y,int z )
{
    int d;
    d=x+y+z;
    return d;//60
}
*/



/*
int calculate_sum( int,int,int);
int main()
{
    int a,b,c;

    printf("Enter 3 Values : ");
    scanf("%d %d %d",&a,&b,&c);

    printf("%d + %d + %d = %d",a,b,c,  calculate_sum(a,b,c)   ) ;
    return 0;
}

//ANSI METHOD

int calculate_sum( int x,int y,int z )
{
    int d;
    d=x+y+z;
    return d;
}
*/


/*
int calculate_sum( int,int,int);

int main()
{
    int a,b,c;

    printf("Enter 3 Values : ");
    scanf("%d %d %d",&a,&b,&c);

    printf("%d + %d + %d = %d",a,b,c,calculate_sum(a,b,c));

    return 0;
}
//K & R Method

int calculate_sum( x,y,z )
int x,y,z;
{
    int d;
    d=x+y+z;
    return d;
}
*/


/*
char convert_char(char);

int main()
{
    char ch , cch;
    printf("Enter Any Character : ");
    scanf("%c",&ch);//A
    cch = convert_char(ch);
    printf("%c Converted Character is %c",ch,cch);
    return 0;
}
//A
//65
//32
//a
//97
char convert_char(char ch)
{
    if(ch>='A' && ch<='Z')
        return ch+32;//65+32=97 a
    if(ch>='a' && ch<='z')
        return ch-32;
    return ch;
}
*/


/*
int func();

int main()
{
    int i;
    i=func();
    printf("i is %d",i);
    return 0;
}
int func()
{
    return 10;
}
*/


/*
int func();

int main()
{
    int i;
    i=func();
    printf("i is %d",i);
    return 0;
}
int func()
{
    return (10,20,30);
}
*/


/*
int func();

int main()
{
    int i;
    i=func();
    printf("i is %d",i);
    return 0;
}
int func()
{
    return;//GV
}
*/


/*
int func();

int main()
{
    int i;
    i=func();
    //i=10;
    printf("i is %d",i);
    return 0;
}
//10
int func()
{
    return 10.25;
}
*/

/*
float func();

int main()
{
    int i;
    i=func();
    //i=10.25;
    //10
    printf("i is %d",i);
    return 0;
}
//10.25
float func()
{
    return 10.25;
}
*/


/*
float func();

int main()
{
    float i;
    i=func();
    //i=10.25;
    //10.250000
    printf("i is %f",i);
    return 0;
}
//10.25
float func()
{
    return 10.25;
}
*/



// ============== Session 21

//-Normal Function AP==FP Data Type Seq
//-AP Name & FP Name Same or different
//AP Name & FP  Location different
//-AP Name & FP Name Same => FP Values Change Then No change in AP
//-Call by Value
//-Multiple Return Statement=>When Return Statement get Code dead function
//-Return Multiple Statement but when return statement executed at that time
//-function closed/dead
//-called function back to stored or not
//-2 Types Of Method Style
//-ANSI - K&R
//


/*
void fun ( int);

void main( )
{
	int a = 30 ;
	fun ( a ) ;//fun ( 30 ) ;
	printf ( "\n%d", a ) ;//30
}
//b=30/60
void fun ( int b )
{
    printf ( "\n%d", b ) ;//30
	b = 60 ;
	printf ( "\n%d", b ) ;//60
}
*/


/*
void display ( int);

void main( )
{
	int i = 20 ;
	display ( i ) ;//display ( 20 ) ;
	printf ( "\n%d", i );//20
}
//j=20
void display ( int j )
{
	int k = 35 ;
	printf ( "\n%d", j ) ;//20
	printf ( "\n%d", k ) ;//35
	j=78;
	printf ( "\n%d", j ) ;//78
}
*/

/*
int main()
{
    int a = 1 ;
    printf ( "%d %d %d", a , ++a , a++ ) ; // printf ( Right To Left)
            //            3     3    1
    return 0;
}
*/

/*
int func();

int main()
{
    int i;
    i=func();
    printf("i is %d",i);
    return 0;
}
//10
int func()
{
    return 10;
}
*/

/*
int func();

int main()
{
    int i;
    func();
    //10
    printf("i is %d",i);//GV
    return 0;
}
//10
int func()
{
    return 10;
}
*/


/*
int func();

int main()
{
    printf("i is %d",func());
    return 0;
}
//10
int func()
{
    return 10;
}
*/

/*
int main()
{
    int i = printf("VowTech");
    //Number of Characters Return
    //Back To Stored Or Not!!!
    printf("\ni = %d",i);

    return 0;
}
*/

/*
int func();
int main()
{
    printf("\ni = %d", func() );
    return 0;
}
int func()
{
    return 10;
}
*/


/*
int main()
{
    printf("\ni = %d", printf("VowTech") );
    return 0;
}
*/


/*
int main()
{
    printf("\n%d %d %d",printf(" TC!!") ,printf(" IT"),printf("VowTech") );
    return 0;
}
*/

//VowTech IT TC!!
//5 3 7

/*
int main()
{
    if(  printf("VowTech") ) //if(  7 )
        printf("\nYes");
    else
        printf("\nNo");

    return 0;
}
*/


/*
int main()
{
    int i;
    if(  i=printf("VowTech") ) //if(  7 )
        printf("\nYes");
    else
        printf("\nNo");
    printf("\ni = %d",i);
    return 0;
}
*/

/*
int main()
{
    int i=10;
    i==1 ? printf("VowTech") :  printf("IT TC") ;


    return 0;
}
*/

/*
int main()
{
    if(  printf("VowTech") ) //if(  7 )
        ;

    return 0;
}
*/


/*
int main()
{
    while(  printf("VowTech") ) //while(  7 )
        ;

    return 0;
}
*/

/*
int main()
{
    while(  printf("VowTech") ) //while(  7 )
        break;

    return 0;
}
*/

/*
int main()
{
    for(  ;printf("VowTech"); ) //while(  7 )
        break;

    return 0;
}
*/

/*
int main()
{
    do
        ;
    while(  printf("VowTech") ); //while(  7 )


    return 0;
}
*/

/*int main()
{
    int i;
    do
        if(i==7)
            break;
    while(  i=printf("VowTech") ); //while(  7 )


    return 0;
}
*/

/*
int main()
{
    int i;

    switch(printf("VowTech"))
    {
        case 7:
            printf("YES");
            break;
    }
    return 0;
}
*/

/*
int main()
{
    int i , j ;
    printf("Enter Value Of I : ");
    j = scanf("%d",&i);
    printf("I = %d\n",i);
    printf("J = %d\n",j);

    return 0;
}
*/


/*
int main( )
{

	float  square(float);//FD&P

	float a, b ;
	printf ( "\nEnter any number  : " ) ;
	scanf ( "%f", &a ) ;//3.1

	b = square ( a ) ;
	//b = square ( 3.1 ) ;
	//b = 9.610000 ;
	printf ( "\nSquare of %f is %f", a, b ) ;
	return 0;
}
float square ( float x )
{
	float y ;
	y = x * x ;
	return ( y ) ;//9.61
}
*/

/*
int main( )
{

	int  square(float);//FD&P

	float a, b ;
	printf ( "\nEnter any number  : " ) ;
	scanf ( "%f", &a ) ;//3.1

	b = square ( a ) ;
	//b = square ( 3.1 ) ;
	//b = 9 ;
	//9.000000
	printf ( "\nSquare of %f is %f", a, b ) ;
	return 0;
}
//9
int square ( float x )
{
	float y ;
	y = x * x ;
	return ( y ) ;//9.61
}
*/

/*
void main( )
{
	void gospel( ) ;//FD&P

	gospel( ) ;

}
void gospel( )
{
	printf ( "\nViruses are electronic bandits..." ) ;
	printf ( "\nwho eat nuggets of information..." ) ;
	printf ( "\nand chunks of bytes..." ) ;
	printf ( "\nwhen you least expect..." ) ;
}
*/



/*
int main()
{
    int i=2147483648;
    printf("%d\n",i);//-2147483648

    unsigned int salary = 4294967295 ;
    printf("%u\n",salary);//4294967295

    salary = 4294967296 ;
    printf("%u\n",salary);//0

    salary = 4294967297 ;
    printf("%u\n",salary);//1

}
*/

