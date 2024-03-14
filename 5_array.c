



//======================== Session 24 Array
//5] Function
//6] Array Expert   int
//7] String Expert  char
//-------------------
//Apti + LD + CR + FTF=> Crack

/*
int main()
{
    int x = 10 ;
    x=20;
    x=30;
    printf("%d",x);//30
    return 0;
}
//x
//10/20/30
//1002
*/

//0     1       2       3       4           Index   0       1
//10    20      30      40      50          Values  arr[0]  arr[1]
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1]

/*
int main()
{
    int arr[5] = {10,20,30,40,50} ;
    printf("%d %u=>%d\n",0,&arr[0],arr[0]);
    printf("%d %u=>%d\n",1,&arr[1],arr[1]);
    printf("%d %u=>%d\n",2,&arr[2],arr[2]);
    printf("%d %u=>%d\n",3,&arr[3],arr[3]);
    printf("%d %u=>%d\n",4,&arr[4],arr[4]);
    return 0;
}
*/

//0     1       2       3       4           Index   0       1
//10    20      30      40      50          Values  arr[0]  arr[1]
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1]

/*
int main()
{
    int arr[] = {10,20,30,40,50} ;
    int i , n=5 ;
    for(i=0;i<n;i++)//0 1 <5
        printf("%d %u=>%d\n",i,&arr[i],arr[i]);

    return 0;
}
*/

//Tips & Traps
//Collection of Similar Items/Elements
//Similar Items/Elements?
//But Same Data Type.

//0     1       2       3       4           Index   0       1
//10    20      30      40      50          Values  arr[0]  arr[1]
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1]

/*
int main()
{
    int arr[] = {10,20,30.1111,40.1,'A'} ;
    int i , n=5 ;
    for(i=0;i<n;i++)//0 1 <5
        printf("%d %u=>%d\n",i,&arr[i],arr[i]);

    return 0;
}
*/


//0     1       2       3       4           Index   0       1
//10    20      30      40      50          Values  arr[0]  arr[1]
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1]

/*
int main()
{
    int arr[] = {10,20,30,40,50} ;//10,20,30,40,50,GV,GV.....
    int i , n=10 ;
    for(i=0;i<n;i++)//0 1 <5
        printf("%d %u=>%d\n",i,&arr[i],arr[i]);

    return 0;
}
*/


//0     1       2       3       4           Index   0       1
//10    20      30      40      50          Values  arr[0]  arr[1]
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1]

/*
int main()
{
    int arr[5] = {10,20,30,40,50} ;//10,20,30,40,50,GV,GV.....
    int i , n=5 ;
    for(i=0;i<n;i++)//0 1 <5
        printf("%d %u=>%d\n",i,&arr[i],arr[i]);

    return 0;
}
*/

//0     1       2       3       4           Index   0       1
//10    20      30      40      50          Values  arr[0]  arr[1]
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1]

/*
int main()
{
    int arr[5] = {10,20,30,40,50} ;//10,20,30,40,50,GV,GV.....
    int i , n=10 ;
    for(i=0;i<n;i++)//0 1 <5
        printf("%d %u=>%d\n",i,&arr[i],arr[i]);

    return 0;
}
*/


//0     1       2       3       4           Index   0       1
//10    20      30      40      50          Values  arr[0]  arr[1]
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1]

//Ok -GCC
//Error-TC Too Many Initializer
/*
int main()
{
    int arr[5] = {10,20,30,40,50,60,70,80,90} ;//10,20,30,40,50,GV,GV.....
    int i , n=10 ;
    for(i=0;i<n;i++)//0 1 <5
        printf("%d %u=>%d\n",i,&arr[i],arr[i]);

    return 0;
}
*/

/*
int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90} ;//10,20,30,40,50,GV,GV.....
    int i , n=10 ;
    for(i=0;i<n;i++)//0 1 <5
        printf("%d %u=>%d\n",i,&arr[i],arr[i]);

    return 0;
}
*/

//0     1       2       3       4           Index   0       1
//10    20      30      40      50          Values  arr[0]  arr[1]
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1]

/*
int main()
{
    int arr[5] = {10,20} ;//10,20,0,0,0,GV,GV.....
    int i , n=10 ;
    for(i=0;i<n;i++)//0 1 <5
        printf("%d %u=>%d\n",i,&arr[i],arr[i]);

    return 0;
}
*/

//0     1       2       3       4           Index   0       1
//10    20      30      40      50          Values  arr[0]  arr[1]
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1]

// 20 Exams 25/26 -> Suyash Saurabh Riddhik B D V

/*
int main()
{
    int marks[10];
    int n , i ;
    float per , total_marks=0;

    printf("Enter Number Of Subjects : ");
    scanf("%d",&n);//n=5

    for(i=0;i<n;i++)// 0 1 <5
    {
        printf("\nEnter Subject %d Marks : ",i+1);
        scanf("%d",&marks[i]);
    }

    printf("\nDisplay All Subjects Marks!!!\n");
    for(i=0;i<n;i++)//0 <5
    {
        printf("\nSubject %d marks is %d",i+1,marks[i]);
        total_marks += marks[i];
    }

    per = total_marks / n ;
    printf("\nTotal Marks %f",total_marks);
    printf("\nPercentage %f%c.",per,'%');
    return 0;
}
*/


//0     1       2       3       4           Index   0       1
//10    20      30      40      50          Values  arr[0]  arr[1]
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1]

//TC - Problem Output Right - Bounds No Check
//GCC- Problem Output Wrong - Bounds Yes Check

/*
int main()
{
    int marks[2];
    int n , i ;
    float per , total_marks=0;
    printf("Enter Number Of Subjects : ");
    scanf("%d",&n);//n=5

    for(i=0;i<n;i++)//0 <5
    {
        printf("\nEnter Subject %d Marks : ",i+1);
        scanf("%d",&marks[i]);
    }

    printf("\nDisplay All Subjects Marks!!!\n");
    for(i=0;i<n;i++)//0 <5
    {
        printf("\nSubject %d marks is %d",i+1,marks[i]);
        total_marks += marks[i];
    }

    per = total_marks / n ;
    printf("\nTotal Marks %f",total_marks);
    printf("\nPercentage %f%c.",per,'%');
    return 0;
}
*/


//0     1       2       3       4           Index   0       1       %d
//10.0  20.0    30      40      50          Values  arr[0]  arr[1]  %f %d %c
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1] %u

/*
int main()
{
    float arr[5] = {10,20,30.1,40.4,50.5} ;
    int i , n=5 ;
    for(i=0;i<n;i++)//0 1 <5
        printf("%d %u=>%f\n",i,&arr[i],arr[i]);

    return 0;
}
*/



//0     1       2       3       4           Index   0       1       %d
//A     B       C       D       E          Values  arr[0]  arr[1]  %f %d %c
//1002  1003    1004    1005    1006        Address &arr[0] &arr[1] %u

/*
int main()
{
    char arr[5] = {'A','B','C',68.1,69} ;
    int i , n=5 ;
    for(i=0;i<n;i++)//0 1 <5
        printf("%d %u=>%c\n",i,&arr[i],arr[i]);

    return 0;
}
*/

//1 Variable 1
//1 Variable M - Array

//0     1       2       3       4    100        Index   0       1       %d
//0     1       2       3       .... 100        Values  arr[0]  arr[1]  %f %d %c
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1] %u

/*
int main( )
{
	int num[40], i ;

	for ( i = 0 ; i <= 100 ; i++ )
		num[i] = i ;

    for ( i = 0 ; i <= 100 ; i++ )
        printf("%d\t",num[i]);

    return 0;
}
*/

// Passing Array Elements to a Function

//0     1       2       3       4           Index   0       1
//10    20      30      40      50          Values  arr[0]  arr[1]
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1]

/*
void display(int);

int main()
{
    int arr[] = {10,20,30,40,50} ;//10,20,30,40,50
    int i , n=5 ;
    for(i=0;i<n;i++)// 0 1 2 3 4 5< 5
        display(arr[i]); //display(arr[1]); display(20);

    return 0;
}
//value =20
void display(int value)
{
    printf("%d\t",value);//10   20  30
}
*/


// Passing Array Element Address(Reference) to a Function

//0     1       2       3       4           Index   0       1
//10    20      30      40      50          Values  arr[0]  arr[1]
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1]

/*
void display(int*);

int main()
{
    int arr[] = {10,20,30,40,50} ;
    int i , n=5 ;
    for(i=0;i<n;i++)//0 1 2 3 4 5< 5
        display(&arr[i]); //display(&arr[1]); display(1006);

    return 0;
}
//ptr
//1006
//2002
void display(int *ptr)
{
    printf("%u=>%d\n",ptr,*ptr);
    //1002=>10
    //1006=>20
    //.... ..
}
*/


//0     1       2       3       4           Index   0       1
//1     1       1       1       1          Values  arr[0]  arr[1]
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1]

/*
void display(int*);

int main()
{
    int arr[] = {10,20,30,40,50} ;//10,20,30,40,50
    int i , n=5 ;

    printf("\nIn Main\n");
    for(i=0;i<n;i++)
        printf("%u=>%d\n",&arr[i],arr[i]);

    //1002=>10
    //1006=>20
    //....=>..

    printf("\nIn Function\n");
    for(i=0;i<n;i++)//0 1 2 3 4 5< 5
        display(&arr[i]); //display(&arr[0]); display(1002);

    printf("\nIn Main\n");
    for(i=0;i<n;i++)
        printf("%u=>%d\n",&arr[i],arr[i]);

    //1002=>1
    //1006=>1
    //....=>..

    return 0;
}
//ptr
//1006
//2002
void display(int *ptr)
{
    printf("%u=>%d\n",ptr,*ptr);
    *ptr=1;//*1002=1;
    //1002 10
    //1006 20
    //.... ..
}
*/

//Pointers and Arrays
/*
int main( )
{
	int i = 3, *x ;
	float j = 1.5, *y ;
	char k = 'c', *z ;
//i         j           k
//3         1.5         c
//1002      2002        3002

//x         y           z
//1002      2002        3002
//4002      5002        6002

	printf ( "\nValue of i = %d", i ) ;//3
	printf ( "\nValue of j = %f", j ) ;//1.500000
	printf ( "\nValue of k = %c", k ) ;//c

	x = &i ;
	y = &j ;
	z = &k ;

	printf ( "\nOriginal address in x = %u", x ) ;//1002
	printf ( "\nOriginal address in y = %u", y ) ;//2002
	printf ( "\nOriginal address in z = %u", z ) ;//3002

	x++ ;//x= x + 1 x = 1002+1*4=1006
	y++ ;//y= y + 1 y = 2002+1*4=2006
	z++ ;//z= z + 1 x = 3002+1*1=3003

//x         y           z
//1006      2006        3003
//4002      5002        6002

	printf ( "\nNew address in x = %u", x ) ;//1006
	printf ( "\nNew address in y = %u", y ) ;//2006
	printf ( "\nNew address in z = %u", z ) ;//3003


	return 0;
}
*/

