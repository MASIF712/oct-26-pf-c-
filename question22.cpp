#include <iostream>
using namespace std;
double Area_square(float l)
{
    return l * l;
}
double Area_rec(float l, float w)
{
    return l * w;
}
int main()
{
    cout << "Enter length of square: ";
    float l_seq;
    cin >> l_seq;
    cout << "Area of a sequare is: " << Area_square(l_seq);
    cout << "\nEnter length and width of rectangle: ";
    float l, w;
    cin >> l >> w;
    cout << "Area of a rectangle is : " << Area_rec(l, w);
    return 0;
}