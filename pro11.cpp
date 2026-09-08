//! write a program in c++ to create a vector class to define addition,substraction,dot product and cross product//

#include <vector>
using namespace std;

class Vector
{
    private:
     int dim;
    vector<double> elems;
     
    public: Vector ()
    {
        dim=3;
        elems=vector<double>(dim,0);//first arguement--no of elements
        //second arguemen t--initial value of each element
}

Vector(int d)
{
    dim=d;
    elems=vector<double>(dim,0);
}
Vector(vector<double> e)
{
    dim=(int)e.size();//size func returns size_1
    elems=vector<double>(dim,0);
    for(int i=0;i<dim;i++)
    {
        elems[i]=e[i];
    }
}
void display()
{
    for (int i=0;i<dim;i++)
    {
        cout<<elems[i]<<" ";
       
}
cout<<endl;
}

Vector add (Vector b)
{
    Vector c(elems);
    for (int i=0;i<dim;i++)
    {
        c.elems[i]=elems[i]+b.elems[i];
    }
    return c;

}
};
int main ()
{
    Vector a;
    a.display();

    Vector b(4);
    b.display();

    vector <double>elems=vector<double>(10,0);
    for (int i=0;i<10;i++)
    {
        elems[i]=i;
    }

    Vector c(elems);
    c.display();

    Vector d= a.add(c);
    d.display();
    
    return 0;
}