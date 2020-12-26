#include "Time.h"
#include <iostream>

using namespace std;

int main(){
    Time time1(45, 70, 207), time2(45, 70, 207);
    time1.showTime();
    if (time1 != time2){
        cout << "LOL" << endl;
    }
    else{
        cout << "mdr" << endl;
    }
    return 0;
}
