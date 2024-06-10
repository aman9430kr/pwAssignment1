/*Q1. Print all the odd numbers from 1 to 100.
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=100;i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
}
output-1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 41 43 45 47 49 51 53 55 57 59 61 63 65 67 69 71 73 75 77 79 81 83 85 87 89 91 93 95 97 99 

 Q2 Print all numbers from 1 to 100 that are divisible by 3
 #include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=100;i++){
        if(i%3==0){
            cout<<i<<" ";
        }
    }
}
output-3 6 9 12 15 18 21 24 27 30 33 36 39 42 45 48 51 54 57 60 63 66 69 72 75 78 81 84 87 90 93 96 99

 Q3 Print the table of ‘n’. Here ‘n’ is an integer which the user will input
    #include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"enter n: ";
        cin>>n;
        for(int i=5;i<=50;i+=5){
            
            cout<<i<<" ";
            }
        }
        output-- enter n: 5
    5 10 15 20 25 30 35 40 45 50 

 Q4   Display this AP - 4,7,10,13,16.. upto ‘n’ terms
    #include<iostream>
        using namespace std;
        int main(){
            int n;
            cout<<"enter n:";
            cin>>n;
            int a=4;
            for(int i=1;i<=n;i++){
                
                cout<<a<<" ";
                a=a+3;
                }
            }
            output:--enter n:20
    4 7 10 13 16 19 22 25 28 31 34 37 40 43 46 49 52 55 58 61 

    Q5. Display this GP - 3,12,48,.. upto ‘n’ terms
        #include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"enter a no"<<endl;
        cin>>n;
        
        
        int a=3;
        for (int i = 1; i <=n; i++)
        {
            cout<<a<<" ";
            a=a*4;
        } 
    }
    output:--enter a no
    10
    3 12 48 192 768 3072 12288 49152 196608 786432

 Q6. Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.

    #include <iostream>
    using namespace std;

    int main()
    {
        
        char i;
        i = 'A';

        while (i <= 'Z') {
            cout<<i<<" "<<int(i);
            i++;
        }
        
        i = 'a';

        while (i <= 'z') {
            cout<<i<<" "<<int(i);
            i++;
        }
    }
    output--A65 B66 C67 D68 E69 F70 G71 H72 I73 J74 K75 L76 M77 N78 O79 P80 Q81 R82 S83 T84 U85 V86 W87 X88 Y89 Z90
    a97 b98 c99 d100 e101 f102 g103 h104 i105 j106 k107 l108 m109 n110 o111 p112 q113 r114 s115 t116 u117 v118 w119 x120 y121 z122
    */

 //LOOPS 2--------------------------------------------------

/*Q1. Predict the output
 #include <bits/stdc++.h> 
using namespace std; 
int main() { 
while ('1' < '2') 
cout << "In while loop" << endl; 
}
OUTPUT---
In while loop
In while loop
.
.
.
.
infinte time

 Q2. Predict the output
 #include <bits/stdc++.h> 
using namespace std; 
int main( ) { 
int t = 10; 
while (t /= 2) { 
cout << "Hello" << endl; 
} 
}
output--
Hello
Hello
Hello

 Q3. Predict the output
 #include <bits/stdc++.h> 
using namespace std; 
int main( ) { 
for (int x = 1; x * x <= 10; x++) 
cout << "In for loop" << endl; 
}
output-- x goes to 1 to 3
In for loop
In for loop
In for loop

 Q4. Predict the output
    #include <bits/stdc++.h> 
    using namespace std; 
    int main( ) { 
    int x = 10, y = 0 ; 
    while ( x >= y ) { 
    x-- ; 
    y++ ; 
    cout << x << " " << y << endl ; 
    } 
    }
    output--
    9 1
    8 2
    7 3
    6 4
    5 5
    4 6

    Q5. WAP to print the sum of all the even digits of a given number
        #include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"enter a no: ";
        cin>>n;
        int sum=0;
        while(n>0){
            
            
            int lastdigit=n%10;
            if(lastdigit%2==0){
        
            sum=sum+lastdigit;
            }
            n=n/10;
        }
        cout<<sum;
    }
    output:-
    enter a no: 4556
    10

    Q6. WAP to print the sum of a given number and its reverse
        #include<iostream>
        using namespace std;
        int main(){
            int n;
            cout<<"enter a no:";
            cin>>n;
        int temp = n, x = 0; 
    while (temp > 0) { 
    x *= 10; 
    x += (temp % 10); 
    temp /= 10; 
    } 
    cout << n + x << endl; 
    }
    output--
    enter a no:12
    33

   Q7 Print the factorials of first ‘n’ numbers
    #include<iostream>
            using namespace std;
            int main(){
                int n;
                cout<<"enter a no:";
                cin>>n;
                int fact=1;
                for (int i = 1; i <=n; i++)
                {
                    fact=fact*i;
                }
                cout<<fact;    
        } 
        output--
        enter a no:10
    3628800

    Q8. Print first ‘n’ fibonacci numbers
    #include<iostream>
            using namespace std;
            int main(){
                int n;
                cout<<"enter a no:";
                cin>>n;
                int a=1,b=1,sum=0;
                
                for (int i = 3; i <=n; i++)
                {
                    sum=a+b;
                    a=b;
                    b=sum;
                }
                cout<<sum;    
        } 
        output: enter a no:10
                        55

     Q9. Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of 
each digit of the number is equal to the number itself, then the number is called an Armstrong 
number.
#include <iostream> 
using namespace std; 
int main( ) { 
for (int i = 1; i <= 500; i++) { 
int x = 0, temp = i; 
while (temp > 0) { 
int m = temp % 10; 
x += m * m * m; 
temp /= 10; 
} 
if (i == x) { 
cout << i << endl; 
} 
} 
}
output--
1
153
370
371
407
*/