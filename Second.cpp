#include<iostream>
#define PI 3.145

int r = 2;
void area();

class MyClass
{
    public:
        int a;
        void display()
        {
            std::cout<<"inside class"<<std::endl;
        }
};

int main()
{
    MyClass m;
    m.a=90;
    m.display();
    area();
    std::cout<<"Hello World from Main Function"<<std::endl;
    std::cout<<m.a<<std::endl;
    return 0;
}

void area()
{
    float area;
    area = PI*r*r;
    std::cout<<area<<std::endl;
}