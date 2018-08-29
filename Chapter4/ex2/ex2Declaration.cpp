/**
* @file ex2Declartion.cpp
* @brief ex2 - For each declarion from section 4.9, do the following:
* 	If the declaration is not a definition, write a definition
* 	If the declaration is a definition then write a declarion which is not a definition.
*
* @author Steve Snelson 
*
* @date 29/08/2018
*/

///Declartion consists of 4 parts.  Optional Specifier, Base type, declarator, initializer ended by ;

/// Definition - memory allocated to enable ch to be assigned
char ch;
/// Declaration - Ch can not be used until declared within the code.
extern char ch;
/// if extern char ch = a then extern is ingnored and it becomes a declaration.

/// Definition - s of String
string s;
///Declaration
extern string s;

///Definintion - int count
int count=1;
///Declaration
extern int count;

///Definition of pi
const double pi = 3.1415926535897932385;
/// Declaration
extern const double pi;

///Definition of error_number
int error_number = 1;
//Declaration
extern int error_number;

///Definition of name and season
char* name="Njal";
char* season[]={"spring","summer","autum","winter"};
///Declaration 
extern char* name;
extern char* season;

///Definition of Strcut Date
struct Date { int d,m,y;};
///Declaration
struct Date;

///Definition
int day(Date* p) {return p->d;};
///Declaration
int day(Date* p);

///Definition
double sqrt(double) { return double};
///Declaration
double sqrt(double);

///Definition
template<class T> T abs(T a) {return a<0 ? -a : a;};
///Declaration
template<classT>;

typedef complex<short> Point;
///Definition
struct User; {bill, bob, ben};
///Declaration
struct User;



#enum Beer {Carlsberg, Thor, Tuborg};
#namespace NS(int a:);