/*
int main( )
{
	int i = 3, *x ;
	float j = 1.5, *y ;
	char k = 'c', *z ;
//i         j           k
//3         1.5         c
//1002      2002        3002

//x         y           z
//1002      2002        3002
//4002      5002        6002

	printf ( "\nValue of i = %d", i ) ;//3
	printf ( "\nValue of j = %f", j ) ;//1.500000
	printf ( "\nValue of k = %c", k ) ;//c

	x = &i ;
	y = &j ;
	z = &k ;

	printf ( "\nOriginal address in x = %u", x ) ;//1002
	printf ( "\nOriginal address in y = %u", y ) ;//2002
	printf ( "\nOriginal address in z = %u", z ) ;//3002

	x+=4 ;//x= x + 4 x = 1002+4*4=1018
	y+=5 ;//y= y + 5 y = 2002+5*4=2022
	z+=10 ;//x= x + 10 x = 3002+10*1=3012

//x         y           z
//1018      2022        3012
//4002      5002        6002

	printf ( "\nNew address in x = %u", x ) ;//1006
	printf ( "\nNew address in y = %u", y ) ;//2006
	printf ( "\nNew address in z = %u", z ) ;//3003


	return 0;
}
*/


/*
int main( )
{
	int i = 3, *x ;
	float j = 1.5, *y ;
	char k = 'c', *z ;
//i         j           k
//3         1.5         c
//1002      2002        3002

//x         y           z
//1002      2002        3002
//4002      5002        6002

	printf ( "\nValue of i = %d", i ) ;//3
	printf ( "\nValue of j = %f", j ) ;//1.500000
	printf ( "\nValue of k = %c", k ) ;//c

	x = &i ;
	y = &j ;
	z = &k ;

	printf ( "\nOriginal address in x = %u", x ) ;//1002
	printf ( "\nOriginal address in y = %u", y ) ;//2002
	printf ( "\nOriginal address in z = %u", z ) ;//3002

	x-=4 ;//x= x - 4 x = 1002-4*4=1018
	y-=5 ;//y= y - 5 y = 2002-5*4=2022
	z-=10 ;//x= x - 10 x = 3002-10*1=3012

//x         y           z
//1018      2022        3012
//4002      5002        6002

	printf ( "\nNew address in x = %u", x ) ;//1006
	printf ( "\nNew address in y = %u", y ) ;//2006
	printf ( "\nNew address in z = %u", z ) ;//3003


	return 0;
}
*/

/*

int main( )
{
	int i = 3, *x ;
	float j = 1.5, *y ;
	char k = 'c', *z ;
//i         j           k
//3         1.5         c
//1002      2002        3002

//x         y           z
//1002      2002        3002
//4002      5002        6002

	printf ( "\nValue of i = %d", i ) ;//3
	printf ( "\nValue of j = %f", j ) ;//1.500000
	printf ( "\nValue of k = %c", k ) ;//c

	x = &i ;
	y = &j ;
	z = &k ;

	printf ( "\nOriginal address in x = %u", x ) ;//1002
	printf ( "\nOriginal address in y = %u", y ) ;//2002
	printf ( "\nOriginal address in z = %u", z ) ;//3002

	x*=4 ;//Error
	y/=5 ;//Error
	z%=10 ;//Error

//x         y           z
//1018      2022        3012
//4002      5002        6002

	printf ( "\nNew address in x = %u", x ) ;//1006
	printf ( "\nNew address in y = %u", y ) ;//2006
	printf ( "\nNew address in z = %u", z ) ;//3003


	return 0;
}
*/

/*
int main()
{
    int i = 4, *j, *k ;
    j = &i ;
//i         j       k
//4         1002    GV
//1002      2002    3002
    printf("%u\n",&i);//1002
    printf("%u\n",j);//1002
    j = j + 1 ;//j=1002+1*4=1006
//j
//1002/1006
//2002
    printf("%u\n",j);//1006
    j = j + 9 ; //j=1006+9*4=1042
//j
//1002/1006/1042
//2002
    printf("%u\n",j);//1042
    k = j + 3 ; //k = 1042+3*4  k = 1054
//j
//1002/1006/1042
//2002

//k
//1054
//3002
    printf("%u\n",j);//1042
    printf("%u\n",k);//1054
    return 0;
}
*/


//0     1       2       3       4       5       6
//10    20      30      45      67      56      74
//1002  1006    1010    1014    1018    1022    1026

/*
int main( )
{
	int arr[ ] = { 10, 20, 30, 45, 67, 56, 74 } ;
	int *i, *j ;
	i = &arr[1] ;
	j = &arr[5] ;
//i         j
//1006      1022
//2002      3002
	printf ( "%d %d", j - i, *j - *i ) ;//4 36

	//j-i = 5 - 1 = 4
	//*j-*i = *1022 - *1006 = 56 - 20=36

	printf ( "\n%d %d", i - j, *i - *j ) ;//-4 -36

	i = &arr[6] ;
	j = &arr[3] ;

//i         j
//1022      1014
//2002      3002

	printf ( "\n%d %d", i - j, *i - *j ) ;//3 29
	//printf ( "\n%d %d", i + j, *i - *j ) ;//Error
	//printf ( "\n%d %d", i * j, *i - *j ) ;//Error
	//printf ( "\n%d %d", i / j, *i - *j ) ;//Error
	//printf ( "\n%d %d", i % j, *i - *j ) ;//Error
	return 0;
}
*/

//arr
//0     1       2       3       4       5       6
//10    20      36      72      45      36      74
//1002  1006    1010    1014    1018    1022    1026

//&arr[0] 1002
//arr => 1002 =>Base Address
//arr+0=1002+0*4= 1002
//0+arr =1002

//arr => Base Address => 1002

//arr[4] => 45
//&arr[4] => 1018
//*(&arr[4]) => *1018 => 45
//arr+4 = 1002+4*4=1018=>4+arr
//*(arr+4) = 1002+4*4=*1018=> 45=>*(4+arr)

/*
int main( )
{
	int arr[ ] = { 10, 20, 36, 72, 45, 36 } ;
	int *j, *k ;
	j = &arr [ 4 ] ;//j=1018
	k = ( arr + 4 ) ;//k=1002+4*4=1018

	if ( j == k )//1018==1018
		printf ( "The two pointers point to the same location %u %u => %d %d",j,k,*j,*k ) ;
	else
		printf ( "The two pointers do not point to the same location" ) ;
    return 0;
}
*/

//Continue....

//i
//0     1       2       3       4       5       6
//10    20      30      40      50      36      74
//1002  1006    1010    1014    1018    1022    1026
//              ptr

//ptr
//1002/1006/1010
//2002

/*
int main( )
{
	int arr[ ] = { 10, 20, 30, 40, 50 } ;
	int i,n=5;
	int *ptr;
	ptr=arr;//ptr=1002

	for(i=0;i<n;i++)//0 1 <5
    {
        printf("%u=>%d\n",ptr,*ptr);//1002=>10 1006=>20
        ptr++;//ptr=1006+1*4=1010
    }
	return 0;
}
*/



//Pointers Rules- 8/9/10
//1] Pointer + IC => Pointer + IC*SIZEOFDATATYPE
//2] Pointer - IC => Pointer - IC*SIZEOFDATATYPE
//3] Pointer * / % OTher OP IC => Error
//4] Pointer1 = Pointer2
//5] Pointer1 - Pointer2 = > Index Minus!!!
//6] Pointer1 + * / % Pointer2 = > Error
//7] Array Direct Name=> Base Address=> 1002


//i
//0     1       2       3       4       5       6
//10    20      30      40      50      36      74
//1002  1006    1010    1014    1018    1022    1026
//      ptr

//ptr
//1002/1006
//2002

//arr[0] 0[arr] Syntax!!!
//arr+0 =1002 +0*4=1002

//*&arr[4] *1018 50
// arr[4] 50
// 4[arr] 50
// *&4[arr] *1018 50
// *(arr+4) *(1002+4*4) * 1018 50
// *(4+arr) *(4*4+1002) * 1018 50

/*
int main( )
{
	int arr[ ] = { 10, 20, 30, 40, 50 } ;
	int i,n=5;
    int *ptr=arr;
	for(i=0;i<n;i++)// 0 1 < 5
    {
        printf("%u %u ",&arr[i],&i[arr]);
        printf("%u %u %u=>",arr+i,i+arr,ptr);
        printf("%d %d ",*(&arr[i]),*(&i[arr]));
        printf("%d %d ",arr[i],i[arr]);
        printf("%d %d %d\n",*(arr+i),*(i+arr),*ptr );
        ptr++;

        //1002=> 10 10 10 10
        //1006=> 20 20 20 20
    }
	return 0;
}
*/



//Whole Array Pass To Function as Argument!!!

//i
//0     1       2       3       4       5       6
//10    20      30      40      50      36      74
//1002  1006    1010    1014    1018    1022    1026
//              ptr

/*
void display(int*,int);

int main( )
{
	int arr[ ] = { 10, 20, 30, 40, 50 } ;
	int n=5;
    display(arr,n); //display(1002,5);
	return 0;
}
void display(int *ptr,int n)
{
    int i;
    for(i=0;i<n;i++)//0 1 2 < 5
    {
        printf("%u=>%d\n",ptr,*ptr);//1002 10   1006 20 1010 30
        ptr++;//ptr=1006+1=1010
    }
}
*/



/*
void display(int*,int);

int main( )
{
	int arr[ ] = { 10, 20, 30, 40, 50 } ;
	int n=5,i;

	printf("\nIn Main\n");
	for(i=0;i<n;i++)//0 1<5
        printf("%u=>%d\n",&arr[i],arr[i]);

    display(arr,n); //display(1002,5);

	printf("\nIn Main\n");
	for(i=0;i<n;i++)//0 1<5
        printf("%u=>%d\n",&arr[i],arr[i]);

	return 0;
}
void display(int *ptr,int n)
{
    printf("\nIn Function\n");
    int i;
    for(i=0;i<n;i++)//0 1<5
    {
        printf("%u=>%d\n",ptr,*ptr);//1002 10
        ptr++;//1006
    }
}
*/

//i
//0     1       2       3       4       5       6
//1     1       30      40      50      36      74
//1002  1006    1010    1014    1018    1022    1026
//      ptr

/*
void display(int*,int);

int main( )
{
	int arr[ ] = { 10, 20, 30, 40, 50 } ;
	int n=5,i;

	printf("\nIn Main\n");
	for(i=0;i<n;i++)//0 1<5
        printf("%u=>%d\n",&arr[i],arr[i]);

    display(arr,n); //display(1002,5);

	printf("\nIn Main\n");
	for(i=0;i<n;i++)//0 1<5
        printf("%u=>%d\n",&arr[i],arr[i]);

	return 0;
}
void display(int *ptr,int n)
{
    printf("\nIn Function\n");
    int i;
    for(i=0;i<n;i++)//0 1<5
    {
        printf("%u=>%d\n",ptr,*ptr);//1002 10 1006 20
        *ptr=1;
        ptr++;
    }
}
*/


