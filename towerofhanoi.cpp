#include <iostream>

using namespace std;

void toh(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        cout << "\nMOVE DISK FROM TOWER " << from << " TO TOWER " << to;
    }
    else
    {
        toh(n - 1, from, aux, to);
        cout << "\nMOVE DISK FROM TOWER " << from << " TO TOWER " << to;
        toh(n - 1, aux, to, from);
    }
}

int main()
{
    int n;

    cout << "ENTER NUMBER OF DISKS: ";
    cin >> n;

    toh(n, 'A', 'C', 'B');
    return 0;
}
