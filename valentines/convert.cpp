#include <iostream>
using namespace std;

int main(){
    while (!cin.eof()){
        string s;
        getline(cin, s);
        cout << "<img class=\"smallImg\" src=\"./resources/jackie_pics/" << s << "\" alt=\"\">\n";
    }
}