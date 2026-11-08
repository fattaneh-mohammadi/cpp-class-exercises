#include <iostream>

using namespace std;

int main()
{
    int number1,number2,mini,maxi,menu,i ;
    cout << "Enter first number ... " << endl ;
    cin >> number1 ;
    cout << "Enter second number ... " << endl ;
    cin >> number2 ;

    mini = min (number1 , number2);
    maxi = max (number1 , number2);

    cout << "\n**********************************************************" << endl;
    cout << "1.Even numbers\n2.Odd numbers" << endl ;
    cin >> menu ;

    switch (menu)
{
 case 1 :
        for (int i = mini+1 ; i<maxi ; i+=1)
        if (i%2==0)
        cout << i << " " ;
        break;
 case 2 :
        for (int i = mini+1 ; i<maxi ; i+=1)
        if (i%2!=0)
        cout << i << " " ;
        break;
 default :
    cout << "Go for yourself..." << endl;
}


    return 0;
}
