#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int choice;
    cout << "Enter Your Choice:\n1-Create a new File\n2-Read File\n3-Write File\n4-Close File.\n";
    fstream file;
    string contents = "";

    bool flag = true;
    while (flag)
    {
        cin >> choice;

        switch (choice)
        {
        case 1:
            file.open("test.txt", ios::out);
            if (!file)
            {
                cout << "Error in creating file!!\n";
                break;
            }
            cout << "File created successfully!!\n";
            file.close();
            cout << "\n";
            break;

        case 2:
            file.open("test.txt");
            char ch;
            if (!file)
            {
                cout << "Error: File could not be opened!!\n";
                break;
            }
            cout << "Contents of file are as follows: "
                 << "\n";
            file >> ch;
            while (!file.eof())
            {
                cout << ch;
                file >> ch;
            }
            file.close();
            cout << "\n\n";
            break;

        case 3:
            contents = "My name is Jayvardhan Rathi!!\n";
            file.open("test.txt");
            file << contents;
            file.close();

            break;

        case 4:
            int status = remove("test.txt");
            if (status == 0)
                cout << "File Deleted Successfully!!\n";
            else
                cout << "Error Occurred! File could not be deleted!!\n";

            break;
        }
    }
    return 0;
}