                        // Arrays in a for loop//
#include <iostream>

using namespace std;



int main()
{
    int dave[15];  //declaring a 15 element dave array//

    cout << "Element   -  Value "<< endl;
            //for loop//

    for(int x = 0; x <=14; x++){
        dave[x] = 45;  //just assigning 45 to all the elments in the array//

        cout << x <<"----------"<< dave[x]<< endl;
    }


    return 0;
}
