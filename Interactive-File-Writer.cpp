#include <iostream>
#include <fstream>
#include<cstring>
using namespace std;
int main()
{
    ofstream file("test.txt");
    string s, name;
    s = ("I am Hindol Paramanick\n");
    file << s;
    cout << "Enter your description :- " << endl;
    getline(cin, name);
    file << name;
    file.close();
    return 0;
}