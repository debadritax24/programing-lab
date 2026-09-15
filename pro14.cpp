//! write a programm in c++ to implement static function//
#include <iostream>
using namespace std;

class Square{
public:
    static int count;

    Square(){
        count++;
    }
};
int Square::count = 0;
int main(){
    Square s1;
    Square s2;
    Square s3;
       cout << Square::count << endl;
    return 0;
}
