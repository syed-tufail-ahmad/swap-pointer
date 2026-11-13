
#include <iostream>
using namespace std;

void swap(int a, int b, int c)
{
    cin >> a >> a >> c;
    int temp = a;
    a = b;
    b = c;
    c = temp;
}
void swappointer(int *a, int *b, int *c)
{
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}
void swapRefrence(int &a, int &b, int &c)
{
    int temp = a;
    a = b;
    b = c;
    c = temp;
}
int main()
{
    cout << "";
    int y, x, z;
    cin >> y, x, z;
    cout << "the value of the pointer is x " << x << endl;
    cout << "the value of your pointer is y  " << y << endl;
    cout << "the value of your pointer is  z " << z << endl;

    return 0;
}
// #include <iostream>
// using namespace std;

// void swap(int a, int b, int c)
// {
//     cin >> a >> a >> c;
//     int temp = a;
//     a = b;
//     b = c;
//     c = temp;
// };
// void swappointer(int *a, int *b, int *c)
// {
//     int temp = *a;
//     *a = *b;
//     *b = *c;
//     *c = temp;
// };
// void swapRefrence(int &a, int &b, int &c)
// {
//     int temp = a;
//     a = b;
//     b = c;
//     c = temp;
// };
// int main()
// {
//     int y, x, z;
//     cin >> y, x, z;
//     cout << "the value of the pointer is x " << x << endl;
//     cout << "the value of your pointer is y  " << y << endl;
//     cout << "the value of your pointer is  z " << z << endl;

//     return 0;
// }