//Rule
//1]Pointer + IC*SIZE
//2]Pointer - IC*SIZE
//3] NO ERROR => Pointer * / % Other OP  IC*SIZE
//4] 1 Pointer = 2 Pointer
//5] 1 Pointer - 2 Pointer = Index Minus
//6] NO Error => 1 Pointer + * / % 2 Pointer = Index Minus
//7] Array Name => Base Address 1002
//8] ArrayName + 1 Integer Constant => Automatically Next Location
//9] Actual Array Pass  => Formal Change Bact To Change Actual
//   All Arrays Are Call By Reference
//10]

//Array Access Way
//arr[4]    4[arr]  *(&arr[4]) *(&4[arr]) *(arr+4) *(4+arr)
//int *ptr=arr;
//*ptr *1002 10
//ptr++
//*ptr *1006 20

//i
//0     1       2       3       4       5       6
//1     1       30      40      50      36      74
//1002  1006    1010    1014    1018    1022    1026


//===========================Session 26


// Two Dimensional Arrays

//      0       1       2       3
//0     00      01      02      03          Index
//      1       2       3       4           Value   arr[0][2]=>3
//      1002    1006    1010    1014        Address &arr[0][2]=>1010
//1     10      11      12      13
//      5       6       7       8
//      1018    1022    1026    1030
//2     20      21      22      23
//      9       10      11      12
//      1034    1038    1042    1046

/*
int main( )
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int i,j;
    for(i=0;i<3;i++)// 0 1 < 3 rows
    {
        //i=1
        for(j=0;j<4;j++)//0 1 2 3 4<4 columns
            printf("[%d][%d]=>%u=%d\t",i,j,&arr[i][j],arr[i][j]);
            //[0][0]=>1002=1   [0][1]=>1006=2   [0][2]=>1010=3  [0][3]=>1014=4
            //10   11   12  13
            //20   21   22  23

        printf("\n");
    }
    return 0;
}
*/

//      0       1       2       3
//0     00      01      02      03
//      1       2       3       4
//      1002    1006    1010    1014
//1     10      11      12      13
//      5       6       7       8
//      1018    1022    1026    1030
//2     20      21      22      23
//      9       10      11      12
//      1034    1038    1042    1046

/*
int main( )
{
    int arr[][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int i,j;
    for(i=0;i<3;i++)// 0 1 2 < 3 rows
    {
        //i=0
        for(j=0;j<4;j++)//0 1 2 3 4<4 columns
        {
            printf("[%d][%d]=>%u=%d\t",i,j,&arr[i][j],arr[i][j]);
            //00   01   02  03
            //10   11   12  13
            //20   21   22  23
        }
        printf("\n");
    }
    return 0;
}
*/


// Two Dimensional Arrays

//      0       1       2       3
//0     00      01      02      03
//      1       2       3       4
//      1002    1006    1010    1014
//1     10      11      12      13
//      5       6       7       8
//      1018    1022    1026    1030
//2     20      21      22      23
//      9       10      11      12
//      1034    1038    1042    1046

/*
int main( )
{
    int arr[3][]={1,2,3,4,5,6,7,8,9,10,11,12}; //Error
    int i,j;
    for(i=0;i<3;i++)// 0 1 2 < 3 rows
    {
        //i=1
        for(j=0;j<4;j++)//0 1 2 3 4<4 columns
        {
            printf("[%d][%d]=>%u=%d\t",i,j,&arr[i][j],arr[i][j]);
            //00   01   02  03
            //10   11   12  13
            //20   21   22  23
        }
        printf("\n");
    }
    return 0;
}
*/

// Two Dimensional Arrays

//      0       1       2       3
//0     00      01      02      03
//      1       2       3       4
//      1002    1006    1010    1014
//1     10      11      12      13
//      5       6       7       8
//      1018    1022    1026    1030
//2     20      21      22      23
//      9       10      0       0
//      1034    1038    1042    1046

/*
int main( )
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10};
    int i,j;
    for(i=0;i<3;i++)// 0 1 2 < 3 rows
    {
        //i=1
        for(j=0;j<4;j++)//0 1 2 3 4<4 columns
        {
            printf("[%d][%d]=>%u=%d\t",i,j,&arr[i][j],arr[i][j]);
            //00   01   02  03
            //10   11   12  13
            //20   21   22  23
        }
        printf("\n");
    }
    return 0;
}
*/

// Two Dimensional Arrays

//      0       1       2       3
//0     00      01      02      03
//      1       2       3       4
//      1002    1006    1010    1014
//1     10      11      12      13
//      5       6       7       8
//      1018    1022    1026    1030
//2     20      21      22      23
//      9       10      11      12
//      1034    1038    1042    1046

/*
int main( )
{
    int arr[][4]=
                {
                    {1,2,3,4} ,
                    {5,6,7,8} ,
                    {9,10,11,12}
                };
    int i,j;
    for(i=0;i<3;i++)// 0 1 2 < 3 rows
    {
        //i=1
        for(j=0;j<4;j++)//0 1 2 3 4<4 columns
        {
            printf("[%d][%d]=>%u=%d\t",i,j,&arr[i][j],arr[i][j]);
            //00   01   02  03
            //10   11   12  13
            //20   21   22  23
        }
        printf("\n");
    }
    return 0;
}
*/



// Two Dimensional Arrays

//arr
//      0       1       2       3
//0     00      01      02      03
//      1       2       3       4
//      1002    1006    1010    1014
//1     10      11      12      13
//      5       6       7       8
//      1018    1022    1026    1030
//2     20      21      22      23
//      9       10      11      12
//      1034    1038    1042    1046

//arr => 1002 arr[0][0]=1 &arr[0][0]=1002 *&arr[0][0]=*1002=1

//arr[0] = 1002 = arr+0 => 1002 + 0*16=1002 => 0+arr
//arr[1] = 1018 = arr+1 => 1002 + 1*16=1018 => 1+arr
//arr[2] = 1034 = arr+2 => 1002 + 2*16=1034 => 2+arr

// &arr[2][3] = > 1046
//*&arr[2][3] = > *1046 = 12
//*(arr[2]+3) = > *(1034+3*4)=*(1034+12)=*1046=12
//*(*(arr+2)+3) => 1002 + 2*16 + 3*4 = 1002+32+12=*1046=12
//arr[2][3]

/*
int main( )
{
    int arr[][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int i,j;
    for(i=0;i<3;i++)// 0 1 2 < 3 rows
    {
        //i=1
        for(j=0;j<4;j++)//0 1 2 3 4<4 columns
        {
            printf("[%d][%d]=>%u=%d\t",i,j,&arr[i][j],arr[i][j]);
            //00   01   02  03
            //10   11   12  13
            //20   21   22  23
        }
        printf("\n");
    }

    printf("\nBase Address %u",arr);//1002

    printf("\n1D\n");
    for(i=0;i<3;i++)
        printf("%u %u %u\n",arr[i],arr+i,i+arr);


    printf("\nMultiple Way Access\n");
    for(i=0;i<3;i++)// 0 1 2 < 3 rows
    {
        //i=1
        for(j=0;j<4;j++)//0 1 2 3 4<4 columns
        {
            printf("%u=>",&arr[i][j]);
            printf("%d %d ",*(&arr[i][j]),arr[i][j]);
            printf("%d ", *(arr[i]+j));
            printf("%d\t", *(*(arr+i)+j)  );
        }
        printf("\n");
    }

    return 0;
}
*/


// Pointers and 2-Dimensional Arrays

// Two Dimensional Arrays

//      0       1       2       3
//0     00      01      02      03
//      1       2       3       4
//      1002    1006    1010    1014
//1     10      11      12      13
//      5       6       7       8
//      1018    1022    1026    1030
//2     20      21      22      23
//      9       10      11      12
//      1034    1038    1042    1046

/*
int main( )
{
    int arr[][4]=
                {
                    {1,2,3,4} ,
                    {5,6,7,8} ,
                    {9,10,11,12}
                };
    int ( *p )[4] ;// p pointer => address
	int i, j, *pint ;
	for ( i = 0 ; i < 3 ; i++ )//0 1<3
	{
		p = arr[i] ;//p = 1018   arr+i i+arr &arr[i] arr[i]
		pint = p ; // pint = 1018

		for ( j = 0 ; j < 4 ; j++ )//0 1 2 3 4<4
            printf ( "%d\t", *( pint + j ) ) ;
            //*(1002+0*4)=*1002=1
            //*(1002+1*4)=*1006=2
            //*(1002+2*4)=*1010=3
            //*(1002+3*4)=*1014=4

            //*(1018+0*4)=*1018=5
            //*(1018+1*4)=*1022=6
            //*(1018+2*4)=*1026=7
            //*(1018+3*4)=*1030=8

        printf("\n");
	}

    return 0;
}
*/


// Two Dimensional Arrays

//      0       1       2       3
//0     00      01      02      03
//      1       2       3       4
//      1002    1006    1010    1014
//1     10      11      12      13
//      5       6       7       8
//      1018    1022    1026    1030
//                              ptr
//2     20      21      22      23
//      9       10      11      12
//      1034    1038    1042    1046

/*
int main( )
{
    int arr[][4]=
                {
                    {1,2,3,4} ,
                    {5,6,7,8} ,
                    {9,10,11,12}
                };
    int i,j,*ptr;
    ptr=arr;//1002

    for(i=0;i<3;i++)// 0 1 < 3 rows
    {
        //i=1
        for(j=0;j<4;j++)//0 1 2 3 4<4 columns
        {
            printf("%u=>%d\t",ptr,*ptr);
            ptr++;//1018
            //1002=>1   1006=>2     1010=>3     1014=>4
            //1018=>5   1022=>6     1026=>7     1030=>8
        }
        printf("\n");
    }
    return 0;
}
*/


//0
//10/1
//1002
/*
void display(int*,int);

int main( )
{
	int arr[] = { 10, 20, 30, 40, 50 } ;
	int n=5,i;
	printf("\nIn Main\n");
	for(i=0;i<n;i++)//0 1<5
        printf("%u=>%d\n",&arr[i],arr[i]);

    display(arr,n); //display(1002,5);

	printf("\nIn Main\n");
	for(i=0;i<n;i++)//0 1<5
        printf("%u=>%d\n",&arr[i],arr[i]);

	return 0;
}
void display(int *ptr,int n)
{
    printf("\nIn Function\n");
    int i;
    for(i=0;i<n;i++)//0 1<5
    {
        printf("%u=>%d\n",ptr,*ptr);
        *ptr=1;
        ptr++;
    }
}
*/

//arr - base Address
//arr - as it is array copy int arr[]

/*
void display(int[],int);

int main( )
{
	int arr[ ] = { 10, 20, 30, 40, 50 } ;
	int n=5,i;
	printf("\nIn Main\n");
	for(i=0;i<n;i++)//0 1<5
        printf("%u=>%d\n",&arr[i],arr[i]);

    display(arr,n); //display(1002,5);

	printf("\nIn Main\n");
	for(i=0;i<n;i++)//0 1<5
        printf("%u=>%d\n",&arr[i],arr[i]);

	return 0;
}
void display(int num[ ],int n)
{
    printf("\nIn Function\n");
    int i;
    for(i=0;i<n;i++)//0 1<5
    {
        printf("%u=>%d\n",&num[i],num[i]);
        num[i] =1;
    }
}
*/


