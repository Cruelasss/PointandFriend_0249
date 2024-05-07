#include <iostream>
using namespace std;

class mahasiswa 
{
    void showNim()
{
    cout << "No Induk = " << showNim << endl;

}
};
int main ()
{
    mahasiswa *mhs = new mahasiswa(1); // pointer object mhs
    mhs->Nim = 2;
    mhs->showNim();
    delete mhs;
    return 0;
}
