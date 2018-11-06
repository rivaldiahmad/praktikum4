#include <iostream>

using namespace std;

int main ()
{
    int max, a;
    max = 0;

    do {
        cout << "masukkan bilangan : ";
        cin >> a;
        if (max < a)
            max = a;
    } while (a !=0);
    cout << "bilangan terbesar adalah: " << max << endl;
    return 0;
}
