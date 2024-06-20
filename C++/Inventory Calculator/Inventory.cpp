/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    //CW-5039
    int x;
    int y;
    cout << "CW-5039: ";
    cin >> x;
    cout << "Partial Totes: ";
    cin >> y;
    
    int cw5039 = 80 * x + y; //Sum Calculation
    
    cout << "    " << endl;
    
    //CW-1236
    int x2;
    int y2;
    cout << "CW-1236: ";
    cin >> x2;
    cout << "Partial Totes: ";
    cin >> y2;
    
    int cw1236 = 96 * x2 + y2; //Sum Calculation
    
    cout << "    " << endl;
    
    //CW-3678
    int x3;
    int y3;
    
    cout << "CW-3678: ";
    cin >> x3;
    cout << "Partial Totes: ";
    cin >> y3;
    
    int cw3678 =144 * x3 + y3; //Sum Calculation
    
    cout << "   " << endl;
    
    //CW-4218
    int x4;
    int y4;
    
    cout << "CW-4218: ";
    cin >> x4;
    cout << "Partial Totes: ";
    cin >> y4;
    
    int cw4218 = 144 * x4 + y4;
     
    cout << "   " << endl; //Sum Calculation
    
    //Inventory Output
    cout << "Current Inventory" << endl;
    cout << "-----------------" << endl;
    cout << "CW-5039:: " << cw5039 << endl;
    cout << "CW-1236: " << cw1236 << endl;
    cout << "CW-3678: " << cw3678 << endl;
    cout << "CW-4218: " << cw4218 << endl;
    
    return 0;
    
}
