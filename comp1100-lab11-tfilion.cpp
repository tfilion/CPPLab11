#include <iostream>
#include <string>
#include <math.h>

using namespace std;

double firstNumber, secondNumber;
double result;
int operation;                              //initializing variables
string text1;
string text2;
string text3;

double Add (double firstNumber, double secondNumber){ 
    result = firstNumber + secondNumber;
    return result;
} 
double Sub (double firstNumber, double secondNumber){
    result = firstNumber - secondNumber;
    return result;
}    
double Mult (double firstNumber, double secondNumber){
    result = firstNumber * secondNumber;                            //functions to run each equation
    return result;
}  
double Div (double firstNumber, double secondNumber){
    result = firstNumber / secondNumber;
    return result;
}   
float Exp (double firstNumber, double secondNumber){
    result = pow (firstNumber, secondNumber);
    return result;
}   
float Sqrt (double firstNumber){
    result = sqrt(firstNumber);
    return result;
}  
void num1 (string text1){
    cout << "Enter first number:" << endl;
}                                                                   //functions to print text        
void num2 (string text2){
    cout << "Enter second number:" << endl;
}
void answer (string text3){
    cout << "Answer: " << result << endl;
}


int main(){

cout << endl;
cout << " ***WELCOME TO TINA'S CPP CALCULATOR*** "<<endl;           //will only print when program starts

while (1==1){       //will loop continuously

    cout << endl;
    cout << "Select the operation you would like to use: "<<endl;
    cout << endl;                                                               //text printed for user
    cout << "1: Addition" << endl;
    cout << "2: Subtraction" << endl;
    cout << "3: Multiplication" << endl;
    cout << "4: Division" << endl;
    cout << "5: Exponent" << endl;
    cout << "6: Square Root" << endl;
    cout << endl;

    cin >> operation;
    cout << endl;
    
    if (operation == 1) { //Add
    
        cout << "ADDITION" << endl << endl;
        
        num1 (text1);           //calling text printing function
        cin >> firstNumber;
        cout << endl;
        num2 (text2);           //calling text printing function              } same for rest of else if statements
        cin >> secondNumber;
    
    Add(firstNumber, secondNumber);  //calling operation function
    cout << endl;
    answer (text3);               //calling result output text function

    }
    else if (operation == 2){ //Subtract

        cout << "SUBTRACTION" << endl << endl;
        
        num1 (text1);
        cin >> firstNumber;
        cout << endl;
        num2 (text2);
        cin >> secondNumber;
    
    Sub(firstNumber, secondNumber);
    cout << endl;
    answer (text3);
    
    }
    else if (operation == 3){ //Multiply
           
        cout << "MULTIPLICATION" << endl << endl;
        
        num1 (text1);
        cin >> firstNumber;
        cout << endl;
        num2 (text2);
        cin >> secondNumber;
    
    Mult(firstNumber, secondNumber);
    cout << endl;
    answer (text3);

    }
    else if (operation == 4){ //Divide
        
        cout << "DIVISION" << endl << endl;
        
        num1 (text1);
        cin >> firstNumber;
        cout << endl;
        num2 (text2);
        cin >> secondNumber;
    
    Div(firstNumber, secondNumber);
    cout << endl;
    answer (text3);

    }
    else if (operation == 5){ //Exponent
        
        cout << "EXPONENT" << endl << endl;

        num1 (text1);
        cin >> firstNumber;
        cout << endl;
        num2 (text2);
        cin >> secondNumber;
    
    Exp(firstNumber, secondNumber);
    cout << endl;
    answer (text3);

    }
    else if (operation == 6){ //Square Root
        
        cout << "SQUARE ROOT" << endl << endl;

        num1 (text1);
        cin >> firstNumber;
       
    Sqrt(firstNumber);
    cout << endl;
    answer (text3);
    }
}

return 0;
}