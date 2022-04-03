
#include <iostream>

using namespace std;


int main()

{
    string command;
    while (command != "RUN") {
        cout << "If you want to start this programme, write RUN. " << endl;
        cin >> command;
    }
        
    
    cout << "How long is your flame?  ";
    
    int cir;
    cin >> cir;
 
    if(cir < 3) {
        cout << "Your flame is not enouth. Min is 3. ";
        return 1;
    }
    int a, b;
    a = cir / 3;
    b = a + cir % 3;
    
    cout << "side length a is " << a << endl;
    cout << "side length b is " << b << endl;
    cout << "the length of the wall used is " << b << endl;
    
    int area;
    area = a*b;
    cout << "Area is " << area<< endl;
    
    return 0;
}
