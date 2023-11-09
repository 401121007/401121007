#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    /*3:A)Print the message"Enter two number".*/
    cout << "please type two number :";
    cout << "\n\n";


    /*3:B)Assign the product of variables b and c to variable a.*/
    int a ,b ,c;
     a=(b*c);


    /*3:C)State that a program performs a payroll calculation (i.e.,use text that helps to document a program).
       This program calculates one's salary.*/



    /*3:D)Input three integer values from the keyboard into integer variables a , b and c .*/
    int a1,a2,a3;
    cout << "plz type tree number : ";
    cin >> a1 >> a2 >> a3;
    cout << "\n\n";


    /*10:(Arithmetic) Write a program that asks the user to enter two numbers, obtains the two numbers from the user and prints the sum, product, difference, and quotient of the two numbers.*/
    int s1,s2;
	cout<<"Enter two numbers (intejer):";
	cin>>s1>>s2;
	cout<<"A+B :"<<s1+s2<<"\n";
	cout<<"A*B :"<<s1*s2<<"\n";
	cout<<"A-B :"<<s1-s2<<"\n";
	cout<<"A/B :"<<s1/s2<<"\n";


    /*11:(Printing) Write a program that prints the numbers 1 to 4 on the same line with each pair of adjacent numbers separated by one space. Do this several ways:
    A) Using one statement with one stream insertion operator.
    B) Using one statement with four stream insertion operators.
    C) Using four statements.*/
    //A:
    cout << "1 2 3 4"<<"\n";

    //B:
    cout << "1 " << "2 " << "3 " << "4" << "\n";

    //C:
    cout<<"1 ";
	cout<<"2 ";
	cout<<"3 ";
	cout<<"4 ";
	cout << "\n\n";


    /*12)(Comparing Integers) Write a program that asks the user to enter two integers, obtains the numbers from the user, then prints the larger number followed by the words "is larger." If the numbers are equal, print the message "These numbers are equal."*/

    int b1,b2;
	cout<<"Enter two integer:";
	cin>>b1>>b2;
	if(b1>b2)
	  cout<<"the number "<<b1<<" is larger .";
	else if(b1<b2)
	  cout<<"the number "<<b2<<" is larger.";
	else
	  cout<<"These numbers are equal.";
	cout << "\n\n";


	/*13.(Arithmetic, Smallest and Largest) Write a program that inputs three integers from the keyboard and prints the sum, average, product, smallest and largest of these numbers.*/

	int c1,c2,c3;
	cout<<" please type three number (integers) :";
	cin>>c1>>c2>>c3;
	cout<<"Sum is "<<(c1+c2+c3)<<"\n";
	cout<<"Average is "<<(c1+c2+c3)/3<<"\n";
	cout<<"multiplication is "<<(c1*c2*c3)<<"\n";
	if(c1<c2 && c1<c3)
	  cout<<"Smallest is "<<c1<<"\n";
	else if(c2<c1 && c2<c3)
	  cout<<"Smallest is "<<c2<<"\n";
	else{
	  cout<<"Smallest is "<<c3<<"\n";}

	if(c1>c2 && c1>c3)
	  cout<<"Largest is "<<c1<<"\n";
	else if(c2>c1 && c2>c3)
	  cout<<"Largest is "<<c2<<"\n";
	else
	  cout<<"Largest is "<<c3<<"\n";


	 /*14)(Diameter, Circumference and Area of a Circle) Write a program that reads in the radius of a circle as an integer and prints the circle’s diameter, circumference and area. Use the constant value 3.14159 for π. Do all calculations in output statements. */

    int r;
	float pi=3.14159;
	cout<<"Enter the number about shoa of the daiereh :";
	cin>>r;
	cout<<"Ghotre :"<<(2*r)<<"\n";
	cout<<"Mohit :"<<(2*r*pi)<<"\n";
	cout<<"Masaaht :"<<(r*r*pi)<<"\n";
	cout<<"\n\n";

	getch();


	 /*15)(Displaying Shapes with Asterisks) Write a program that prints a box, an oval, an arrow and a diamond as follows:*/
    cout<<" *********                  ***                       *                               *" <<"\n";
	cout<<" *       *                *     *                    ***                             * *" <<"\n";
	cout<<" *       *              *         *                 *****                           *   *" <<"\n";
	cout<<" *       *              *         *                   *                            *     *" <<"\n";
	cout<<" *       *              *         *                   *                           *       *" <<"\n";
	cout<<" *       *              *         *                   *                            *     *" <<"\n";
	cout<<" *       *              *         *                   *                             *   *" <<"\n";
	cout<<" *       *                *     *                     *                              * *" <<"\n";
	cout<<" *********                  ***                       *                               *" <<"\n\n\n";


    /*17)(Largest and Smallest Integers) Write a program that reads in five integers and determines and prints the largest and the smallest integers in the group.*/

    int d[5];
    cout<< "plz typ 5 numbers :\n";
    for(int i=0;i<5;i++){
    cout << "plz type number "<<(i+1)<<" (intejer):";
    cin >> d[i];
    }
    int temp=0;
    for(int i=(5-1);i>0;i--){
        for(int j=0;j<i;j++){
            if(d[j]>d[j+1]){
             temp=d[j];
             d[j]=d[j+1];
             d[j+1]=temp;
            }
        }
    }
    cout << "largest is :"<< d[4];
    cout << "smallest is :"<< d[0];
    cout << "\n\n";



    /*18)(Odd or Even) Write a program that reads an integer and determines and prints whether it’s odd or even.*/
    int w;
    cout << "(fard / zoje)plz type any number (intejer) :";
    cin>> w;
    if((w%2)== 0)
        cout <<"the number "<< w <<" is odd";
    else
        cout<<"the number "<< w <<" is even";
   cout<< "\n\n";


    /*19)(Multiples) Write a program that reads in two integers and determines and prints if the first is a multiple of the second.*/

    int t1,t2;
    cout << "(mazrab) plz typ two number :";
    cin >> t1>> t2;
    if((t1%t2)== 0)
        cout<< "YES...";
    else
        cout << "NO...";
    cout << "\n\n";
    getch();

    /*20)(Checkerboard Pattern) Display the following checkerboard pattern with eight output statements, then display the same pattern using as few statements as possible.*/

    cout<<"* * * * * * * *"<<"\n";
    cout<<" * * * * * * * *"<<"\n";
	cout<<"* * * * * * * *"<<"\n";
	cout<<" * * * * * * * *"<<"\n";
	cout<<"* * * * * * * *"<<"\n";
	cout<<" * * * * * * * *"<<"\n";
	cout<<"* * * * * * * *"<<"\n";
	cout<<" * * * * * * * *"<<"\n\n\n";

	for(int i=1;i<9;i++){
        if(i%2==0){
            cout<<" ";
        }
        cout<<"* * * * * * * *";
        cout << "\n";
	}
	cout << "\n\n";


    /*21)Write a program that prints the integer equivalent of a character typed at the keyboard. Store the input in a variable of type char .*/

    char k;
    cout << "plz type a character :";
    cin >> k;
    cout << "ascii code is :"<< int(k);
    cout<< "\n\n";

    /*22)(Digits of an Integer) Write a program that inputs a fivedigit integer, separates the integer into its digits and prints them separated by three spaces each.*/
    int g,q[5];
    cout << "plz typ a number in 5 digit :";
    cin >> g;
    for(int i=4;i>=0;i--){
        q[i]=g%10;
        g=g/10;
    }
    cout <<q[0]<<" "<<q[1]<<" "<<q[2]<<" "<<q[3]<<" "<<q[4]<< "\n\n";


    /*23)(Table) Using the techniques of this chapter, write a program that calculates the squares and cubes of the integers from 0 to 10. Use tabs to print the following neatly formatted table of values*/

    cout<<"integer"<<"\t\t"<<"square"<<"\t\t"<<"cube"<<endl;
	for(int i=0 ; i<=10 ; i++)
	  cout<<i<<"\t,\t "<<i*i<<"\t,\t "<<i*i*i<<endl;




    getch();
    return 0;
}
