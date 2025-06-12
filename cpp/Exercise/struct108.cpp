// 108. WAP TO Print Employee‟s ID, NAME using string 
#include <iostream>
#include<string.h> 
using namespace std;

struct stu 
{ 
 int id; 
 char name[10]; 
}; 

int main() 
{ 
struct stu s;  
s.id = 1; 
strcpy(s.name,"Manav"); 
cout<<"Id     Name"<<endl; 
cout<<"\n"<<s.id<<"      "<<s.name;
return 0;
} 