#include<iostream>
using namespace std;
int main()
{
    float b, h, area;
    cout << "Enter the height and base";
    cin >> b >> h;
    area = (b * h) / 2;
    cout << "Area of the triangle" << area<<endl;
    return 0;
}