/************************************************************/
/*   Author: Rene Morales                                   */
/*   Creation Date: March 8, 2019                           */
/*   Due Date:March 21, 2019                                */
/*   Course:CSC135 030                                      */
/*   Professor Name: Dr. Manakkadu                          */
/*   Assignment:#3                                          */
/*   Filename: tempConversion.cpp                           */
/*   Purpose:This program need to convert the temperature   */
/*   in Celsius to Fahrenheit or vice versa                 */
/************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Prototype
void overView();
void results(float fahrenheit, float celsius);
char tempScale();
float tempReading();
float convertFtoC(float);
float convertCtoF(float);

int main(){

    overView ();
    cout << setprecision (2) << fixed;
    float fahrenheit, celsius;
    char scale = tempScale();
    float degree;

    if(scale == 'F' || scale == 'f'){
        degree = tempReading();
        celsius = convertFtoC(degree);
        fahrenheit = degree;
    }
    else if (scale == 'C' || scale == 'c'){
        degree = tempReading();
        fahrenheit = convertCtoF(degree);
        celsius = degree;
    }
    else{
        cout << "***Error: Invalid temperature Scale Please try again!" << endl;
        return 0;
    }

    results(fahrenheit, celsius);

    return 0;

}

// this function was build to give an overview to the user explaining the program
void overView(){
    cout << "This program will convert a temperature reading provided in" << endl;
    cout << "either Fahrenheit or Celsius to the other measurement scale." << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << endl;
}

// this function was build to ask the user to chose the temperature scale
char tempScale(){
    char scale;
    cout << "Please chose the temperature scale that you wish to use (F = Fahrenheit; C = Celsius): ";
    cin >> scale;
    return scale;
}

// this function was build to ask the user to enter the temperature reading in degree
float tempReading(){
    float degree;
    cout << "Please enter your temperature reading (in degrees): ";
    cin >> degree;
    cout << endl;
    return degree;
}

// This function was build to converts a Fahrenheit temperature to celsius
float convertFtoC(float fahrenheit){
    float celsius;
    celsius = (fahrenheit - 32) / 1.8;
    return celsius;
}

// This function was build to converts a Celsius temperature to Fahrenheit
float convertCtoF(float celsius){

    float fahrenheit;
    fahrenheit = (1.8 * celsius + 32);
    return fahrenheit;

}

// This function will display the results to the user
void results(float fahrenheit, float celsius){

cout <<"Your temperature reading converts as follows:" << endl;
cout << endl;
cout << "Fahrenheit: " << fahrenheit << " °F" << endl;
cout << "Celsius: " << celsius << " °C" << endl;

}


