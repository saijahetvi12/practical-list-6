#include<iostream>
#include<fstream>
using namespace std;
int main() 
{
	ofstream file("dsu.txt");

    if(file.is_open()) 
	{
        file <<"Welcome to Dr Subhash University..."<<endl;
        file <<"This subject is C++ progrmming language."<<endl;
        
        file.close();
        cout <<"This file is successfully."<<endl;
    } 
	else 
	{
       cout<<"Error opening the file!"<<endl;
    }

    return 0;
}