// Passing 2-D Array To a Function

//      0       1       2       3
//0     00      01      02      03
//      1       2       3       4
//      1002    1006    1010    1014
//1     10      11      12      13
//      5       6       7       8
//      1018    1022    1026    1030
//2     20      21      22      23
//      9       10      11      12
//      1034    1038    1042    1046

/*
int main( )
{
	int a[3][4] =
	{
		1, 2, 3, 4,
		5, 6, 7, 8,
		9, 10, 11, 12
	} ;

    printf("\nDisplay Function\n");
	display ( a, 3, 4 ) ;//1002,3,4

	printf("\nShow Function\n");
	show ( a , 3, 4 ) ; //show ( BA 1002/AS IT IS ARRAY COPY

	printf("\nPrint Function\n");
	print ( a , 3 , 4 ) ;//print ( BA1002/AS IT IS ARRAY COPY , 3, 4 ) ;
}
//q=1002
void display ( int *q, int row, int col )
{
	int i, j ;
	for ( i = 0 ; i < row ; i++ )//0 1
	{
	    //i=1
		for ( j = 0 ; j < col ; j++ )//0 1 2 3
            printf ( "%d\t", * ( q + i * col + j ) ) ;
//*(1002 + 0*4 + 0) => *(1002+0+0)=>*(1002+0)=>*(1002+0*4)=*1002=1
//*(1002 + 0*4 + 1) => *(1002+0+1)=>*(1002+1)=>*(1002+1*4)=*1006=2
//*(1002 + 0*4 + 2) => *(1002+0+2)=>*(1002+2)=>*(1002+2*4)=*1010=3
//*(1002 + 0*4 + 3) => *(1002+0+3)=>*(1002+3)=>*(1002+3*4)=*1014=4

//*(1002 + 1*4 + 0) => *(1002+4+0)=>*(1002+4)=>*(1002+4*4)=*1018=5
//*(1002 + 1*4 + 1) => *(1002+4+1)=>*(1002+5)=>*(1002+5*4)=*1022=6
//*(1002 + 1*4 + 2) => *(1002+4+2)=>*(1002+6)=>*(1002+6*4)=*1026=7
//*(1002 + 1*4 + 3) => *(1002+4+3)=>*(1002+7)=>*(1002+7*4)=*1030=8

//*(1002 + 2*4 + 0) => *(1002+8+0)=>*(1002+8)=>*(1002+8*4)=*1034=9
//*(1002 + 2*4 + 1) => *(1002+8+1)=>*(1002+9)=>*(1002+9*4)=*1038=10
//*(1002 + 2*4 + 2) => *(1002+8+2)=>*(1002+10)=>*(1002+10*4)=*1042=11
//*(1002 + 2*4 + 3) => *(1002+8+3)=>*(1002+11)=>*(1002+11*4)=*1046=12

		printf ( "\n" ) ;
	}
	printf ("\n" ) ;
}
//q=1002
void show ( int ( *q )[4], int row, int col )
{
	int i, j ;
	int *p ;
	for ( i = 0 ; i < row ; i++ )//0 1<3
	{
		p = q + i ;
		//p = 1002+ 0 * 16 = 1002
		//p = 1002+ 1*16= 1018
		//p = 1002+ 2*16= 1034
		for ( j = 0 ; j < col ; j++ )//0 1 2 3
			printf ( "%d\t", * ( p + j ) ) ;
			//*(1002+0*4)=*1002=1
            //*(1002+1*4)=*1006=2
            //*(1002+2*4)=*1010=3
            //*(1002+3*4)=*1014=4

            //*(1018+0*4)=*1018=5
            //*(1018+1*4)=*1022=6
            //*(1018+2*4)=*1026=7
            //*(1018+3*4)=*1030=8

            //*(1034+0*4)=*1034=9
            //*(1034+1*4)=*1038=10
            //*(1034+2*4)=*1042=11
            //*(1034+3*4)=*1046=12

			printf ( "\n" ) ;
	}
	printf ( "\n" ) ;
}

void print ( int a[3][4], int row, int col )
{
	int i, j ;
	for ( i = 0 ; i < row ; i++ )//0 1<3
	{
		for ( j = 0 ; j < col ; j++ )//0 1 2 3<4
			printf ( "%d\t", a[i][j]) ;
			//00 01 02 03
			//10 11 12 13
			//20 21 22 23
		printf ( "\n" ) ;
	}
	printf ( "\n" ) ;
}
*/


// Array of Pointers

//arr
//0     1       2       3
//102   202     302     402
//1002  1006    1010    1014

//i     j       k       l
//31    5       19      71
//102   202     302     402

/*
int main( )
{
	int *arr[4] ; // array of integer pointers
	int i = 31, j = 5, k = 19, l = 71, m ;
	arr[0] = &i ;
	arr[1] = &j ;
	arr[2] = &k ;
	arr[3] = &l ;
	for ( m = 0 ; m <= 3 ; m++ )//0 1 <=3
		printf ( "%d ", * ( arr[m] ) ) ; // *(arr[1]) *202 =5
		//*(102) 31
		//*(202) 5

    return 0;

}
*/



//a
//0     1       2       3       4
//10    11       2       3       4
//1002  1006    1010    1014    1018

//p
//0     1       2       3       4
//1002  1006    1010    1014    1018
//2002  2006    2010    2014    2018
/*
int main( )
{
	int a[ ] = { 10, 11, 2, 3, 4 } ;
	int *p[ ] = { a , a + 1, a + 2, a + 3, a + 4 } ;
	printf ( "\n%u %u %d", p , *p, * ( *p ) ) ;
                        //2002 , *2002 1002 , **2002 *1002 10
    printf ( "\n%u %u %d", p+1, *(p+1), * ( *(p+1) ) ) ;
	return 0;
}
*/


//          0       1       2       3
//  0       000     001     002     003
//          1       2       3       4
//          1002    1006    1010    1014
//0 1       010     011     012     013
//          5       6       7       8
//          1018    1022    1026    1030
//  2       020     021     022     023
//          9       10      11      12
//          1034    1038    1042    1046

//          0       1       2       3
//  0       100     101     102     103
//          11      22      33      44
//          1050    1054    1058    1062
//1 1       110     111     112     113
//          55      66      77      88
//          1066    1070    1074    1078
//  2       120     121     122     123
//          99      100     101     102
//          1082    1086    1090    1094


//          0       1       2       3
//  0       200     201     202     203
//          111     222       3       4
//          1098    1102    1106    1110
//2 1       210     211     212     213
//          5       6       7       8
//          1114    1118    1122    1126
//  2       220     221     222     223
//          9       10      11      1002
//          1130    1134    1138    1142



//arr => 1002 =>
//arr+0 => 1002 + 0*48 = 1002 => 0+arr => arr[0]
//arr+1 => 1002 + 1*48 = 1050 => 1+arr => arr[1]
//arr+2 => 1002 + 2*48 = 1098 => 2+arr => arr[2]

//&arr[2][2][3] => 1142
//*&arr[2][2][3] => *1142= 1002
//*(arr[2][2] + 3 )=> 1130 + 3*4 = *1142 = > 1002
//*(*(arr[2]+2) + 3 )=> *(1098+2*16+3*4) => 1098+32+12 =*1142=> 1002
//*(*(*(arr+2)+2) + 3 )=>1002+2*48 + 2*16+3*4=>1002+96+32+12=>*1142=1002

/*
int main( )
{
	int arr [3][3][4] = {
                        {1, 2, 3, 4,5,6,7,8,9,10,11,12 },
                        {11, 22, 33, 44,55,66,77,88,99,100,101,102 },
                        {111,222, 333, 444,555,666,777,888,999,1000,1001,1002 }
                       } ;
    int i,j,k;
    for(i=0;i<3;i++)//bunch 0 1
    {
        //i=1
        for(j=0;j<3;j++)//rows 0 1 2 3< 3
        {
            //j=2
            for(k=0;k<4;k++)//columns 0 1 2 3 4<4
                printf("[%d][%d][%d]=>%u=>%d\t",i,j,k,&arr[i][j][k],arr[i][j][k]);
            printf("\n");
            //000   001 002 003
            //010   011 012 013
            //020   021 022 023

            //100   101 102 103
            //110   111 112 113
            //120   121 122 123


        }
        printf("\n\n");
    }

    printf("\nBunch Base Address\n");
    for(i=0;i<3;i++)//bunch
        printf("%u %u %u\n",arr[i],arr+i,i+arr);

    printf("\nMultiple Style\n");
    for(i=0;i<3;i++)//bunch
    {
        for(j=0;j<3;j++)//rows
        {
            for(k=0;k<4;k++)//columns
            {
                printf("%d ",arr[i][j][k]);
                printf("%d ",*&arr[i][j][k]);
                printf("%d ",*(arr[i][j] + k ));
                printf("%d ",*(*(arr[i]+j) + k ));
                printf("%d\t\t",*(*(*(arr+i)+j) + k ));
            }
            printf("\n");
        }
        printf("\n\n");
    }

}
*/

//Pointer Rules
//1]Pointer + IC = Pointer Address + IC * SIZE
//2]Pointer - IC = Pointer Address - IC * SIZE
//3]Other Operators / * ^ No Error
//4] Pointer1 - Pointer2 = Index Minus
//5] Pointer1 + / * % Pointer2 => Error
//6] VVVVIMP... Direct Array name => Base Address=>1002
//7] Any Array pass To Function => Always It is Call By Reference


//Rules -
//1] Pointer + IC*SIZE OF DATA TYPE
//2] Pointer - IC*SIZE OF DATA TYPE
//3] Pointer * / % IC*SIZE OF DATA TYPE => Error
//4] Pointer1 = Pointer 2 Copy
//5] Pointer 1 - Pointer 2 = Index Minus
//6] Direct Array Name = > Base Address 1002


//Rule
//1]Pointer + IC*SIZE
//2]Pointer - IC*SIZE
//3] NO ERROR => Pointer * / % Other OP  IC*SIZE
//4] 1 Pointer = 2 Pointer
//5] 1 Pointer - 2 Pointer = Index Minus
//6] NO Error => 1 Pointer + * / % 2 Pointer = Index Minus
//7] Array Name => Base Address 1002
//8] ArrayName + 1 Integer Constant => Automatically Next Location
//9] Actual Array Pass  => Formal Change Bact To Change Actual
//   All Arrays Are Call By Reference
//10]


//Pointers Rules- 8/9/10
//1] Pointer + IC => Pointer + IC*SIZEOFDATATYPE
//2] Pointer - IC => Pointer - IC*SIZEOFDATATYPE
//3] Pointer * / % OTher OP IC => Error
//4] Pointer1 = Pointer2
//5] Pointer1 - Pointer2 = > Index Minus!!!
//6] Pointer1 + * / % Pointer2 = > Error
//7] Array Direct Name=> Base Address=> 1002

























































