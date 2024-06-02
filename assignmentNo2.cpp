/*Q1 Find the output for this code. Let input:- 2 3 6
#include <iostream>
using namespace std;
int main()
{
int x;
cout << "Enter first number\n";
cin >> x; // user will give ‘x’ a value.
int y, m;
cout << "Enter second number and value for taking modulus\n";
cin >> y >> m; // user will give ‘y’ a value.
int Z = (x * y) % m;
cout << "Output is: " << Z;
}
output:-
Enter first number
2
Enter second number and value for taking modulus
3 6
Output is: 0*/

/*Q2 find the output for this code input -3 2
#include <iostream>
using namespace std;
int main()
{
int x;
cout<<"Enter first number\n";
cin>>x; // user will give 'x' a value.
int y;
cout<<"Enter second number\n";
cin>>y; // user will give 'y' a value.
cout<<(x!=y)<<" "<<(x>=y);
} 
output:-
Enter first number
3
Enter second number
2
1 1
*/

/*Q3 find the output for this code input - 2 3
#include <iostream>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
x+=y;
x-=y;
x%=y;
cout<<x;
}
output-
2 3
2
*/

/*Q4 WAP for finding the volume of the cylinder by taking radius and height as input.
#include <iostream>
using namespace std;
int main()
{
int x;
cout<<"Enter radius number"<<endl;
cin>>x; 
int y;
cout<<"Enter height number"<<endl;
cin>>y;
float volume = 3.14 * x *x *y;
cout<<volume<< " is volume";
}
output--
Enter radius number
3
Enter height number
5
141.3 is volume
*/

/* Q5 WAP to find the difference between ASCII of two characters ,take them as input .
#include <iostream>
using namespace std;
int main()
{
char x;
cout<<"Enter 1st character: "<<endl;
cin>>x; 
char y;
cout<<"Enter 2nd character : "<<endl;
cin>>y;
cout<<"difference of two ASCII "<< int (x)-int(y);
}
output--
Enter 1st character: 
a
Enter 2nd character :
b
difference of two ASCII -1
*/

/*Q6 find the output of code
#include <iostream>
using namespace std;
int main()
{
int i = ( 4 + 7 / 5 * 6 * 6+9 )% 100 ;
cout<<i;
}
output--
49
*/