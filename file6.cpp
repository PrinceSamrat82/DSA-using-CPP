#include <iostream>                       
#include <fstream>                        
using namespace std;
int main() {
    fstream FileName;                   
    FileName.open("FileName.txt", ios::in);         
    if (!FileName) {                        
        cout<<"File doesn’t exist";           
    }
    else {
        cout<<"File opened successfully";         
        }
    }
    FileName.close();                   
    return 0;
}