//======================== Session 24 Array
//5] Function
//6] Array Expert   int
//7] String Expert  char
//-------------------
//Apti + LD + CR + FTF=> Crack

/*
int main()
{
    int x = 10 ;
    x=20;
    x=30;
    printf("%d",x);//30
    return 0;
}
//x
//10/20/30
//1002
*/

//0     1       2       3       4           Index   0       1
//10    20      30      40      50          Values  arr[0]  arr[1]
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1]

/*
int main()
{
    int arr[5] = {10,20,30,40,50} ;
    printf("%d %u=>%d\n",0,&arr[0],arr[0]);
    printf("%d %u=>%d\n",1,&arr[1],arr[1]);
    printf("%d %u=>%d\n",2,&arr[2],arr[2]);
    printf("%d %u=>%d\n",3,&arr[3],arr[3]);
    printf("%d %u=>%d\n",4,&arr[4],arr[4]);
    return 0;
}
*/

//0     1       2       3       4           Index   0       1
//10    20      30      40      50          Values  arr[0]  arr[1]
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1]

/*
int main()
{
    int arr[] = {10,20,30,40,50} ;
    int i , n=5 ;
    for(i=0;i<n;i++)//0 1 <5
        printf("%d %u=>%d\n",i,&arr[i],arr[i]);

    return 0;
}
*/

//Tips & Traps
//Collection of Similar Items/Elements
//Similar Items/Elements?
//But Same Data Type.

//0     1       2       3       4           Index   0       1
//10    20      30      40      50          Values  arr[0]  arr[1]
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1]

/*
int main()
{
    int arr[] = {10,20,30.1111,40.1,'A'} ;
    int i , n=5 ;
    for(i=0;i<n;i++)//0 1 <5
        printf("%d %u=>%d\n",i,&arr[i],arr[i]);

    return 0;
}
*/


//0     1       2       3       4           Index   0       1
//10    20      30      40      50          Values  arr[0]  arr[1]
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1]

/*
int main()
{
    int arr[] = {10,20,30,40,50} ;//10,20,30,40,50,GV,GV.....
    int i , n=10 ;
    for(i=0;i<n;i++)//0 1 <5
        printf("%d %u=>%d\n",i,&arr[i],arr[i]);

    return 0;
}
*/


//0     1       2       3       4           Index   0       1
//10    20      30      40      50          Values  arr[0]  arr[1]
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1]

/*
int main()
{
    int arr[5] = {10,20,30,40,50} ;//10,20,30,40,50,GV,GV.....
    int i , n=5 ;
    for(i=0;i<n;i++)//0 1 <5
        printf("%d %u=>%d\n",i,&arr[i],arr[i]);

    return 0;
}
*/

//0     1       2       3       4           Index   0       1
//10    20      30      40      50          Values  arr[0]  arr[1]
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1]

/*
int main()
{
    int arr[5] = {10,20,30,40,50} ;//10,20,30,40,50,GV,GV.....
    int i , n=10 ;
    for(i=0;i<n;i++)//0 1 <5
        printf("%d %u=>%d\n",i,&arr[i],arr[i]);

    return 0;
}
*/


//0     1       2       3       4           Index   0       1
//10    20      30      40      50          Values  arr[0]  arr[1]
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1]

//Ok -GCC
//Error-TC Too Many Initializer
/*
int main()
{
    int arr[5] = {10,20,30,40,50,60,70,80,90} ;//10,20,30,40,50,GV,GV.....
    int i , n=10 ;
    for(i=0;i<n;i++)//0 1 <5
        printf("%d %u=>%d\n",i,&arr[i],arr[i]);

    return 0;
}
*/

/*
int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90} ;//10,20,30,40,50,GV,GV.....
    int i , n=10 ;
    for(i=0;i<n;i++)//0 1 <5
        printf("%d %u=>%d\n",i,&arr[i],arr[i]);

    return 0;
}
*/

//0     1       2       3       4           Index   0       1
//10    20      30      40      50          Values  arr[0]  arr[1]
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1]

/*
int main()
{
    int arr[5] = {10,20} ;//10,20,0,0,0,GV,GV.....
    int i , n=10 ;
    for(i=0;i<n;i++)//0 1 <5
        printf("%d %u=>%d\n",i,&arr[i],arr[i]);

    return 0;
}
*/

//0     1       2       3       4           Index   0       1
//10    20      30      40      50          Values  arr[0]  arr[1]
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1]

// 20 Exams 25/26 -> Suyash Saurabh Riddhik B D V

/*
int main()
{
    int marks[10];
    int n , i ;
    float per , total_marks=0;

    printf("Enter Number Of Subjects : ");
    scanf("%d",&n);//n=5

    for(i=0;i<n;i++)// 0 1 <5
    {
        printf("\nEnter Subject %d Marks : ",i+1);
        scanf("%d",&marks[i]);
    }

    printf("\nDisplay All Subjects Marks!!!\n");
    for(i=0;i<n;i++)//0 <5
    {
        printf("\nSubject %d marks is %d",i+1,marks[i]);
        total_marks += marks[i];
    }

    per = total_marks / n ;
    printf("\nTotal Marks %f",total_marks);
    printf("\nPercentage %f%c.",per,'%');
    return 0;
}
*/


//0     1       2       3       4           Index   0       1
//10    20      30      40      50          Values  arr[0]  arr[1]
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1]

//TC - Problem Output Right - Bounds No Check
//GCC- Problem Output Wrong - Bounds Yes Check

/*
int main()
{
    int marks[2];
    int n , i ;
    float per , total_marks=0;
    printf("Enter Number Of Subjects : ");
    scanf("%d",&n);//n=5

    for(i=0;i<n;i++)//0 <5
    {
        printf("\nEnter Subject %d Marks : ",i+1);
        scanf("%d",&marks[i]);
    }

    printf("\nDisplay All Subjects Marks!!!\n");
    for(i=0;i<n;i++)//0 <5
    {
        printf("\nSubject %d marks is %d",i+1,marks[i]);
        total_marks += marks[i];
    }

    per = total_marks / n ;
    printf("\nTotal Marks %f",total_marks);
    printf("\nPercentage %f%c.",per,'%');
    return 0;
}
*/


//0     1       2       3       4           Index   0       1       %d
//10.0  20.0    30      40      50          Values  arr[0]  arr[1]  %f %d %c
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1] %u

/*
int main()
{
    float arr[5] = {10,20,30.1,40.4,50.5} ;
    int i , n=5 ;
    for(i=0;i<n;i++)//0 1 <5
        printf("%d %u=>%f\n",i,&arr[i],arr[i]);

    return 0;
}
*/



//0     1       2       3       4           Index   0       1       %d
//A     B       C       D       E          Values  arr[0]  arr[1]  %f %d %c
//1002  1003    1004    1005    1006        Address &arr[0] &arr[1] %u

/*
int main()
{
    char arr[5] = {'A','B','C',68.1,69} ;
    int i , n=5 ;
    for(i=0;i<n;i++)//0 1 <5
        printf("%d %u=>%c\n",i,&arr[i],arr[i]);

    return 0;
}
*/

//1 Variable 1
//1 Variable M - Array

//0     1       2       3       4    100        Index   0       1       %d
//0     1       2       3       .... 100        Values  arr[0]  arr[1]  %f %d %c
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1] %u

/*
int main( )
{
	int num[40], i ;

	for ( i = 0 ; i <= 100 ; i++ )
		num[i] = i ;

    for ( i = 0 ; i <= 100 ; i++ )
        printf("%d\t",num[i]);

    return 0;
}
*/

// Passing Array Elements to a Function

//0     1       2       3       4           Index   0       1
//10    20      30      40      50          Values  arr[0]  arr[1]
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1]

/*
void display(int);

int main()
{
    int arr[] = {10,20,30,40,50} ;//10,20,30,40,50
    int i , n=5 ;
    for(i=0;i<n;i++)// 0 1 2 3 4 5< 5
        display(arr[i]); //display(arr[1]); display(20);

    return 0;
}
//value =20
void display(int value)
{
    printf("%d\t",value);//10   20  30
}
*/


// Passing Array Element Address(Reference) to a Function

//0     1       2       3       4           Index   0       1
//10    20      30      40      50          Values  arr[0]  arr[1]
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1]

/*
void display(int*);

int main()
{
    int arr[] = {10,20,30,40,50} ;
    int i , n=5 ;
    for(i=0;i<n;i++)//0 1 2 3 4 5< 5
        display(&arr[i]); //display(&arr[1]); display(1006);

    return 0;
}
//ptr
//1006
//2002
void display(int *ptr)
{
    printf("%u=>%d\n",ptr,*ptr);
    //1002=>10
    //1006=>20
    //.... ..
}
*/


//0     1       2       3       4           Index   0       1
//1     1       1       1       1          Values  arr[0]  arr[1]
//1002  1006    1010    1014    1018        Address &arr[0] &arr[1]

/*
void display(int*);

int main()
{
    int arr[] = {10,20,30,40,50} ;//10,20,30,40,50
    int i , n=5 ;

    printf("\nIn Main\n");
    for(i=0;i<n;i++)
        printf("%u=>%d\n",&arr[i],arr[i]);

    //1002=>10
    //1006=>20
    //....=>..

    printf("\nIn Function\n");
    for(i=0;i<n;i++)//0 1 2 3 4 5< 5
        display(&arr[i]); //display(&arr[0]); display(1002);

    printf("\nIn Main\n");
    for(i=0;i<n;i++)
        printf("%u=>%d\n",&arr[i],arr[i]);

    //1002=>1
    //1006=>1
    //....=>..

    return 0;
}
//ptr
//1006
//2002
void display(int *ptr)
{
    printf("%u=>%d\n",ptr,*ptr);
    *ptr=1;//*1002=1;
    //1002 10
    //1006 20
    //.... ..
}
*/

//Pointers and Arrays
/*
int main( )
{
	int i = 3, *x ;
	float j = 1.5, *y ;
	char k = 'c', *z ;
//i         j           k
//3         1.5         c
//1002      2002        3002

//x         y           z
//1002      2002        3002
//4002      5002        6002

	printf ( "\nValue of i = %d", i ) ;//3
	printf ( "\nValue of j = %f", j ) ;//1.500000
	printf ( "\nValue of k = %c", k ) ;//c

	x = &i ;
	y = &j ;
	z = &k ;

	printf ( "\nOriginal address in x = %u", x ) ;//1002
	printf ( "\nOriginal address in y = %u", y ) ;//2002
	printf ( "\nOriginal address in z = %u", z ) ;//3002

	x++ ;//x= x + 1 x = 1002+1*4=1006
	y++ ;//y= y + 1 y = 2002+1*4=2006
	z++ ;//z= z + 1 x = 3002+1*1=3003

//x         y           z
//1006      2006        3003
//4002      5002        6002

	printf ( "\nNew address in x = %u", x ) ;//1006
	printf ( "\nNew address in y = %u", y ) ;//2006
	printf ( "\nNew address in z = %u", z ) ;//3003


	return 0;
}
*/

