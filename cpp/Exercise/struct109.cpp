// 109.WAP TO Print Employee‟s ID, NAME(initialization of structure)

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
struct stu s = {12,"Punit" }; 
cout<<"Id \t\t Name\n"<<endl; 
cout<<s.id<<" \t\t "<<s.name; 
return 0; 
} 