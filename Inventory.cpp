/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    //84830CW000NNB
    int x;
    int y;
    cout << "84830CW000NNB: ";
    cin >> x;
    cout << "Partial Totes: ";
    cin >> y;
    
    int cw000 = 80 * x + y; //Sum Calculation
    
    cout << "    " << endl;
    
    //84830CW100NNB
    int x2;
    int y2;
    cout << "84830CW100NNB: ";
    cin >> x2;
    cout << "Partial Totes: ";
    cin >> y2;
    
    int cw100 = 96 * x2 + y2; //Sum Calculation
    
    cout << "    " << endl;
    
    //84852CW000NNB
    int x3;
    int y3;
    
    cout << "84852CW000NNB: ";
    cin >> x3;
    cout << "Partial Totes: ";
    cin >> y3;
    
    int cw0002 =144 * x3 + y3; //Sum Calculation
    
    cout << "   " << endl;
    
    //84852CW100NNB
    int x4;
    int y4;
    
    cout << "84852CW100NNB: ";
    cin >> x4;
    cout << "Partial Totes: ";
    cin >> y4;
    
    int cw1002 = 144 * x4 + y4;
     
    cout << "   " << endl; //Sum Calculation
    
    //Inventory Output
    cout << "Current Inventory" << endl;
    cout << "-----------------" << endl;
    cout << "84830CW000NNB: " << cw000 << endl;
    cout << "84830CW100NNB: " << cw100 << endl;
    cout << "84852CW000NNB: " << cw0002 << endl;
    cout << "84852CW100NNB: " << cw1002 << endl;
    
    return 0;
    
}