/*
int main( )
{
	int i = 3, *x ;
	float j = 1.5, *y ;
	char k = 'c', *z ;
//i         j           k
//3         1.5         c
//1002      2002        3002

//x         y           z
//1002      2002        3002
//4002      5002        6002

	printf ( "\nValue of i = %d", i ) ;//3
	printf ( "\nValue of j = %f", j ) ;//1.500000
	printf ( "\nValue of k = %c", k ) ;//c

	x = &i ;
	y = &j ;
	z = &k ;

	printf ( "\nOriginal address in x = %u", x ) ;//1002
	printf ( "\nOriginal address in y = %u", y ) ;//2002
	printf ( "\nOriginal address in z = %u", z ) ;//3002

	x+=4 ;//x= x + 4 x = 1002+4*4=1018
	y+=5 ;//y= y + 5 y = 2002+5*4=2022
	z+=10 ;//x= x + 10 x = 3002+10*1=3012

//x         y           z
//1018      2022        3012
//4002      5002        6002

	printf ( "\nNew address in x = %u", x ) ;//1006
	printf ( "\nNew address in y = %u", y ) ;//2006
	printf ( "\nNew address in z = %u", z ) ;//3003


	return 0;
}
*/


/*
int main( )
{
	int i = 3, *x ;
	float j = 1.5, *y ;
	char k = 'c', *z ;
//i         j           k
//3         1.5         c
//1002      2002        3002

//x         y           z
//1002      2002        3002
//4002      5002        6002

	printf ( "\nValue of i = %d", i ) ;//3
	printf ( "\nValue of j = %f", j ) ;//1.500000
	printf ( "\nValue of k = %c", k ) ;//c

	x = &i ;
	y = &j ;
	z = &k ;

	printf ( "\nOriginal address in x = %u", x ) ;//1002
	printf ( "\nOriginal address in y = %u", y ) ;//2002
	printf ( "\nOriginal address in z = %u", z ) ;//3002

	x-=4 ;//x= x - 4 x = 1002-4*4=1018
	y-=5 ;//y= y - 5 y = 2002-5*4=2022
	z-=10 ;//x= x - 10 x = 3002-10*1=3012

//x         y           z
//1018      2022        3012
//4002      5002        6002

	printf ( "\nNew address in x = %u", x ) ;//1006
	printf ( "\nNew address in y = %u", y ) ;//2006
	printf ( "\nNew address in z = %u", z ) ;//3003


	return 0;
}
*/

/*

int main( )
{
	int i = 3, *x ;
	float j = 1.5, *y ;
	char k = 'c', *z ;
//i         j           k
//3         1.5         c
//1002      2002        3002

//x         y           z
//1002      2002        3002
//4002      5002        6002

	printf ( "\nValue of i = %d", i ) ;//3
	printf ( "\nValue of j = %f", j ) ;//1.500000
	printf ( "\nValue of k = %c", k ) ;//c

	x = &i ;
	y = &j ;
	z = &k ;

	printf ( "\nOriginal address in x = %u", x ) ;//1002
	printf ( "\nOriginal address in y = %u", y ) ;//2002
	printf ( "\nOriginal address in z = %u", z ) ;//3002

	x*=4 ;//Error
	y/=5 ;//Error
	z%=10 ;//Error

//x         y           z
//1018      2022        3012
//4002      5002        6002

	printf ( "\nNew address in x = %u", x ) ;//1006
	printf ( "\nNew address in y = %u", y ) ;//2006
	printf ( "\nNew address in z = %u", z ) ;//3003


	return 0;
}
*/

/*
int main()
{
    int i = 4, *j, *k ;
    j = &i ;
//i         j       k
//4         1002    GV
//1002      2002    3002
    printf("%u\n",&i);//1002
    printf("%u\n",j);//1002
    j = j + 1 ;//j=1002+1*4=1006
//j
//1002/1006
//2002
    printf("%u\n",j);//1006
    j = j + 9 ; //j=1006+9*4=1042
//j
//1002/1006/1042
//2002
    printf("%u\n",j);//1042
    k = j + 3 ; //k = 1042+3*4  k = 1054
//j
//1002/1006/1042
//2002

//k
//1054
//3002
    printf("%u\n",j);//1042
    printf("%u\n",k);//1054
    return 0;
}
*/


//0     1       2       3       4       5       6
//10    20      30      45      67      56      74
//1002  1006    1010    1014    1018    1022    1026

/*
int main( )
{
	int arr[ ] = { 10, 20, 30, 45, 67, 56, 74 } ;
	int *i, *j ;
	i = &arr[1] ;
	j = &arr[5] ;
//i         j
//1006      1022
//2002      3002
	printf ( "%d %d", j - i, *j - *i ) ;//4 36

	//j-i = 5 - 1 = 4
	//*j-*i = *1022 - *1006 = 56 - 20=36

	printf ( "\n%d %d", i - j, *i - *j ) ;//-4 -36

	i = &arr[6] ;
	j = &arr[3] ;

//i         j
//1022      1014
//2002      3002

	printf ( "\n%d %d", i - j, *i - *j ) ;//3 29
	//printf ( "\n%d %d", i + j, *i - *j ) ;//Error
	//printf ( "\n%d %d", i * j, *i - *j ) ;//Error
	//printf ( "\n%d %d", i / j, *i - *j ) ;//Error
	//printf ( "\n%d %d", i % j, *i - *j ) ;//Error
	return 0;
}
*/

//arr
//0     1       2       3       4       5       6
//10    20      36      72      45      36      74
//1002  1006    1010    1014    1018    1022    1026

//&arr[0] 1002
//arr => 1002 =>Base Address
//arr+0=1002+0*4= 1002
//0+arr =1002

//arr => Base Address => 1002

//arr[4] => 45
//&arr[4] => 1018
//*(&arr[4]) => *1018 => 45
//arr+4 = 1002+4*4=1018=>4+arr
//*(arr+4) = 1002+4*4=*1018=> 45=>*(4+arr)

/*
int main( )
{
	int arr[ ] = { 10, 20, 36, 72, 45, 36 } ;
	int *j, *k ;
	j = &arr [ 4 ] ;//j=1018
	k = ( arr + 4 ) ;//k=1002+4*4=1018

	if ( j == k )//1018==1018
		printf ( "The two pointers point to the same location %u %u => %d %d",j,k,*j,*k ) ;
	else
		printf ( "The two pointers do not point to the same location" ) ;
    return 0;
}
*/

//Continue....

//i
//0     1       2       3       4       5       6
//10    20      30      40      50      36      74
//1002  1006    1010    1014    1018    1022    1026
//              ptr

//ptr
//1002/1006/1010
//2002

/*
int main( )
{
	int arr[ ] = { 10, 20, 30, 40, 50 } ;
	int i,n=5;
	int *ptr;
	ptr=arr;//ptr=1002

	for(i=0;i<n;i++)//0 1 <5
    {
        printf("%u=>%d\n",ptr,*ptr);//1002=>10 1006=>20
        ptr++;//ptr=1006+1*4=1010
    }
	return 0;
}
*/



//Pointers Rules- 8/9/10
//1] Pointer + IC => Pointer + IC*SIZEOFDATATYPE
//2] Pointer - IC => Pointer - IC*SIZEOFDATATYPE
//3] Pointer * / % OTher OP IC => Error
//4] Pointer1 = Pointer2
//5] Pointer1 - Pointer2 = > Index Minus!!!
//6] Pointer1 + * / % Pointer2 = > Error
//7] Array Direct Name=> Base Address=> 1002


//i
//0     1       2       3       4       5       6
//10    20      30      40      50      36      74
//1002  1006    1010    1014    1018    1022    1026
//      ptr

//ptr
//1002/1006
//2002

//arr[0] 0[arr] Syntax!!!
//arr+0 =1002 +0*4=1002

//*&arr[4] *1018 50
// arr[4] 50
// 4[arr] 50
// *&4[arr] *1018 50
// *(arr+4) *(1002+4*4) * 1018 50
// *(4+arr) *(4*4+1002) * 1018 50

/*
int main( )
{
	int arr[ ] = { 10, 20, 30, 40, 50 } ;
	int i,n=5;
    int *ptr=arr;
	for(i=0;i<n;i++)// 0 1 < 5
    {
        printf("%u %u ",&arr[i],&i[arr]);
        printf("%u %u %u=>",arr+i,i+arr,ptr);
        printf("%d %d ",*(&arr[i]),*(&i[arr]));
        printf("%d %d ",arr[i],i[arr]);
        printf("%d %d %d\n",*(arr+i),*(i+arr),*ptr );
        ptr++;

        //1002=> 10 10 10 10
        //1006=> 20 20 20 20
    }
	return 0;
}
*/



//Whole Array Pass To Function as Argument!!!

//i
//0     1       2       3       4       5       6
//10    20      30      40      50      36      74
//1002  1006    1010    1014    1018    1022    1026
//              ptr

/*
void display(int*,int);

int main( )
{
	int arr[ ] = { 10, 20, 30, 40, 50 } ;
	int n=5;
    display(arr,n); //display(1002,5);
	return 0;
}
void display(int *ptr,int n)
{
    int i;
    for(i=0;i<n;i++)//0 1 2 < 5
    {
        printf("%u=>%d\n",ptr,*ptr);//1002 10   1006 20 1010 30
        ptr++;//ptr=1006+1=1010
    }
}
*/



/*
void display(int*,int);

int main( )
{
	int arr[ ] = { 10, 20, 30, 40, 50 } ;
	int n=5,i;

	printf("\nIn Main\n");
	for(i=0;i<n;i++)//0 1<5
        printf("%u=>%d\n",&arr[i],arr[i]);

    display(arr,n); //display(1002,5);

	printf("\nIn Main\n");
	for(i=0;i<n;i++)//0 1<5
        printf("%u=>%d\n",&arr[i],arr[i]);

	return 0;
}
void display(int *ptr,int n)
{
    printf("\nIn Function\n");
    int i;
    for(i=0;i<n;i++)//0 1<5
    {
        printf("%u=>%d\n",ptr,*ptr);//1002 10
        ptr++;//1006
    }
}
*/

//i
//0     1       2       3       4       5       6
//1     1       30      40      50      36      74
//1002  1006    1010    1014    1018    1022    1026
//      ptr

/*
void display(int*,int);

int main( )
{
	int arr[ ] = { 10, 20, 30, 40, 50 } ;
	int n=5,i;

	printf("\nIn Main\n");
	for(i=0;i<n;i++)//0 1<5
        printf("%u=>%d\n",&arr[i],arr[i]);

    display(arr,n); //display(1002,5);

	printf("\nIn Main\n");
	for(i=0;i<n;i++)//0 1<5
        printf("%u=>%d\n",&arr[i],arr[i]);

	return 0;
}
void display(int *ptr,int n)
{
    printf("\nIn Function\n");
    int i;
    for(i=0;i<n;i++)//0 1<5
    {
        printf("%u=>%d\n",ptr,*ptr);//1002 10 1006 20
        *ptr=1;
        ptr++;
    }
}
*/


