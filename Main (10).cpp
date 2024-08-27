#include <iostream>
#include <string>
using namespace std;
int main() {
    string str="Hello";
    
    // concatenation
    string greeting = str +",jarvis";
    cout<<"concatenation:"<<greeting<<endl;
    
    //substring
    string part=greeting.substr(6,6); // extracts "jarvis"
    cout<<"substring:" <<part<<endl;
    
    //find
    size_t pos = greeting.find("jarvis");
    cout<<"find:'world' found at position"<<pos<<endl;
    
    //insert
    string inserted =greeting;
    inserted.insert(5,"goodmorning");
    cout <<"insert:"<< inserted<<endl;
    
    //erase
    string erased =greeting;
    erased.erase(5,7);//removes"goodmorning"
    cout<<"erase"<<erased<<endl;
    
    
    return 0;
}