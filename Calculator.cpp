//Scientific Calculator
#include <iostream>
#include <cmath>
using namespace std;

double add (double a, double b){
    return a + b;
}
double subs (double a ,double b){
    return a - b;
}
double multi (double a, double b){
    return a * b;
}
double divis (double a, double b){
    return a / b;
}
void factorial (int a){
    int ans = 1;
    if (a < 0)
    {
        cout<<"You cannot factor negative number\n";
    }
    else
    {
        for (int i = 1; i <= a; i++)
        {
            ans = ans * i;
        }
        cout << ans;
    }
}

int main(){
    double num1;
    double num2;
    int operation_num;
    cout << "List of Operation:\n1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n5. Power\n";
    cout << "6. Square\n7. Log\n8. Sin\n9. Cos\n10. Tan\n11. Round\n12. Factorial"<<endl;
    
    cout<< "Please select the number operation: ";
    cin >> operation_num;
    cout <<endl;

    switch (operation_num)
    {
    case 1:
        cout << "Enter first number: ";
        cin >> num1;
        cout<<"\n";
        cout << "Enter the second number: ";
        cin>>num2;
        cout<<"\n";
        cout<<"The addition result is: "<< add(num1,num2)<<endl;
        break;
    case 2:
        cout << "Enter first number: ";
        cin >> num1;
        cout<<"\n";
        cout << "Enter the second number: ";
        cin>>num2;
        cout<<"\n";
        cout<<"The substraction result is: "<< subs(num1,num2)<<endl;
        break;
    case 3:
        cout << "Enter first number: ";
        cin >> num1;
        cout<<"\n";
        cout << "Enter the second number: ";
        cin>>num2;
        cout<<"\n";
        cout<<"The multiplication result is: "<< multi(num1,num2)<<endl;
        break;
    case 4:
        cout << "Enter first number: ";
        cin >> num1;
        cout<<"\n";
        cout << "Enter the second number: ";
        cin>>num2;
        cout<<"\n";
        if (num2 == 0)
        {
            cout << "Sorry you cannot divide by 0"<<endl;
            break;
        }
        cout<<"The division result is: "<< divis(num1,num2)<<endl;
        break;
    case 5:
        cout << "Enter number: ";
        cin >> num1;
        cout<<"\n";
        cout << "Enter the power number: ";
        cin>>num2;
        cout<<"\n";
        cout<<"The power result is: "<< pow(num1,num2)<<endl;
        break;
    case 6:
        cout << "Enter the number that want to be squared: ";
        cin >> num1;
        cout<<"\n";
        cout<<"The square result is: "<< sqrt(num1)<<endl;
        break;
    case 7:
        cout << "Enter the number: ";
        cin >> num1;
        cout<<"\n";
        cout<<"The log result is: "<< log(num1)<<endl;
        break;
    case 8:
        cout << "Enter the number: ";
        cin >> num1;
        cout<<"\n";
        cout<<"The sine result is: "<< sin(num1)<<endl;
        break;
    case 9:
        cout << "Enter the number: ";
        cin >> num1;
        cout<<"\n";
        cout<<"The cosinus result is: "<< cos(num1)<<endl;
        break;
    case 10:
        cout << "Enter the number: ";
        cin >> num1;
        cout<<"\n";
        cout<<"The tan result is: "<< tan(num1)<<endl;
        break;
    case 11:
        cout << "Enter first number: ";
        cin >> num1;
        cout<<"\n";
        cout<<"The rounding result is: "<< round(num1)<<endl;
        break;
    case 12:
        cout << "Enter the number: ";
        cin >> num1;
        cout<<"\n";
        cout<<"The factorial result is: ";
        factorial(num1);
        break;
    default:
        cout << "Sorry please select the available number!"<<endl;
    }
    return 0;
}