//Rule
//1]Pointer + IC*SIZE
//2]Pointer - IC*SIZE
//3] NO ERROR => Pointer * / % Other OP  IC*SIZE
//4] 1 Pointer = 2 Pointer
//5] 1 Pointer - 2 Pointer = Index Minus
//6] NO Error => 1 Pointer + * / % 2 Pointer = Index Minus
//7] Array Name => Base Address 1002
//8] ArrayName + 1 Integer Constant => Automatically Next Location
//9] Actual Array Pass  => Formal Change Bact To Change Actual
//   All Arrays Are Call By Reference
//10]

//Array Access Way
//arr[4]    4[arr]  *(&arr[4]) *(&4[arr]) *(arr+4) *(4+arr)
//int *ptr=arr;
//*ptr *1002 10
//ptr++
//*ptr *1006 20

//i
//0     1       2       3       4       5       6
//1     1       30      40      50      36      74
//1002  1006    1010    1014    1018    1022    1026


//===========================Session 26


// Two Dimensional Arrays

//      0       1       2       3
//0     00      01      02      03          Index
//      1       2       3       4           Value   arr[0][2]=>3
//      1002    1006    1010    1014        Address &arr[0][2]=>1010
//1     10      11      12      13
//      5       6       7       8
//      1018    1022    1026    1030
//2     20      21      22      23
//      9       10      11      12
//      1034    1038    1042    1046

/*
int main( )
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int i,j;
    for(i=0;i<3;i++)// 0 1 < 3 rows
    {
        //i=1
        for(j=0;j<4;j++)//0 1 2 3 4<4 columns
            printf("[%d][%d]=>%u=%d\t",i,j,&arr[i][j],arr[i][j]);
            //[0][0]=>1002=1   [0][1]=>1006=2   [0][2]=>1010=3  [0][3]=>1014=4
            //10   11   12  13
            //20   21   22  23

        printf("\n");
    }
    return 0;
}
*/

//      0       1       2       3
//0     00      01      02      03
//      1       2       3       4
//      1002    1006    1010    1014
//1     10      11      12      13
//      5       6       7       8
//      1018    1022    1026    1030
//2     20      21      22      23
//      9       10      11      12
//      1034    1038    1042    1046

/*
int main( )
{
    int arr[][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int i,j;
    for(i=0;i<3;i++)// 0 1 2 < 3 rows
    {
        //i=0
        for(j=0;j<4;j++)//0 1 2 3 4<4 columns
        {
            printf("[%d][%d]=>%u=%d\t",i,j,&arr[i][j],arr[i][j]);
            //00   01   02  03
            //10   11   12  13
            //20   21   22  23
        }
        printf("\n");
    }
    return 0;
}
*/


// Two Dimensional Arrays

//      0       1       2       3
//0     00      01      02      03
//      1       2       3       4
//      1002    1006    1010    1014
//1     10      11      12      13
//      5       6       7       8
//      1018    1022    1026    1030
//2     20      21      22      23
//      9       10      11      12
//      1034    1038    1042    1046

/*
int main( )
{
    int arr[3][]={1,2,3,4,5,6,7,8,9,10,11,12}; //Error
    int i,j;
    for(i=0;i<3;i++)// 0 1 2 < 3 rows
    {
        //i=1
        for(j=0;j<4;j++)//0 1 2 3 4<4 columns
        {
            printf("[%d][%d]=>%u=%d\t",i,j,&arr[i][j],arr[i][j]);
            //00   01   02  03
            //10   11   12  13
            //20   21   22  23
        }
        printf("\n");
    }
    return 0;
}
*/

// Two Dimensional Arrays

//      0       1       2       3
//0     00      01      02      03
//      1       2       3       4
//      1002    1006    1010    1014
//1     10      11      12      13
//      5       6       7       8
//      1018    1022    1026    1030
//2     20      21      22      23
//      9       10      0       0
//      1034    1038    1042    1046

/*
int main( )
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10};
    int i,j;
    for(i=0;i<3;i++)// 0 1 2 < 3 rows
    {
        //i=1
        for(j=0;j<4;j++)//0 1 2 3 4<4 columns
        {
            printf("[%d][%d]=>%u=%d\t",i,j,&arr[i][j],arr[i][j]);
            //00   01   02  03
            //10   11   12  13
            //20   21   22  23
        }
        printf("\n");
    }
    return 0;
}
*/

// Two Dimensional Arrays

//      0       1       2       3
//0     00      01      02      03
//      1       2       3       4
//      1002    1006    1010    1014
//1     10      11      12      13
//      5       6       7       8
//      1018    1022    1026    1030
//2     20      21      22      23
//      9       10      11      12
//      1034    1038    1042    1046

/*
int main( )
{
    int arr[][4]=
                {
                    {1,2,3,4} ,
                    {5,6,7,8} ,
                    {9,10,11,12}
                };
    int i,j;
    for(i=0;i<3;i++)// 0 1 2 < 3 rows
    {
        //i=1
        for(j=0;j<4;j++)//0 1 2 3 4<4 columns
        {
            printf("[%d][%d]=>%u=%d\t",i,j,&arr[i][j],arr[i][j]);
            //00   01   02  03
            //10   11   12  13
            //20   21   22  23
        }
        printf("\n");
    }
    return 0;
}
*/



// Two Dimensional Arrays

//arr
//      0       1       2       3
//0     00      01      02      03
//      1       2       3       4
//      1002    1006    1010    1014
//1     10      11      12      13
//      5       6       7       8
//      1018    1022    1026    1030
//2     20      21      22      23
//      9       10      11      12
//      1034    1038    1042    1046

//arr => 1002 arr[0][0]=1 &arr[0][0]=1002 *&arr[0][0]=*1002=1

//arr[0] = 1002 = arr+0 => 1002 + 0*16=1002 => 0+arr
//arr[1] = 1018 = arr+1 => 1002 + 1*16=1018 => 1+arr
//arr[2] = 1034 = arr+2 => 1002 + 2*16=1034 => 2+arr

// &arr[2][3] = > 1046
//*&arr[2][3] = > *1046 = 12
//*(arr[2]+3) = > *(1034+3*4)=*(1034+12)=*1046=12
//*(*(arr+2)+3) => 1002 + 2*16 + 3*4 = 1002+32+12=*1046=12
//arr[2][3]

/*
int main( )
{
    int arr[][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int i,j;
    for(i=0;i<3;i++)// 0 1 2 < 3 rows
    {
        //i=1
        for(j=0;j<4;j++)//0 1 2 3 4<4 columns
        {
            printf("[%d][%d]=>%u=%d\t",i,j,&arr[i][j],arr[i][j]);
            //00   01   02  03
            //10   11   12  13
            //20   21   22  23
        }
        printf("\n");
    }

    printf("\nBase Address %u",arr);//1002

    printf("\n1D\n");
    for(i=0;i<3;i++)
        printf("%u %u %u\n",arr[i],arr+i,i+arr);


    printf("\nMultiple Way Access\n");
    for(i=0;i<3;i++)// 0 1 2 < 3 rows
    {
        //i=1
        for(j=0;j<4;j++)//0 1 2 3 4<4 columns
        {
            printf("%u=>",&arr[i][j]);
            printf("%d %d ",*(&arr[i][j]),arr[i][j]);
            printf("%d ", *(arr[i]+j));
            printf("%d\t", *(*(arr+i)+j)  );
        }
        printf("\n");
    }

    return 0;
}
*/


// Pointers and 2-Dimensional Arrays

// Two Dimensional Arrays

//      0       1       2       3
//0     00      01      02      03
//      1       2       3       4
//      1002    1006    1010    1014
//1     10      11      12      13
//      5       6       7       8
//      1018    1022    1026    1030
//2     20      21      22      23
//      9       10      11      12
//      1034    1038    1042    1046

/*
int main( )
{
    int arr[][4]=
                {
                    {1,2,3,4} ,
                    {5,6,7,8} ,
                    {9,10,11,12}
                };
    int ( *p )[4] ;// p pointer => address
	int i, j, *pint ;
	for ( i = 0 ; i < 3 ; i++ )//0 1<3
	{
		p = arr[i] ;//p = 1018   arr+i i+arr &arr[i] arr[i]
		pint = p ; // pint = 1018

		for ( j = 0 ; j < 4 ; j++ )//0 1 2 3 4<4
            printf ( "%d\t", *( pint + j ) ) ;
            //*(1002+0*4)=*1002=1
            //*(1002+1*4)=*1006=2
            //*(1002+2*4)=*1010=3
            //*(1002+3*4)=*1014=4

            //*(1018+0*4)=*1018=5
            //*(1018+1*4)=*1022=6
            //*(1018+2*4)=*1026=7
            //*(1018+3*4)=*1030=8

        printf("\n");
	}

    return 0;
}
*/


// Two Dimensional Arrays

//      0       1       2       3
//0     00      01      02      03
//      1       2       3       4
//      1002    1006    1010    1014
//1     10      11      12      13
//      5       6       7       8
//      1018    1022    1026    1030
//                              ptr
//2     20      21      22      23
//      9       10      11      12
//      1034    1038    1042    1046

/*
int main( )
{
    int arr[][4]=
                {
                    {1,2,3,4} ,
                    {5,6,7,8} ,
                    {9,10,11,12}
                };
    int i,j,*ptr;
    ptr=arr;//1002

    for(i=0;i<3;i++)// 0 1 < 3 rows
    {
        //i=1
        for(j=0;j<4;j++)//0 1 2 3 4<4 columns
        {
            printf("%u=>%d\t",ptr,*ptr);
            ptr++;//1018
            //1002=>1   1006=>2     1010=>3     1014=>4
            //1018=>5   1022=>6     1026=>7     1030=>8
        }
        printf("\n");
    }
    return 0;
}
*/


//0
//10/1
//1002
/*
void display(int*,int);

int main( )
{
	int arr[] = { 10, 20, 30, 40, 50 } ;
	int n=5,i;
	printf("\nIn Main\n");
	for(i=0;i<n;i++)//0 1<5
        printf("%u=>%d\n",&arr[i],arr[i]);

    display(arr,n); //display(1002,5);

	printf("\nIn Main\n");
	for(i=0;i<n;i++)//0 1<5
        printf("%u=>%d\n",&arr[i],arr[i]);

	return 0;
}
void display(int *ptr,int n)
{
    printf("\nIn Function\n");
    int i;
    for(i=0;i<n;i++)//0 1<5
    {
        printf("%u=>%d\n",ptr,*ptr);
        *ptr=1;
        ptr++;
    }
}
*/

//arr - base Address
//arr - as it is array copy int arr[]

/*
void display(int[],int);

int main( )
{
	int arr[ ] = { 10, 20, 30, 40, 50 } ;
	int n=5,i;
	printf("\nIn Main\n");
	for(i=0;i<n;i++)//0 1<5
        printf("%u=>%d\n",&arr[i],arr[i]);

    display(arr,n); //display(1002,5);

	printf("\nIn Main\n");
	for(i=0;i<n;i++)//0 1<5
        printf("%u=>%d\n",&arr[i],arr[i]);

	return 0;
}
void display(int num[ ],int n)
{
    printf("\nIn Function\n");
    int i;
    for(i=0;i<n;i++)//0 1<5
    {
        printf("%u=>%d\n",&num[i],num[i]);
        num[i] =1;
    }
}
*/


