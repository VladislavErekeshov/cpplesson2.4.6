/* Вводится одно натуральное пятизначное число.Догадайтесь по двум открытым тестам, какую надо написать программу, чтобы она прошла все оставшиеся закрытые наборы исходных данных.

Sample Input 1:

12345
Sample Output 1 :

9 6
Sample Input 2 :

67890
Sample Output 2 :

14 16
*/

#include <iostream>
using namespace std;
int main()
{
    int x, a, b, c, d, e;
    cin >> x;
    a = x / 10000;
    b = x / 1000 % 10;
    c = x / 100 % 10;
    d = x / 10 % 10;
    e = x % 10;
    cout << a + c + e << " " << b + d;
    return 0;
}
