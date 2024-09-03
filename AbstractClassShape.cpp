#include <iostream>
using namespace std;
class Shape {
    public:
    
    virtual int getPerimeter() = 0;
    void getLength(int l){
        shape_length = l;
    }
    void getWidth(int w){
        shape_width = w;
    }
    
    protected:
    int shape_length;
    int shape_width;
};
class Rectangle : public Shape{
    public:
    int getPerimeter(){
        return 2*(shape_length + shape_width);}
    };
class Square : public Shape{
    public:
    int getPerimeter(){
        return 4*(shape_width);}
    friend float circlePerimeter(Square s);    
    };  
    float circlePerimeter(Square obj){
        return 2*3.14*obj.shape_width;
    }
    
   
    
int main() {
    Rectangle R;
    Square S;
    R.getLength(10);
    R.getWidth(20);
    S.getWidth(20);
    //Circle obj(10);
    //Square(obj);
    cout<<"Perimeter of Rectangle : "<<R.getPerimeter()<<endl;
    cout<<"Perimeter of Square : "<<S.getPerimeter()<<endl;
    cout<<"Circumference of circle:"<<circlePerimeter(S)<<endl;
    return 0;
}