// Passing 2-D Array To a Function

//      0       1       2       3
//0     00      01      02      03
//      1       2       3       4
//      1002    1006    1010    1014
//1     10      11      12      13
//      5       6       7       8
//      1018    1022    1026    1030
//2     20      21      22      23
//      9       10      11      12
//      1034    1038    1042    1046

/*
int main( )
{
	int a[3][4] =
	{
		1, 2, 3, 4,
		5, 6, 7, 8,
		9, 10, 11, 12
	} ;

    printf("\nDisplay Function\n");
	display ( a, 3, 4 ) ;//1002,3,4

	printf("\nShow Function\n");
	show ( a , 3, 4 ) ; //show ( BA 1002/AS IT IS ARRAY COPY

	printf("\nPrint Function\n");
	print ( a , 3 , 4 ) ;//print ( BA1002/AS IT IS ARRAY COPY , 3, 4 ) ;
}
//q=1002
void display ( int *q, int row, int col )
{
	int i, j ;
	for ( i = 0 ; i < row ; i++ )//0 1
	{
	    //i=1
		for ( j = 0 ; j < col ; j++ )//0 1 2 3
            printf ( "%d\t", * ( q + i * col + j ) ) ;
//*(1002 + 0*4 + 0) => *(1002+0+0)=>*(1002+0)=>*(1002+0*4)=*1002=1
//*(1002 + 0*4 + 1) => *(1002+0+1)=>*(1002+1)=>*(1002+1*4)=*1006=2
//*(1002 + 0*4 + 2) => *(1002+0+2)=>*(1002+2)=>*(1002+2*4)=*1010=3
//*(1002 + 0*4 + 3) => *(1002+0+3)=>*(1002+3)=>*(1002+3*4)=*1014=4

//*(1002 + 1*4 + 0) => *(1002+4+0)=>*(1002+4)=>*(1002+4*4)=*1018=5
//*(1002 + 1*4 + 1) => *(1002+4+1)=>*(1002+5)=>*(1002+5*4)=*1022=6
//*(1002 + 1*4 + 2) => *(1002+4+2)=>*(1002+6)=>*(1002+6*4)=*1026=7
//*(1002 + 1*4 + 3) => *(1002+4+3)=>*(1002+7)=>*(1002+7*4)=*1030=8

//*(1002 + 2*4 + 0) => *(1002+8+0)=>*(1002+8)=>*(1002+8*4)=*1034=9
//*(1002 + 2*4 + 1) => *(1002+8+1)=>*(1002+9)=>*(1002+9*4)=*1038=10
//*(1002 + 2*4 + 2) => *(1002+8+2)=>*(1002+10)=>*(1002+10*4)=*1042=11
//*(1002 + 2*4 + 3) => *(1002+8+3)=>*(1002+11)=>*(1002+11*4)=*1046=12

		printf ( "\n" ) ;
	}
	printf ("\n" ) ;
}
//q=1002
void show ( int ( *q )[4], int row, int col )
{
	int i, j ;
	int *p ;
	for ( i = 0 ; i < row ; i++ )//0 1<3
	{
		p = q + i ;
		//p = 1002+ 0 * 16 = 1002
		//p = 1002+ 1*16= 1018
		//p = 1002+ 2*16= 1034
		for ( j = 0 ; j < col ; j++ )//0 1 2 3
			printf ( "%d\t", * ( p + j ) ) ;
			//*(1002+0*4)=*1002=1
            //*(1002+1*4)=*1006=2
            //*(1002+2*4)=*1010=3
            //*(1002+3*4)=*1014=4

            //*(1018+0*4)=*1018=5
            //*(1018+1*4)=*1022=6
            //*(1018+2*4)=*1026=7
            //*(1018+3*4)=*1030=8

            //*(1034+0*4)=*1034=9
            //*(1034+1*4)=*1038=10
            //*(1034+2*4)=*1042=11
            //*(1034+3*4)=*1046=12

			printf ( "\n" ) ;
	}
	printf ( "\n" ) ;
}

void print ( int a[3][4], int row, int col )
{
	int i, j ;
	for ( i = 0 ; i < row ; i++ )//0 1<3
	{
		for ( j = 0 ; j < col ; j++ )//0 1 2 3<4
			printf ( "%d\t", a[i][j]) ;
			//00 01 02 03
			//10 11 12 13
			//20 21 22 23
		printf ( "\n" ) ;
	}
	printf ( "\n" ) ;
}
*/


// Array of Pointers

//arr
//0     1       2       3
//102   202     302     402
//1002  1006    1010    1014

//i     j       k       l
//31    5       19      71
//102   202     302     402

/*
int main( )
{
	int *arr[4] ; // array of integer pointers
	int i = 31, j = 5, k = 19, l = 71, m ;
	arr[0] = &i ;
	arr[1] = &j ;
	arr[2] = &k ;
	arr[3] = &l ;
	for ( m = 0 ; m <= 3 ; m++ )//0 1 <=3
		printf ( "%d ", * ( arr[m] ) ) ; // *(arr[1]) *202 =5
		//*(102) 31
		//*(202) 5

    return 0;

}
*/



//a
//0     1       2       3       4
//10    11       2       3       4
//1002  1006    1010    1014    1018

//p
//0     1       2       3       4
//1002  1006    1010    1014    1018
//2002  2006    2010    2014    2018
/*
int main( )
{
	int a[ ] = { 10, 11, 2, 3, 4 } ;
	int *p[ ] = { a , a + 1, a + 2, a + 3, a + 4 } ;
	printf ( "\n%u %u %d", p , *p, * ( *p ) ) ;
                        //2002 , *2002 1002 , **2002 *1002 10
    printf ( "\n%u %u %d", p+1, *(p+1), * ( *(p+1) ) ) ;
	return 0;
}
*/


//          0       1       2       3
//  0       000     001     002     003
//          1       2       3       4
//          1002    1006    1010    1014
//0 1       010     011     012     013
//          5       6       7       8
//          1018    1022    1026    1030
//  2       020     021     022     023
//          9       10      11      12
//          1034    1038    1042    1046

//          0       1       2       3
//  0       100     101     102     103
//          11      22      33      44
//          1050    1054    1058    1062
//1 1       110     111     112     113
//          55      66      77      88
//          1066    1070    1074    1078
//  2       120     121     122     123
//          99      100     101     102
//          1082    1086    1090    1094


//          0       1       2       3
//  0       200     201     202     203
//          111     222       3       4
//          1098    1102    1106    1110
//2 1       210     211     212     213
//          5       6       7       8
//          1114    1118    1122    1126
//  2       220     221     222     223
//          9       10      11      1002
//          1130    1134    1138    1142



//arr => 1002 =>
//arr+0 => 1002 + 0*48 = 1002 => 0+arr => arr[0]
//arr+1 => 1002 + 1*48 = 1050 => 1+arr => arr[1]
//arr+2 => 1002 + 2*48 = 1098 => 2+arr => arr[2]

//&arr[2][2][3] => 1142
//*&arr[2][2][3] => *1142= 1002
//*(arr[2][2] + 3 )=> 1130 + 3*4 = *1142 = > 1002
//*(*(arr[2]+2) + 3 )=> *(1098+2*16+3*4) => 1098+32+12 =*1142=> 1002
//*(*(*(arr+2)+2) + 3 )=>1002+2*48 + 2*16+3*4=>1002+96+32+12=>*1142=1002

/*
int main( )
{
	int arr [3][3][4] = {
                        {1, 2, 3, 4,5,6,7,8,9,10,11,12 },
                        {11, 22, 33, 44,55,66,77,88,99,100,101,102 },
                        {111,222, 333, 444,555,666,777,888,999,1000,1001,1002 }
                       } ;
    int i,j,k;
    for(i=0;i<3;i++)//bunch 0 1
    {
        //i=1
        for(j=0;j<3;j++)//rows 0 1 2 3< 3
        {
            //j=2
            for(k=0;k<4;k++)//columns 0 1 2 3 4<4
                printf("[%d][%d][%d]=>%u=>%d\t",i,j,k,&arr[i][j][k],arr[i][j][k]);
            printf("\n");
            //000   001 002 003
            //010   011 012 013
            //020   021 022 023

            //100   101 102 103
            //110   111 112 113
            //120   121 122 123


        }
        printf("\n\n");
    }

    printf("\nBunch Base Address\n");
    for(i=0;i<3;i++)//bunch
        printf("%u %u %u\n",arr[i],arr+i,i+arr);

    printf("\nMultiple Style\n");
    for(i=0;i<3;i++)//bunch
    {
        for(j=0;j<3;j++)//rows
        {
            for(k=0;k<4;k++)//columns
            {
                printf("%d ",arr[i][j][k]);
                printf("%d ",*&arr[i][j][k]);
                printf("%d ",*(arr[i][j] + k ));
                printf("%d ",*(*(arr[i]+j) + k ));
                printf("%d\t\t",*(*(*(arr+i)+j) + k ));
            }
            printf("\n");
        }
        printf("\n\n");
    }

}
*/

//Pointer Rules
//1]Pointer + IC = Pointer Address + IC * SIZE
//2]Pointer - IC = Pointer Address - IC * SIZE
//3]Other Operators / * ^ No Error
//4] Pointer1 - Pointer2 = Index Minus
//5] Pointer1 + / * % Pointer2 => Error
//6] VVVVIMP... Direct Array name => Base Address=>1002
//7] Any Array pass To Function => Always It is Call By Reference


//Rules -
//1] Pointer + IC*SIZE OF DATA TYPE
//2] Pointer - IC*SIZE OF DATA TYPE
//3] Pointer * / % IC*SIZE OF DATA TYPE => Error
//4] Pointer1 = Pointer 2 Copy
//5] Pointer 1 - Pointer 2 = Index Minus
//6] Direct Array Name = > Base Address 1002


//Rule
//1]Pointer + IC*SIZE
//2]Pointer - IC*SIZE
//3] NO ERROR => Pointer * / % Other OP  IC*SIZE
//4] 1 Pointer = 2 Pointer
//5] 1 Pointer - 2 Pointer = Index Minus
//6] NO Error => 1 Pointer + * / % 2 Pointer = Index Minus
//7] Array Name => Base Address 1002
//8] ArrayName + 1 Integer Constant => Automatically Next Location
//9] Actual Array Pass  => Formal Change Bact To Change Actual
//   All Arrays Are Call By Reference
//10]


//Pointers Rules- 8/9/10
//1] Pointer + IC => Pointer + IC*SIZEOFDATATYPE
//2] Pointer - IC => Pointer - IC*SIZEOFDATATYPE
//3] Pointer * / % OTher OP IC => Error
//4] Pointer1 = Pointer2
//5] Pointer1 - Pointer2 = > Index Minus!!!
//6] Pointer1 + * / % Pointer2 = > Error
//7] Array Direct Name=> Base Address=> 1002





















































