//! write a program in c++ to create a vector class that defines the dimensions of the  vector//
#include <iostream>
#include <vector>
using namespace std;
class Vector {
private:
    int dim; // Dimensions of the vector
    vector<double> components; // Components of the vector
public:
    Vector(){
        dim=3;
        components = vector<double>(dim, 0.0); // Initialize components to zero
    }
    Vector(int d) {
        dim = d;
        components = vector<double>(dim, 0.0); // Initialize components to zero
    }
    Vector(vector<double> comp) {
        dim = (int)comp.size(); // Set dimensions based on the size of the provided vector
        components =  vector<double>(dim, 0.0); // Initialize components with provided values
        for (int i = 0; i < dim; i++) {
            components[i] = comp[i];
        }
    }
    void display(){
        for (int i=0; i<dim; i++){
            cout << components[i] << " ";
        }
        cout << endl;   
    }
};
int main (){
    Vector a;
    a.display();
    Vector b(5);
    b.display();
    vector<double> comp(10, 0);
    for (int i = 0; i < 10; i++) {
        comp[i] = i + 1; // Assign values to the components
    }
    Vector c(comp);
    c.display();
    return 0;
}