#include<iostream>
#include <fstream>
using namespace std;
int main()
{
    int choice;
    cout<<"Enter Your Choice:\n1-Create a new File\n2-Read File\n3-Write File\n4-Close File.\n";
     fstream new_file,new_file2;
     ifstream new_file;
    bool flag=true;
    while (flag){
    cin>>choice;

    switch (choice) {
case 1:
    new_file.open("new_file.txt",ios::out);
    if(!new_file)
    {
    cout<<"File creation failed\n";
    }
    else
    {
    cout<<"New file created\n";
    }
      break;

case 2:
    new_file.open("new_file.txt",ios::out);
    char s[100];
    cout<<
        //Writing to file
    cout<<"New file writing successful\n";
    break;

case 3:
    new_file.open("new_file.txt",ios::in);
    char ch; while (!new_file.eof())
     {
         new_file >>ch;
         cout << ch;
    }
    break;

case 4:
    new_file.open("new_file.txt",ios::out);
    new_file.close();
    break;
    }

    }
return 0;
}