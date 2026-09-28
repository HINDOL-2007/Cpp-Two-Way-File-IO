#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ofstream file("developer_profile.txt");
    string name, goal;
    cout << "Enter your name :- ";
    getline(cin, name);
    cout << "Enter your current coding goal :- ";
    getline(cin, goal);
    file << "Name :- " + name + "\nCoding Goals :- " + goal;
    file.close();
    ifstream filetxt("developer_profile.txt");
    cout << "\n\n------------Programar Data------------ \n";
    string data;
    while (getline(filetxt, data))
    {
        cout << data + "\n";
    }
    filetxt.close();
    return 0;
}